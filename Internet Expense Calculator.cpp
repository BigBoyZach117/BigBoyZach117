//Zachariah Hunt 
//Lab 7 
// Program to calculate the monthly total for internet service. 

#include<iostream>
#include<iomanip>
using namespace std;
 int main()
 {
 //Defining variables. 	
 char selection;
 double hoursUsed;
 double totalCost;
 //Prompt the user to input package selection.
 cout << "Hello! Please enter which wi-fi package that you have, along\n";
 cout << "with how many hours of the service that you have used this month.\n" << endl;
 cout << "Please go ahead and enter in how many hours of service that you have used. " << endl;
 
 cin >> hoursUsed; 
 	if (hoursUsed <= 0 || hoursUsed > 744)
	{
	 cout << "Please enter hours that are greater than zero, and less than 744.\n";
	 cout << "\nPlease try again.";
	 return 0;
    }
 cout << "\nNow please proceed to choose your wi-fi package. The only options are\n"; 
 cout << "Package A, B, or Package C for wi-fi selection. ";
 cin >> selection;
 
 //Create the switch statement.
 
	 {
		 switch (selection)
			 {
				 
				 	case 'a':
				    case 'A': if (hoursUsed > 10)
				        			{
					              	totalCost = (10 + (4 * hoursUsed) - 40);
					                cout << "Your monthly total is $" << fixed << showpoint<< setprecision(2) << totalCost << endl;
				                	}
				              else 
				              	
				              		cout << "Your monthly total is $10.00" << endl;
				              break;
				    case 'b':
				    case 'B': if (hoursUsed > 20)
				              		{
				              		totalCost = (15.95 + (3 * hoursUsed) - 60);
				              		cout << "Your monthly total is $" << fixed << showpoint<< setprecision(2) << totalCost << endl;
				                	}
				              else 
				              	
				              		cout << "Your monthly total is $15.95" << endl;
				             break;   
					case 'c':
				    case 'C': cout << "Your monthly total is $21.95" << endl;
				              
				             break; 
				    
					default : cout << "You did not enter option A, B, or C\nPlease try again." << endl;
	    	 }
	 }
 cout << endl;
 return 0;
 }
