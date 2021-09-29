#include <iostream>
using namespace std;

int main()
{
	cout << "Bruh\n";
    int firstNumber, secondNumber, sumOfTwoNumbers,diff,mul,quo;
    
    cout << "Enter first number: ";
    cin >> firstNumber;
    
    cout << "Enter second number: ";
    cin >> secondNumber;

   	//
    sumOfTwoNumbers = firstNumber + secondNumber;
	diff = firstNumber - secondNumber;
	mul = firstNumber * secondNumber;
	quo = firstNumber / secondNumber;
    
    cout << endl << firstNumber << " + " <<  secondNumber << " = " << sumOfTwoNumbers;     
	cout << endl << firstNumber << " - " <<  secondNumber << " = " << diff; 
	cout << endl << firstNumber << " * " <<  secondNumber << " = " << mul; 
	cout << endl << firstNumber << " * " <<  secondNumber << " = " << quo;
    return 0;
}
