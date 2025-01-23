#include "stri.h"

int stri::counter{ 0 };

void stri::set_string(const char* stringg_P)
{
	// ����������� ������� ������ ����� ������������� �� �����
	delete[] stringg;

	// ����������� ����� ����� �������� length
	length = (sizeof(stringg_P) / sizeof(char));

	// ���������� ������
	stringg = new char[length];

	strcpy_s(stringg, length, stringg_P);
}

void stri::print_string() const
{
	cout << "\n������: ";
	puts(stringg);
}

stri::~stri()
{
	// ������ ��� �������� ������� �����������
	counter--;

	delete[] stringg;
}