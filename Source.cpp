#include "stri.h"

stri&& Func(const char* obj_s);

int main()
{
    setlocale(LC_ALL, "Russian");
    stri test("meow");

    //test.print_string();

    // ������������ ������������ ��������
    stri test1(Func("bark"));
    
    /*
    stri test2;

    char* str = new char[80];

    cout << "������� ������ ��� ������ � �����: ";

    gets_s(str, 80);

    test.set_string(str);

    test.print_string();

    cout << "\n������ ���������� � ������� ���������: " << test.get_string();

    cout << "\n\n���������� ��������� ���������: " << test.get_count();*/

    //test.print_string();

    // ����� ���������� � ������� 
    // ������������ �������� ������
    test1.print_string();

    return 0;
}

stri&& Func(const char* obj_s)
{
    return stri{ obj_s };
}