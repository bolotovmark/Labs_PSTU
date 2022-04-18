#include <iostream>
#include "people.h"
#include "Teacher.h"
using namespace std;

int main() {
    Person a;
    cin >> a;
    cout << a << endl;
    Person b("Bart",12);
    cout << b << endl;
    Person c(a);
    c.set_name("Alex");
    cout << c << endl;

    cout << endl;

    Teacher n;
    int tmp;
    cin >> n;
    cout << n << endl;
    cout << "Введите количество часов, которые необходимо добавить к нагрузке: ";
    cin >> tmp;
    n + tmp;
    cout << n;



    return 0;
}
