#include "stri.h"

int main()
{
    setlocale(LC_ALL, "Russian");
    stri test;
    stri test1;
    stri test2;

    char* str = new char[80];

    cout << "Введите строку для записи в класс: ";

    gets_s(str, 80);

    test.set_string(str);

    test.print_string();

    cout << "\nСтрока полученная с помощью аксессора: " << test.get_string();

    cout << "\n\nКоличество созданных элементов: " << test.get_count();

    return 0;
}
