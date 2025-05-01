// Ch 2 Variables and constants notes
// Coded by: Melissa Goodall
// Date:  1/30/2023
// Version 1.0     


#include <iostream>
#include <locale>                                                      //used  for inserting commas in longer numbers

using namespace std;
int main()
{
	
	//DECLARING A VARIABLE
	cout << "\n\n";
	int number;							//declare an integer variable identified as 'number;
	number = 5;							//use assignment operator to assign the value of 5 to number's memory address
	cout << "The value in number is " << number << endl;		//print out what is stored currently at number's memory address
	
	//INITIALIZING A VARIABLE
	cout << "\n\n";
	int month = 2, days = 28;					//using assignment operator to give an initial value is recommended practice
	cout << "Month " << month << " has " << days << " days.\n";
	
	//EXAMPLES OF INTEGERS
	cout << "\n\n";
	int checking;
	unsigned int miles;						//unsigned integers cannot be negative
	long diameter;							//longs are integers greater than approximately 65,000
	checking = -20;
	miles = 4276;
	diameter = 100000;
	cout << "We have made a long journey of " << miles;
	cout << " miles.\n";
	cout << "Our checking account balance is " << checking;
	cout << "\nThe galaxy is about " << diameter;
	cout << " light years in diameter.\n";
	
	//EXAMPLES OF FLOATING
	cout << "\n\n";
	float distance;							//decimals are not stored the same as integer in memory
	double mass;							//the decimal is converted to scientific notation, then stored
	distance = 1.495979E11;						//so the decimal "floats"
	mass = 1.989E30;
	cout << "The Sun is " << distance << " meters away.\n";
	cout << "The Sun\'s mass is " << mass << " kilograms.\n";
	
	//EXAMPLE PERCENTAGE CALCULATIONS
	cout << "\n\n";
	double monthlyPay = 6000.0, contribution;			//Variables to hold the monthly pay and the amount of contribution.
		contribution = monthlyPay * 0.05;			// Calculate and display a 5 % contribution.
	cout << "5 percent is $" << contribution << " per month.\n";
		
	//EXAMPLE OF PERCENTAGES IN A RANGE
	cout << "\n\n";
	float lowerLimit = monthlyPay - (monthlyPay * 0.05);		//calculate 5% below the monthly pay
	float upperLimit = monthlyPay * 1.05;				//calculates 5% above the monthly pay
	cout << "Range of monthly pay could be between "
		<< lowerLimit << " and " << upperLimit << endl;
	
	//EXAMPLE OF PROPERLY USED CONSTANTS
	cout << "\n\n";
	const double PI = 3.14159;					//if the number is set for life of program, it's a constant
	const double CIRCLE_DIAMETER = 10.0;
	double circumference;
	circumference = PI * CIRCLE_DIAMETER;
	cout << "The circumference is: " << circumference << endl;
	
	//CHARACTERS
	cout << "\n\n";
	char letter;
	letter = 'A';
	cout << letter << '\n';
	cout << "letter as integer: " << (int)letter << endl;		//characters are considered integers due to their ASCII equivalent
	int numericLetter = 66;
	cout << (char)numericLetter << endl;
	
	//SIZEOF
	cout << "\n\n";
	long double apple;
	cout << "The size of an integer is " << sizeof(int);
	cout << " bytes.\n";
	cout << "The size of a long integer is " << sizeof(long);
	cout << " bytes.\n";
	cout << "An apple can be eaten in " << sizeof(apple);
	cout << " bytes!\n";
	
	//STRINGS AND RAWSTRINGS
	cout << "\n\n";
	cout << "Here is the raw string:" << endl;
	cout << R"(One\nTwo\nThree)" << endl << endl;
	cout << "Here is the regular string:" << endl;
	cout << "One\nTwo\nThree" << endl;
	
	//BOOLEANS
	bool boolValue;
	boolValue = true;
	cout << boolValue << endl;
	boolValue = false;
	cout << boolValue << endl;					//print out the value
	cout << !boolValue << endl;					//example of using the NOT operator to look to see if NOT true



	//COMPLETE PROGRAM
	cout << "\n\n";
	double regularWages,						//notice the alignment of variables and comments?
		   basePayRate = 18.25,	
		   regularHours = 40.0,	
		   overtimeWages,		
		   overtimePayRate = 27.78,	
		   overtimeHours = 10,	
	       totalWages;		
	regularWages = basePayRate * regularHours;			// Calculate the  regular wages.
		overtimeWages = overtimePayRate * overtimeHours;	// Calculate the overtime wages.
		totalWages = regularWages + overtimeWages;		// Calculate the total wages.
	cout << "Wages for this week are $" << totalWages << endl;	// Display the total wages.
		
	//MODULUS
		cout << "\n\n";
	int totalSeconds = 125;
	int minutes, seconds;
	minutes = totalSeconds / 60;					// Get the number of minutes.
		seconds = totalSeconds % 60;				// Get the remaining seconds.
		cout << totalSeconds << " is equivalent to:\n";		// Display the results.
		cout << "Minutes: " << minutes << endl;
	cout << "Seconds: " << seconds << endl;
	
	//extract right most digit
	cout << "\n\n";
	number = 12345;
	int rightMost = number % 10;
	cout << "The rightmost digit in "
		<< number << " is "
		<< rightMost << endl;
	
	//format output using printf
	printf("Characters: %c %c \n", 'a', 65);
	printf("Decimals: %d %ld\n", 1977, 650000L);
	printf("Preceding with blanks: %10d \n", 1977);
	printf("Preceding with zeros: %010d \n", 1977);
	printf("Some different radices: %d %x %o %#x %#o \n", 100, 100, 100, 100, 100);
	printf("floats: %4.2f %+.0e %E \n", 3.1416, 3.1416, 3.1416);
	printf("Width trick: %*d \n", 5, 10);
	printf("%s \n", "A string");
	printf("$%.2Lf\n", 123456.45L);
	cout.imbue(std::locale(""));					//uses locale library to know how to format decimals with commas
	cout <<  123456.45L;						//cannot printf with commas unless you get an external library file
	
	//swapping two variables using a PLACEHOLDER variable
	int variableOne = 19;
	int variableTwo = 2;
	int tempPlaceholder = 0;

	cout << "Before:  Variable 1:  " << variableOne << "   Variable 2:  " << variableTwo << endl;
	tempPlaceholder = variableTwo;
	variableTwo = variableOne;
	variableOne = tempPlaceholder;
	cout << "After:  Variable 1:  " << variableOne << "   Variable 2:  " << variableTwo << endl;

	//swapping two variables without a placeholder variable
	int variableOne = 19;
	int variableTwo = 2;
	
	cout << "Before:  Variable 1:  " << variableOne << "   Variable 2:  " << variableTwo << endl;
	variableOne = variableOne + variableTwo;
	variableTwo = variableOne - variableTwo;
	variableOne = variableOne - variableTwo;
	cout << "After:  Variable 1:  " << variableOne << "   Variable 2:  " << variableTwo << endl;

	cin.ignore(100, '\n');
	cin.get();
	return 0;
}
