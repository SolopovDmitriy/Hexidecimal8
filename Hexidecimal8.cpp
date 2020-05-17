/*
#include <iostream>
#include <string.h>

int Hexidecimal(char st[10])
{
	int i, s, k, p;
	s = 0;
	p = strlen(st) - 1;
	for (i = 0; st[i] != '\0'; i++)
	{
		switch (toupper(st[i]))
		{
		case 'A': k = 10; break;
		case 'B': k = 11; break;
		case 'C': k = 12; break;
		case 'D': k = 13; break;
		case 'E': k = 14; break;
		case 'F': k = 15; break;
		case '1': k = 1; break;
		case '2': k = 2; break;
		case '3': k = 3; break;
		case '4': k = 4; break;
		case '5': k = 5; break;
		case '6': k = 6; break;
		case '7': k = 7; break;
		case '8': k = 8; break;
		case '9': k = 9; break;
		case '0': k = 0; break;
		}
		s = s + k * pow(16, p);
		p--;
	}
	std::cout << s << std::endl;
	return s;
}

void main()
{
	char st[10];
	std::cout << "Please enter a hexadecimal number : \n";
	std::cin >> st;
	std::cout << "Result number in decimal : ";
	Hexidecimal(st);

}
*/
#include<iostream>
#include<string>
using namespace std;

int Hexidecimal(string str);

void main()
{
	string str;
	cout << "Please enter a hexadecimal number : ";
	cin >> str;
	cout << "Result number in decimal: " << Hexidecimal(str) << endl;

}

int Hexidecimal(string str)
{
	int decimal = 0;
	int m = 1;
	for (int i = str.length() - 1; i >= 0; i--)
	{
		int hexValueSymbol = str[i];
		int hexValue;
		if (hexValueSymbol >= '0' && hexValueSymbol <= '9')
		{
			hexValue = str[i] - '0';
		}
		else if (hexValueSymbol >= 'A' && hexValueSymbol <= 'F')
		{
			hexValue = str[i] - 'A' + 10;
		}
		else if (hexValueSymbol >= 'a' && hexValueSymbol <= 'f')
		{
			hexValue = str[i] - 'a' + 10;
		}
		else
		{
			cout << "Hexidecimal number is invalid." << endl;
			return 0;
		}

		decimal += hexValue * m;
		m *= 16;
	}
	return decimal;
}