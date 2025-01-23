#include "stri.h"

int stri::counter{ 0 };

void stri::set_string(const char* stringg_P)
{
	// модификатор удаляет строку перед присваиванием ей новой
	delete[] stringg;

	// присваивает новую длину атрибуту length
	length = (sizeof(stringg_P) / sizeof(char));

	// пересоздаёт строку
	stringg = new char[length];

	strcpy_s(stringg, length, stringg_P);
}

void stri::print_string() const
{
	cout << "\nСтрока: ";
	puts(stringg);
}

stri::~stri()
{
	// теперь при удалении счётчик уменьшается
	counter--;

	delete[] stringg;
}