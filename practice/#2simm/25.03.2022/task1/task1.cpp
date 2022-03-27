//
// Created by Cake on 24.03.2022.
//
#include <iostream>
#include <windows.h>
#include <string>
#include <time.h>
#include <math.h>


using namespace std;

string names[10] = {"Иван", "Даниил","Николай","Мирон","Антон","Константин","Михаил","Егор","Сергей","Илья"};
string surnames[10] = {"Суворов","Ковалёв","Лановой","Ситников","Лебедев","Притула","Иванив","Буров","Наумов", "Самойлов"};
string patronymics[10] = {"Михайлович","Леонидович","Максимович","Евгеньевич","Платонович","Львович","Данилович","Платонович","Викторович","Петрович"};
string streets[10] = {"Кремлёвская", "Софийская", "Москворецкая", "Лужнецкая", "Берсеневская", "Андреевская", "Сосновая", "Солянка", "Большая Ордынка", "Большая Полянка"};

int colis=0;

struct person{
    person(){
        full_name ="null";
        home ="null";
        //ID ="null";
        next = nullptr;
    }
    string full_name;
    string home;
    string ID;
    person* next;
};

struct hash_table{
    person* array;
    hash_table(int size){
        array = new person[size];
    }
    ~hash_table(){
        delete[] array;
    }
    void add(person temp, int size);
    void pop(string id, int size);
    void find_index(string id, int size);
};

int get_r_num(){
    return rand() % 10;
}

string create_home(){
    string out;
    return streets[get_r_num()];
}

string create_ID(){
    string out;
    for(int i = 0; i<8;++i){
         out = out + to_string(get_r_num());
    }
return out;}

string create_name(){
    string out;
    out = names[get_r_num()] + " " + surnames[get_r_num()] + " " + patronymics[get_r_num()];
    return out;}

person create_person(){
    person temp;
    temp.full_name = create_name();
    temp.ID = create_ID();
    temp.home = create_home();
    temp.next = nullptr;

    cout<<temp.full_name<<"  "<<temp.home<<"  "<<temp.ID<<endl<<endl;
    return temp;}

void set_person(person* array, int count){
    for(int i=0; i<count;++i){
        array[i] = create_person();
    }
}

void show_info(person temp){
    person* current = temp.next;
    cout<<endl<<temp.full_name<<"  "<<"ул. "<<temp.home<<"  "<<temp.ID<<endl;
    while(current != nullptr){
        cout<<current->full_name<<"  "<<"ул. "<<current->home<<"  "<<current->ID<<endl;
        current = current->next;
    }
    cout<<"-------------------"<<endl;

}

void show_hash_table(hash_table* table, int size){
    for(int i=0;i<size;++i){
        show_info(table->array[i]);
    }

}

int main(){
    int size;
    string key;
    srand(time(0));
    SetConsoleOutputCP(CP_UTF8);
    cout<<"Введите кол-во генерируемых элементов: ";
    cin>>size;
    cout<<endl;

    person* array = new person[size];
    hash_table table(size);
    set_person(array, size);
    cout<<"--------------------------------------------"<<endl;
    for(int i=0;i<size;++i){
        table.add(array[i], size);
    }
    cout<<endl;
    show_hash_table(&table, size);
    cout<<endl<<"Число колизий: "<<colis;
    cout<<endl<<"Введите ID пасспорта:"<<endl;
    cin.get();
    getline(cin, key);
    table.find_index(key, size);
}

int hash_f(string id, int size){
    double a = ((sqrt(5)-1)/2) * stoi(id.substr(0, 8));
    double c = size * (a - static_cast<int>(a));
    return (static_cast<int>(c));}

void hash_table::add(person temp, int size) {
    int index = hash_f(temp.ID, size);
    //int index = 4;
    cout<<index<<" "<<"//  ";
    if(array[index].ID == "\0"){
        array[index] = temp;
        return;
    }
    else{
        ++colis;
        person* node = new person;
        node->full_name = temp.full_name;
        node->ID = temp.ID;
        node->home = temp.home;
        node->next = nullptr;
        if(array[index].next!= nullptr){
            person* current = array[index].next;
            while(current->next != nullptr){
                current = current->next;
            }
            current->next = node;
            return;
        }
        else{
            array[index].next = node;
            return;
        }

    }

}

void hash_table::find_index(string id, int size) {
    int index = hash_f(id, size);
    if(array[index].ID != "\0"){
        if(array[index].ID == id){
            cout<<"Наденное значение!"<<endl;
            cout<<endl<<array[index].full_name<<"  "<<"ул. "<<array[index].home<<"  "<<array[index].ID<<endl;
        }
        else{
            person* current = array[index].next;
            bool f=false;
            while((current != nullptr)&&(!f)){
                if (current->ID == id){
                    f = true;
                    cout<<"Наденное значение!"<<endl;
                    cout<<current->full_name<<"  "<<"ул. "<<current->home<<"  "<<current->ID<<endl<<endl;
                }
                else{
                    current = current->next;
                }

            }
            if (!f){
                cout<<"Элемента с таким ключом не существует"<<endl;
            }
        }
    }
    else{
        cout<<"Такого ID нет в таблице"<<endl;
        return;
    }
}