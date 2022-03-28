//
// Created by Cake on 28.03.2022.
//
#include <iostream>
#include <string>
#include <windows.h>

using namespace std;

int search(string str, string to_find);

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    string to_find;
    string str;
    do
    {
        cout << "Введите строку, в которой нужно найти подстроку: ";
        cin >> str;
    } while (str == "");
    cout << endl;
    do
    {
        cout << "Введите строку, которую нужно найти: ";
        cin >> to_find;
    } while (to_find == "");

    int index = search(str, to_find);
    cout << "Преобразованная строка: ";
    str.erase(index, to_find.length());
    str.insert(0, to_find);
    cout << str << endl << endl;
    return 0;
}


int search(string str, string to_find)
{
    int str_length = str.length();
    int to_find_length = to_find.length();
    int* arr = new int[to_find_length];
    int i = 1, j = 0;
    arr[0] = 0; // в начале массива всегда 0
    while (i <= to_find_length) // до тех пор, пока не закончился ключ
    {
        if (to_find[i] == to_find[j]) // если символы совпадают
        {
            arr[i] = j + 1; // то присвоение длины префикса
            i++; // сдвиг указателей
            j++;
        }
        else if (j == 0) // иначе если символы не равны и указатель в начале
        {
            arr[i] = 0; // то длина префикса = 0
            i++; // и сдвиг указателя
        }
        else // иначе (символы не равны и указатель уже смещен)
        {
            j = arr[j - 1]; // сдвиг указателя на следующий символ после гарантированного совпадения и проверка занвово
        }
    }

    i = 0; // индекс для прохождения по строке
    j = 0; // индекс для прохождения по ключу
    while (i <= str_length) // пока не закончилась строка
    {
        if (str[i] == to_find[j]) // если символы совпадают
        {
            i++; j++; // сдвиг указателей
            if (j == to_find_length) // и если указатель ключа совпадает с его длиной
            {
                return i - to_find_length; // то вхождение найдено по индексу i - to_find_length
            }
        }
        else if (j == 0) // иначе если первый символ ключа не совпадает с символом из строки
        {
            i++; // то сдвиг указателя по строке
            if (i == str_length) // и если строка закончилась
            {
                return -1; // то подстроки нет
            }
        }
        else
        {
            j = arr[j - 1]; // иначе сдвиг указателя ключа по таблице
        }
    }
}
