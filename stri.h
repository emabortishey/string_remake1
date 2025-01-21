#pragma once
#include <iostream> 
#include <conio.h>
#include <stdio.h>
#include <cstdio>

using namespace std;

class stri
{

private:
	static int counter;
	int length;
	char* stringg;
public:
	stri() : stri(80, "nope") {}

	stri(int length_P) : stri(length_P, "nope") {}

	stri(int length_P, const char* stringg_P) : length{ length_P }, stringg{ new char[length] { *stringg_P } } { get_count()++; }

	void set_string(char* stringg_P)
	{
		strcpy_s(stringg, length, stringg_P);
	}


	void print_string()
	{
		cout << "\nСтрока: ";
		puts(stringg);
	}

	char* get_string()
	{
		return stringg;
	}

	static int& get_count()
	{

		static int counter = 0;
		return counter;
	}

	~stri()
	{
		delete[] stringg;
	}
};
