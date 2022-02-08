//
// Created by Cake on 06.11.2021.
//
#include <iostream>

using namespace std;

int sum(int n, ...)
{
    int* ptr = &n;
    int result = 0, a, b;
    for( ; n>0; n--){
        ++ptr;
        a = *(++ptr);
        ++ptr;
        b = *(++ptr);
        --n;
        result += a * b;

    }
    return result;
}

int main()
{
    cout<<sum(8, 1, 52, 3, 4, 89, 34, 56, 22)<<endl;
    cout<<sum(10, 12, 21, 13, 4, 5, 4, 65, 90, 123, 78)<<endl;
    cout<<sum(12, 52, 67, 1, 23, 50, 41, 25, 54, 22, 34, 67, 12)<<endl;
    return 0;
}