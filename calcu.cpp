#include <iostream>
using namespace std;

int main()
{
	cout << "Awit na calculator\n"
		<<"---------------------\n";
    int firstNumber, secondNumber, sumOfTwoNumbers,diff,mul,quo,rem;
   
    cout << "Enter first number: ";
    cin >> firstNumber;
    
    cout << "Enter second number: ";
    cin >> secondNumber;

   	//
    sumOfTwoNumbers = firstNumber + secondNumber;
	diff = firstNumber - secondNumber;
	mul = firstNumber * secondNumber;
	quo = firstNumber / secondNumber;
	rem = firstNumber % secondNumber;
    
    cout << endl << firstNumber << " + " <<  secondNumber << " = " << sumOfTwoNumbers;     
	cout << endl << firstNumber << " - " <<  secondNumber << " = " << diff; 
	cout << endl << firstNumber << " * " <<  secondNumber << " = " << mul; 
	cout << endl << firstNumber << " / " <<  secondNumber << " = " << quo;
	cout << endl << firstNumber << " % " <<  secondNumber << " = " << rem;
	
    return 0;
}
