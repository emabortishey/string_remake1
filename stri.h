#pragma once
#include <iostream> 
#include <conio.h>
#include <stdio.h>
#include <cstdio>

using namespace std;

class stri
{
	static int counter;
	int length;
	char* stringg;
public:
	stri() : stri(80, "nope") {}

	stri(int length_P) : stri(length_P, "nope") {}

	// изаменена инициализация stringg с помощью ранее 
	// инициализированного в списке инициализаторов атрибута
	stri(int length_P, const char* stringg_P) : length{ length_P }, stringg{ new char[length_P] { *stringg_P } } { counter++; }

	// теперь модификатор принимает строку по константе
	void set_string(const char* stringg_P);

	void print_string();

	// теперь возвращение происходит по константе
	const char* get_string()
	{
		return stringg;
	}

	// аксессор для счётчика теперь не создает локальную переменную
	int get_count()
	{
		return counter;
	}

	~stri();
};