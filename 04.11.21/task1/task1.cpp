//
// Created by Cake on 31.10.2021.
//
#include <iostream>

using namespace std;

int i;

int main(){
    cout<<((++i)*(i++));
    i = 1;
    cout<< ++i;
    i = 1;
    cout << i++;
    cout << i;
    i = 1;
    cout<<((++i)*(i++));
    return 0;}

