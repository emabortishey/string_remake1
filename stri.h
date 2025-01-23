#pragma once
#include <iostream> 
#include <conio.h>
#include <stdio.h>
#include <cstdio>

using namespace std;

class stri
{
	static int counter;
	size_t length;
	char* stringg;
public:

	// конструктор с 1 параметром переделан
	// в более удобную версию, принимающую строку
	// и не требующую размер для инициализации
	explicit stri(const char* obj) : length{ sizeof(obj)/sizeof(char)}, stringg{new char[sizeof(obj) / sizeof(char)]}
	{
		strcpy_s(stringg, length, obj);
	}

	// конструктор копирования
	explicit stri(const stri& obj) : length{ obj.length }, stringg{ new char[obj.length] } 
	{
		strcpy_s(stringg, length, obj.stringg); 
		counter++;
	}

	// конструктор переноса
	explicit stri(stri&& obj) : length{ obj.length }, stringg{ obj.stringg }
	{
		obj.length = 0;
		obj.stringg = nullptr;
		counter++;
	}

	// теперь модификатор принимает строку по константе
	void set_string(const char* stringg_P);

	void print_string() const;

	// теперь возвращение происходит по константе
	const char* get_string() const
	{
		return stringg;
	}

	// аксессор для счётчика теперь не создает локальную переменную
	static int get_count()
	{
		return counter;
	}

	~stri();
};