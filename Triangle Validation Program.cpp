//Zachariah Hunt
// Triangle Validator 
// This program will validate the input of measurements for the sides of a triangle

#include<iostream>
#include<iomanip>
using namespace std;

int main() 
{
//List the input variables for the test.
	int sideLength1, sideLength2, sideLength3;

//Prompt the use to input values for the sides. 
	cout << "Welcome to the triangle validator! :-)\n";
	cout << "\nThe sum of any 2 sides of a triangle must be greater than the measure of the third side.\n";
	cout << "Please enter three numbers of you choice that are greater than zero. Please press enter after each value input\n" << endl;
	cin >> sideLength1 >> sideLength2 >> sideLength3;

//Test the given values.
	{
		if ((sideLength1 + sideLength2 > sideLength3) && (sideLength1 + sideLength3 > sideLength2) && (sideLength2 + sideLength3 > sideLength1)) 
		    {
			cout << "This is a Valid Triangle.\n"; 
		    }
		else
			cout << "Invalid Entry, please try again." << endl;
			return 0;
    }
 cout << endl;
	return 0;
}
