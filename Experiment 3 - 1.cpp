#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;
int main ()
{
	int numbers[10];
	int smallest = 0;
	int largest = 0;
	int temp = 0;
	int arr[10];
	int i;
	double s=0;
	double ave;

	for ( int i = 0; i <= 9; i++)
	{
		cout << "Please enter number: " << i + 1 << " \n";
		cin >> numbers [i];
	}

	smallest = numbers[0];
	largest = numbers[0];
	
	for (int i = 1; i <= 9; i++)
	{
		temp = numbers[i];
		if (temp < smallest)
			smallest = temp;

		if (temp > largest)
			largest = temp;
	}
	cout << "Largest Number is:" << largest << " \n";
	cout << "Smallest Number is:" << smallest << " \n";

	for ( i = 0; i <= 9; i++)
	{
		s=s+numbers[i];
	}
	cout << "Sum of all numbers is: " << s << " \n";

	for ( i = 0; i <= 9; i++)
	{
		ave = s / 10;
	}
	cout <<"Average of all Integers is: "<< fixed << setprecision(2) << ave;
	_getch();

}