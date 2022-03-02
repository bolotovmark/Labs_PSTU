//
// Created by Cake on 28.02.2022.
//
#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <windows.h>

using namespace std;

struct flm {
    char first[300];
    char last[300];
    char middle[300];
};

struct Human {
    flm fullname;
    char home[300];
    char number[300];
    long int age;
};


Human* create(int n, Human person[], flm name[]){

    cout<<"Введите имя: "; cin>>name[n].first;
    cout<<'\n'<<"Введите фамилию: "; cin>>name[n].last;
    cout<<'\n'<<"Введите Отчество: "; cin>>name[n].middle;
    person[n].fullname = name[n];

    cout<<'\n'<<"Введите адрес: "; cin>>person[n].home;
    cout<<'\n'<<"Введите номер телефона: "; cin>>person[n].number;
    cout<<'\n'<<"Введите возраст: "; cin>>person[n].age;
    return (&person[n]);}

void write(char * filename, int n, Human person[], flm name[]){
    FILE *fp;

    if ((fp=fopen(filename, "wb"))== nullptr){
        printf("Cannot open file.\n");
        exit (1);
    }

    for(int i=0; i<n; ++i){
        fwrite(create(i, person, name), sizeof(struct Human), 1, fp);
    }
    rewind(fp);
    fclose(fp);
    return;}


void read(char * filename, struct Human person[], int n){
    FILE *fp;
    if ((fp=fopen(filename, "rb"))== nullptr){
        printf("Cannot open file.\n");
        exit (1);
    }
    int i=0;
    rewind(fp);
    while(i<n){
        fread(&person[i], sizeof(struct Human), 1, fp);
        cout<<person[i].fullname.first<<'\t'<<person[i].fullname.last<<'\t'<<person[i].fullname.middle<<'\n';
        cout<<"Адрес проживания — "<<person[i].home<<'\n';
        cout<<"Номер телефона — "<<person[i].number<<'\n';
        cout<<"Возраст — "<<person[i].age<<'\n'<<'\n';
        ++i;
    }
    fclose(fp);
}

int find(char * filename, struct Human person[], int n, int k){
    FILE *fp;
    if ((fp=fopen(filename, "rb+"))== nullptr){
        printf("Cannot open file.\n");
        exit (1);
    }
    int i=0;
    fpos_t pos;
    fpos_t pos0;
    fpos_t pos1;
    fpos_t pos2;

    while(i<n){
        fgetpos(fp, &pos); //#0
        fread(&person[i], sizeof(struct Human), 1, fp); //#1
        if (person[i].age==k){
            if (i!=(n-1)){
                int j = i;
                ++j;

                pos0 = pos;
                fgetpos(fp, &pos1);

                while (j<n){

                    fread(&person[j], sizeof(struct Human), 1, fp); //читаем для сдвига #2

                    fgetpos(fp, &pos2); //запоминаем позицию 2 #2

                    fsetpos(fp, &pos0); //для записи сдвигаемся  #0

                    fwrite(&person[j], sizeof(struct Human), 1, fp); //записываем #1

                    pos0=pos1; //переписываем #1>>0
                    pos1=pos2;

                    fsetpos(fp, &pos1);

                    ++j;
                }
                fsetpos(fp, &pos);
            }
            --n;
        }
        else{
            ++i;
        }
    }
    fclose(fp);
    return n;}

int add(char * filename, struct Human person[], struct flm name[], int n, int p){
    FILE *fp;
    if ((fp=fopen(filename, "rb+"))== nullptr){
        printf("Cannot open file.\n");
        exit (1);
    }
    int i = 0;
    fpos_t pos0;
    fpos_t pos1;

    while(i<p){
        fread(&person[i], sizeof(struct Human), 1, fp);
        ++i;
    }
    fgetpos(fp, &pos0);
    fread(&person[i], sizeof(struct Human), 1, fp);
    fgetpos(fp, &pos1);
    cout<<"Заполните вставляемую структуру"<<endl;
    fsetpos(fp, &pos0);
    fwrite(create(i, person, name), sizeof(struct Human), 1, fp);
    pos0 = pos1;
    ++i;
    while(i<(n+1)){
        fsetpos(fp, &pos0);
        fread(&person[i], sizeof(struct Human), 1, fp);
        fgetpos(fp, &pos1);
        fsetpos(fp, &pos0);
        fwrite(&person[i-1], sizeof(struct Human), 1, fp);
        pos0=pos1;
        ++i;
    }
    return n+1;
}


int main(){
    SetConsoleOutputCP(CP_UTF8);
    int n, k, p;
    char * filename = "test2.dat";

    cout<<"Укажите кол-во человек: ";
    cin>>n;
    struct flm name[n+1];
    struct Human person[n+1];
    write(filename, n, person, name);
    read(filename, person, n);
    cout<<endl<<"Удалить элементы с заданным возрастом. Укажите возраст: ";
    cin>>k;
    n = find(filename, person, n, k);
    read(filename, person, n);
    cout<<endl<<"Укажите номер, чтобы добавить элемент после заданного номерами:";
    cin>>p;
    n = add(filename, person, name,  n, p);
    read(filename, person, n);
    return 0;}
