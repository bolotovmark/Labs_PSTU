//
// Created by Cake on 22.02.2022.
//
#include <iostream>
#include <windows.h>
#include <stdio.h>
#include <stdlib.h>


using namespace std;

struct Human {
    char fst[300];
    char home[300];
    char number[300];
    long int age;
};

int write(char * filename, struct Human *t, int n){
    FILE * fp;
    char *c;

    // число записываемых байтов
    int size;
    size = n * sizeof(struct Human);

    if ((fp = fopen(filename, "wb")) == nullptr)
    {
        perror("Error occured while opening file");
        return 1;
    }
    // записываем количество структур
    c = (char *)&n;
    for (int i = 0; i<sizeof(int); i++)
    {
        putc(*c++, fp);
    }

    // посимвольно записываем в файл все структуры
    c = (char *) t;
    for (int i = 0; i < size; i++)
    {
        putc(*c, fp);
        c++;
    }
    fclose(fp);
    return 0;
}

int main(){
    int n;
    FILE *fp;
    SetConsoleOutputCP(CP_UTF8);

    struct Human v[2];
    char * filename = "people.dat";

    for(int i = 0; i < 2; i++)
    {
        cout << "Введите ФИО(Eng):" << endl; cin >> v[i].fst;
        cout << "Введите адрес проживания:" << endl; cin >> v[i].home;
        cout << "Введите номер телефона:" << endl; cin >> v[i].number;
        cout << "Введите возраст: " <<endl; cin >> v[i].age;
        }

    n = sizeof(v)/sizeof(v[0]);
    write(filename, v, n);


return 0;}
