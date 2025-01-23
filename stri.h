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

	// ����������� � 1 ���������� ���������
	// � ����� ������� ������, ����������� ������
	// � �� ��������� ������ ��� �������������
	explicit stri(const char* obj) : length{ sizeof(obj)/sizeof(char)}, stringg{new char[sizeof(obj) / sizeof(char)]}
	{
		strcpy_s(stringg, length, obj);
	}

	// ����������� �����������
	explicit stri(const stri& obj) : length{ obj.length }, stringg{ new char[obj.length] } 
	{
		strcpy_s(stringg, length, obj.stringg); 
		counter++;
	}

	// ����������� ��������
	explicit stri(stri&& obj) : length{ obj.length }, stringg{ obj.stringg }
	{
		obj.length = 0;
		obj.stringg = nullptr;
		counter++;
	}

	// ������ ����������� ��������� ������ �� ���������
	void set_string(const char* stringg_P);

	void print_string() const;

	// ������ ����������� ���������� �� ���������
	const char* get_string() const
	{
		return stringg;
	}

	// �������� ��� �������� ������ �� ������� ��������� ����������
	static int get_count()
	{
		return counter;
	}

	~stri();
};