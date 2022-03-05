//
// Created by Cake on 02.03.2022.
//
#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
    char buffer[2];
    int i = 1, count = 0;
    FILE *f1, *f2;

    f1 = fopen("f1.txt", "r");
    f2 = fopen("f2.txt", "w");

    while (fgets(buffer, 2, f1) != nullptr){
        if (i>=4){
            if ((*buffer == ' ')||(*buffer == '\n')){
                count = 0;
            }
            else{
                ++count;
            }
            fputs(buffer, f2);
        }
        else{
            if (*buffer == '\n'){
                ++i;
            }
        }
    }
    cout<<"length final word = "<<count;
    fclose(f1);
    fclose(f2);
}