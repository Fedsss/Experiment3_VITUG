#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

int main ()
{
	char arr[100], a;

	cout << "Enter the array of elements: "; cin >> arr;
	cout << "The array of elements in reverse: ";

		for (a = strlen(arr); a >= 0; a--)
	{cout << arr[a];}

	cout << " "<< endl;
	cout << "The size of the array is: " << strlen(arr) << endl;
	system("pause");

	_getch ();
	return 0;
}