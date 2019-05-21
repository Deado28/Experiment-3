#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

int main ()
{
	int i, j, k, temp;
	char printer[100];
	cout <<" Enter up to 100 Variables: \n";
		
	cin.getline (printer, 100);
	
	for ( i = 0; printer[i] != '\0'; i++)
		printer[i] = printer [i];
	
	for ( j = 0; j <= i ; j++)
		{
			for (k = 0; k <= i - j - 1; k++)
			{
				if (printer[k] > printer[k+1])
				{
					temp = printer[k];
					printer[k] = printer[k+1];
					printer[k+1] = temp;
				}
			}
		}

	cout << "Reversed Output: \n";

	for	( j = 0; j < i; ++j)
	{
		cout << printer[j] << ". ";
	}
	cout << endl; 
	cout << "Size of the Entered Variables: " << i /*100-strlen (printer)*/ << endl;
_getch();
return 0;
}