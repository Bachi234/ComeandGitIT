#include <iostream>
using namespace std;

int main()
{
	cout << "Bruh";
    int firstNumber, secondNumber, sumOfTwoNumbers,diff;
    
    cout << "Enter first number: ";
    cin >> firstNumber;
    
    cout << "Enter second number: ";
    cin >> secondNumber;

    // sum of two numbers is stored in variable sumOfTwoNumbers
    sumOfTwoNumbers = firstNumber + secondNumber;
	diff = firstNumber - secondNumber;
    // Prints sum 
    cout << endl << firstNumber << " + " <<  secondNumber << " = " << sumOfTwoNumbers;     
	cout << endl << firstNumber << " - " <<  secondNumber << " = " << diff; 
    return 0;
}
