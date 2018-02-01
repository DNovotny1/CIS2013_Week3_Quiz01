/* ask for 2 numbers, ask if + or*, print output, repeat*/

#include<iostream>
using namespace std;

int main()
{	
	//hold numeric values and sign for operator
	int num1, num2;
	char sign;
	while(true)
	{
		cout << "Enter first digit.";
		cin >> num1;
		cout << "Enter Second digit.";
		cin >> num2;
		cout << "Would you like to add or multiply(+ or *)" ;
		cin >> sign;
		if (sign == '+')
		{
			cout << num1 + num2 << "\n";
		}
		if (sign == '*')
		{
			cout << num1 * num2 << "\n";
		}
	}
}