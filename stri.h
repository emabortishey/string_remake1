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

	// изаменена инициализаци€ stringg с помощью ранее 
	// инициализированного в списке инициализаторов атрибута
	stri(int length_P, const char* stringg_P) : length{ length_P }, stringg{ new char[length_P] { *stringg_P } } { counter++; }

	void set_string(char* stringg_P)
	{
		delete[] stringg;

		length = (sizeof(stringg_P) / sizeof(char));

		stringg = new char[length];

		strcpy_s(stringg, length, stringg_P);
	}

	void print_string()
	{
		cout << "\n—трока: ";
		puts(stringg);
	}

	const char* get_string()
	{
		return stringg;
	}

	int get_count()
	{
		return counter;
	}

	~stri()
	{
		counter--;

		delete[] stringg;
	}
};