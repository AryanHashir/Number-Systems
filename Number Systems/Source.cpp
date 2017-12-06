#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int binary(int);
int octal(int);
string hexadecimal(int);

void main()
{
	int n;

	cout << "Please enter a positive decimal number to convert it into binary, octal and hexadecimal number systems.\nDecimal Number = ";
	cin >> n;

	cout << "\nBinary Number = " << binary(n) << endl;
	cout << "Octal Number = " << octal(n) << endl;
	cout << "Hexadecimal Number = " << hexadecimal(n) << '\n' << endl;

	system("pause");
}

int binary(int n1)
{
	int bin = 0;

	for (int a = 0; n1 >= 1; a++)
	{
		bin += (n1 % 2)*(pow(10, a));
		n1 /= 2;
	}
	return bin;
}

int octal(int n2)
{
	int oct = 0;

	for (int a = 0; n2 >= 1; a++)
	{
		oct += (n2 % 8)*(pow(10, a));
		n2 /= 8;
	}
	return oct;
}

string hexadecimal(int n3)
{
	string hex = "", digit;

	while (n3 >= 1)
	{
		digit = to_string(n3 % 16);
		{
			if (digit == "10")
				digit = "A";
			if (digit == "11")
				digit = "B";
			if (digit == "12")
				digit = "C";
			if (digit == "13")
				digit = "D";
			if (digit == "14")
				digit = "E";
			if (digit == "15")
				digit = "F";
		}
		hex = digit + hex;

		n3 /= 16;
	}
	if (hex == "")
		hex = "0";
	return hex;
}