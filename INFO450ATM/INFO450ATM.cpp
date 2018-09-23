//INFO450ATM Assignment Written by Alexander Truong 
#include <iostream>
//allows us to read or write to the standard input/output streams
using namespace std; 
//tells the compiler that the symbol names defined in the std namespace are to be brought to our programs scope
int main()
//main function with the data type labeled because the function will be turning an int value
{
//The variable's datatypes are defined here that we'll be mainly using throughout the program.
//They represent how we manipulate the end user's response 
	int input = 0;
	char anotherinput = 'a';
//we'll be using the do while loop a lot to bring the user back to ATM menu
	do
	{
//here we define our variable's data types again for all banknotes 
		int fifties = 0,
			twenties = 0,
			tens = 0,
			fives = 0,
			ones = 0;

		cout << "\n	Welcome to you local bank ATM" << endl;
		cout << "	Withdrawals are limited to values greater than $1 and less than $300" << endl;
		cout << "	Please enter the amount you wish to withdraw: ";
		cin >> input;
//message descripts for our ATM menu 
		while (input < 1 || input > 300)
//we use the while loop to detect if the input is within our assigned parameters
		{
			cout << "\n-- Invalid Input --" << endl;
			cout << "\n-- Returned to main menu --" << endl;
			main();
//when the input is not within our assigned parameters it'll kick our user back to the main menu
		}
		{
			while (input >= 1 && input <= 301)
//the while loop begins with reading value with a minimum of $1 or $300 
			{
				cout << "\nDispensing the following bills: " << endl;

				while (input >= 50)

				{
					fifties = (input / 50);
//when we divide our first largest denomination they'll be stored in fifties to be printed
					cout << "\n "<< fifties << " $50 dollar bills." << endl;
					input %= 50;
//remainder 50 will be stored in input and within it's memory location looped into each condition that we assiged it to emulate the decreasing denominations
				}

				while (input >= 20)

				{
//the same idea repeats for 20's
					twenties = (input / 20);
					cout << "\n " << twenties << " $20 dollar bills." << endl;
					input %= 20;
				}

				while (input >= 10)
//and for 10's
				{
					tens = (input / 10);
					cout << "\n " << tens << " $10 dollar bills." << endl;
					input %= 10;
				}

				while (input >= 5)
//and for 5's
				{
					fives = (input / 5);
					cout << "\n " << fives << " $5 dollar bills." << endl;
					input %= 5;
				}
//and finally are lowest value and bank note
				while (input >= 1)

				{
					ones = input;
					cout << "\n " << ones << " $1 dollar bills." << endl;
					input %= ones;
				}

				while (input == 0)
//when remainder zero is finally stored in our varialbe input we activate the condition to ask the user to request more withdrawls 
				{
					cout << "\nWould you like to make another withdrawal?" << endl;
					cout << "\nEnter Y or y to continue or enter any letter to exit: ";
					cin >> anotherinput;
					break;
//char value is stored in anther input to which the while loop will take us back to the main menu or the user will enter a letter to end the program
				}
			}
		}
	}
//as seen here where it can read both lowest y and Y for yes
		while ((anotherinput) == 'Y' || (anotherinput == 'y'));
		return 0;
}