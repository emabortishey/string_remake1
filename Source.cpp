#include "stri.h"

stri&& Func(const char* obj_s);

int main()
{
    setlocale(LC_ALL, "Russian");
    stri test("meow");

    //test.print_string();

    // тестирование конструктора переноса
    stri test1(Func("bark"));
    
    /*
    stri test2;

    char* str = new char[80];

    cout << "Введите строку для записи в класс: ";

    gets_s(str, 80);

    test.set_string(str);

    test.print_string();

    cout << "\nСтрока полученная с помощью аксессора: " << test.get_string();

    cout << "\n\nКоличество созданных элементов: " << test.get_count();*/

    //test.print_string();

    // вывод полученной с помощью 
    // конструктора переноса строки
    test1.print_string();

    return 0;
}

stri&& Func(const char* obj_s)
{
    return stri{ obj_s };
}