//Zachariah Hunt
//Lab 8B
//Program to compute the average of heights input by the user. 

#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>

using namespace std;

int main()
{
	//Declare Variables.
	
	string input = "";
	double runningTotal, counter, userHeight;
	runningTotal = 0;
	counter = 0;
	
	//Initiate loop for multiple inputs.
	{
		while (true)
			{
				cout << "\nPlease enter your height using 'whole numbers' in inches\n(This program will terminate when zero is input): ";
				getline(cin, input);
				
				// This code converts from string to number safely.
   				stringstream myStream(input);
   				
				//  Place value in myStream into userHeight.  If false (invalid value), display error msg and return to loop.
   				if (myStream >> userHeight)
   				{
					// Analyze input data
					if ((userHeight == 0) and (counter == 0))
					{
						cout << "You have not yet entered a valid value.\n";
					}
					if ((userHeight == 0) and (counter != 0))
					{
						break;
					}
					if (userHeight > 0)
					{
						counter++;
						runningTotal += userHeight;
						//cout << "\nUser Height total is: " << (userHeight);
						//cout << "\nRunning total is: " << (runningTotal) << "\n";
					}
   				}
   				else
				   cout << "Invalid number, please try again" << endl;
			}
		cin.clear();
		cout << "\nYour average for the heights input is: ";
		cout << fixed << showpoint << setprecision(2) << (runningTotal / counter);
	}
	cout << endl;
	return 0;
}
