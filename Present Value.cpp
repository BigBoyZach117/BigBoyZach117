// Zachariah Hunt
// Present Value Algorithm 
// Program to compute the present value of an item based off of its future value five years from now.

#include<iostream> 
#include<cmath>
#include<iomanip>
using namespace std;

int main()
{
	//Declare variables.
	double futureValue, discountRate, numYears, presentValue;
	
	//Output prompt to user. 
	cout << "You are aware that 5 years from now you will want "; 
	cout << "to buy an item that will cost you ";
	cout << "$1050.\nYou want to see what the cost would be today, so you ";
	cout << "can tell if you should by it now or wait." << endl;
	
	//Assign values to the variables for the formula.
	futureValue;
	discountRate = 1.06;
	numYears = 5;
	
	//Ask the user to input the future value amount.
	cout << "\nPlease enter in the future value amount at your earliest convenience. :) " << endl;
	cin >> futureValue;
	presentValue = futureValue / (pow (discountRate, numYears) );
	cout << "\nThe present value of the item now is $" << fixed << showpoint 
	     << setprecision(2) << presentValue << ".";
		
	cout << endl;
	return 0;
}
