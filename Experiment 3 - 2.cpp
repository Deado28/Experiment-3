#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int tempe[21];
	for ( int i = 0; i <= 6; i++)
	{
		cout << "Province A, Day " << i + 1 << ": ";
		cin >> tempe[i];
	}
	for ( int i = 7; i <= 13; i++)
	{
		cout << "Province B, Day " << i - 6<< ": ";
		cin >> tempe[i];
	}
	for ( int i = 14; i <= 20; i++)
	{
		cout << "Province C, Day " << i -13 << ": ";
		cin >> tempe[i];
	}

	cout <<"Outline of Temperatures in Province A, Province B and Province C \n";
	for ( int i = 0; i <= 6; i++)
	{
		cout << "Province A, Day " << i + 1 << ": " << tempe[i] << endl;
	}
	for ( int i = 7; i <= 13; i++)
	{
		cout << "Province B, Day " << i - 6 << ": " << tempe[i]<< endl;
	}
	for ( int i = 14; i <= 20; i++)
	{
		cout << "Province C, Day " << i - 13 << ": " << tempe[i]<< endl;
	} 
_getch ();
return 0;
}