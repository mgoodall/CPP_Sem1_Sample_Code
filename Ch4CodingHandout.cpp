#include <iostream>
#include <iomanip>
#include <string>
#include <random>

using namespace std;

int main()
{
// USING BOOLEAN MATH
bool isLessThan = false, areEqual = false;
int x = 5, y = 10;
isLessThan = x < y;
areEqual = y == x;
cout << "Is x less than y? " << isLessThan << endl;
cout << "Are x and y equal? " << areEqual << endl;
return 0;

//SINGLE ALTERNATIVE IF
const int HIGH_SCORE = 95;			// A high score is 95 orgreater
int score1, score2, score3;		// To hold three test scores
double average;					// TO hold the average score
cout << "Enter 3 test scores and I will average them: ";
cin >> score1 >> score2 >> score3;
average = (score1 + score2 + score3) / 3.0; 
cout << fixed << showpoint << setprecision(1);
cout << "Your average is " << average << endl;

if (average > HIGH_SCORE)
cout << "Congratulations! That's a high score!\n";

//IF-ELSE
if (x < y) {
	cout << "Y is the bigger number" << endl;
}
else {
	cout << "X is the bigger number" << endl;

//IF ELSE-IF ELSE  AND FINDING THE LARGEST NUMBER
	if (x < y) {
		cout << "Y is the bigger number\n";
	}
	else if (x > y) {
		cout << "X is the bigger number\n";
	}
	else cout << "The numbers are equal\n";

	//ERROR PREVENT: DIVIDE BY ZERO
	int num = 0;
	cout << "Input a number to divide 100 by: \n";
	cin >> num;
	if (num == 0) {
		cout << "ERROR: cannot divide by zero";
	}
	else cout << "100 divided by your number is " << num / 100 << 	endl;
	
	//ERROR PREVENTION: NUMBERS TOO PRECISE
	double a = 1.5; // a is 1.5.
	double b = 1.5; // b is 1.5.
	a += 0.0000000000000001; // Add a little to a.
	if (a == b)
		cout << "Both a and b are the same.\n";
	if (a != b)
		cout << "a and b are not the same.\n";
	
	//ERROR PREVENTION: MISSING BRACKET
	cout << "Enter 3 test scores and I will average them: ";
	cin >> score1 >> score2 >> score3;
	average = (score1 + score2 + score3) / 3.0;
	if (average > 95)
		cout << "Congratulations!\n";
	cout << "That's a high score.\n";
	cout << "You deserve a pat on the back!\n";
	
	//ERROR PREVENTION: MISPLACED SEMI-COLON
	x = 0, y = 10;
	cout << "x is " << x << " and y is " << y << endl;
	if (x > y); // Error! Misplaced semicolon
	cout << "x is greater than y\n"; //This is always executed.
	
	//ERROR PREVENTION: SINGLE EQUAL
	cout << "Enter 3 test scores and I will average them: ";
	cin >> score1 >> score2 >> score3;
	average = (score1 + score2 + score3) / 3.0;
	if (average = 100)
		cout << "Congratulations! Your average is a perfect score!\n";
	
	//ERROR PREVENTION:VARIABLE SCOPE
	const double MIN_INCOME = 35000.0;

	const int MIN_YEARS = 5;
	
	cout << "What is your annual income? ";
	double income; 
	cin >> income;
	if (income >= MIN_INCOME)
	{
		cout << "How many years have you worked at your current job? ";
		int years;
		cin >> years;
		if (years > MIN_YEARS)
			cout << "You qualify.\n";
		else
		{
			cout << "You must have been employed for\n"
				<< "more than " << MIN_YEARS
				<< " years to qualify.\n";
		}
	}
	else
	{
		cout << "You must earn at least $" << MIN_INCOME
			<< " to qualify.\n";
	}
	//ERROR PREVENTION: VARIABLE SCOPE EXAMPLE 2
	int number;
	cout << "Enter a number greater than 0: ";
	cin >> number;
	if (number > 0)
	{
		int number; // Another variable named number.
		cout << "Now enter another number: ";
		cin >> number;
		cout << "The second number you entered was "
			<< number << endl;
	}
	cout << "Your first number was " << number << endl;
	
	//COMPARING CHARACTERS
	char ch;
	
	cout << "Enter a digit or a letter: ";
	ch = cin.get();
	
	if (ch >= '0' && ch <= '9')
		cout << "You entered a digit.\n";
	else if (ch >= 'A' && ch <= 'Z')
		cout << "You entered an uppercase letter.\n";
	else if (ch >= 'a' && ch <= 'z')
		cout << "You entered a lowercase letter.\n";
	else
		cout << "That is not a digit or a letter.\n";
	
	//COMPARING CHARS EXAMPLE 2
	cout << "Do you wish to end the program? (y/n)";
	ch = tolower(cin.get());
	if (ch == 'y') {
		cout << "Ending Program...";
		cin.ignore(100, '\n');
		cin.get();
		return 0;
	}
	else cout << "Excellent\n";
	
	//COMPARING STRINGS
	const double PRICE_A = 249.0, 
		         PRICE_B = 199.0; 
	string partNum; 
	number
		cout << "The headphone part numbers are:\n" 
		<< "Noise canceling: part number S-29A \n"
		<< "Wireless: part number S-29B \n"
		<< "Enter the part number of the headphones you\n"
		<< "wish to purchase: ";
	cin >> partNum;
	cout << fixed << showpoint << setprecision(2); 
		if (partNum.compare("S-29A") == 0) 
			cout << "The price is $" << PRICE_A << endl;
		else if (partNum.compare("S-29B") == 0)
			cout << "The price is $" << PRICE_B << endl;
		else
			cout << partNum << " is not a valid part number.\n";
	
		//USING MODULUS MATH FOR DECISIONS
	cout << "Enter an integer and I will tell you if it\n";
	cout << "is odd or even. ";
	cin >> number;
	if (number % 2 == 0)
		cout << number << " is even.\n";
	else
		cout << number << " is odd.\n";
	
	//TERNARY OPERATER (SIMPLE IF-ELSE SHORTCUT)
	cout << "Enter 3 test scores and I will average them: ";
	cin >> score1 >> score2 >> score3;
	average = (score1 + score2 + score3) / 3.0;
	average > 70 ? cout << "Great job!\n" : cout << "Need to work a
		bit harder\n";
	
		//TERNARY OPERATOR EXAMPLE 2
		const int MIN_HOURS = 4;
	const double SICK_PAY_AMOUNT = 7.5;
	cout << "You must take a minimum of 4 hours sickpay. How many
		hours did you take ? ";
		cin >> number;
	number = number < MIN_HOURS ? MIN_HOURS : number; 
		cout << "You've earned $" << number * SICK_PAY_AMOUNT << "in sick
		pay.\n";
		
//NESTED IF EXAMPLE
		char employed, 
		recentGrad; 
	
	cout << "Answer the following questions\n";
	cout << "with either Y for Yes or ";
	cout << "N for No.\n";
	cout << "Are you employed? ";
	cin >> employed;
	cout << "Have you graduated from college ";
	cout << "in the past two years? ";
	cin >> recentGrad;
	
	if (employed == 'Y')
	{
		if (recentGrad == 'Y') 
		{
			cout << "You qualify for the special ";
			cout << "interest rate.\n";
		}
	}
	else cout << "I'm sorry, but you do not qualify\n";
	
	//COMPOUND AND CRITERIA
	if (employed == 'Y' && recentGrad == 'Y')
	{
		cout << "You qualify for the special "
			<< "interest rate.\n";
	}
	else
	{
		cout << "You must be employed and have\n"
			<< "graduated from college in the\n"
			<< "past two years to qualify.\n";
	}
	
	//COMPOUND OR CRITERIA
	const double MIN_INCOME = 35000.0;
	const int MIN_YEARS = 5;
	double income; 
	int years; 
	
	cout << "What is your annual income? ";
	cin >> income;
	
	cout << "How many years have you worked at "
		<< "your current job? ";
	cin >> years;
	
	if (income >= MIN_INCOME || years > MIN_YEARS)
		cout << "You qualify.\n";
	else
	{
		cout << "You must earn at least $"
			<< MIN_INCOME << " or have been "
			<< "employed more than " << MIN_YEARS
			<< " years.\n";
	}
	//COMPOUND LOGICAL NOT

	if (!(income >= MIN_INCOME || years > MIN_YEARS))
	{
		cout << "You must earn at least $"
			<< MIN_INCOME << " or have been "
			<< "employed more than " << MIN_YEARS
			<< "years.\n";
	}
	else
		cout << "You qualify.\n";

	//COMPARING IN A RANGE
	const int A_SCORE = 90,
		B_SCORE = 80,
		C_SCORE = 70,
		D_SCORE = 60,
		MIN_SCORE = 0, // Minimum valid score
		MAX_SCORE = 100; // Maximum valid score
	int testScore; 
	cout << "Enter your numeric test score and I will\n"
		<< "tell you the letter grade you earned: ";
	cin >> testScore;
	
	if (testScore >= MIN_SCORE && testScore <= MAX_SCORE)
	{
	
		if (testScore >= A_SCORE)
			cout << "Your grade is A.\n";
		else if (testScore >= B_SCORE)
			cout << "Your grade is B.\n";
		else if (testScore >= C_SCORE)
			cout << "Your grade is C.\n";
		else if (testScore >= D_SCORE)
			cout << "Your grade is D.\n";
		else
			cout << "Your grade is F.\n";
	}
	else
	{
	
		cout << "That is an invalid score. Run the program\n"
			<< "again and enter a value in the range of\n"
			<< MIN_SCORE << " through " << MAX_SCORE << ".\n";
	}
	//USING THE SELECTION SWITCH INSTEAD OF A DECISION IF
	cout << "Enter A, B, or C: ";
	cin >> ch;
	switch (ch)
	{
	case 'A': cout << "You entered A.\n";
		break;
	case 'B': cout << "You entered B.\n";
		break;
	case 'C': cout << "You entered C.\n";
		break;
	default: cout << "You did not enter A, B, or C!\n";
	}
	//MENU WITH SWITCH

	cout << "\t\tHealth Club Membership Menu\n\n"
		<< "1. Standard Adult Membership\n"
		<< "2. Child Membership\n"
		<< "3. Senior Citizen Membership\n"
		<< "4. Quit the Program\n\n"
		<< "Enter your choice: ";
	cin >> number;
	switch (number)
	{
	case 1:
		cout << "One adult membership coming up\n";
		break;
	case 2:
		cout << "One child membership coming up\n";
		break;
	case 3:
		cout << "One senior membership coming up\n";
		break;
	case 4:
		cout << "Program ending.\n";
		break;
	default:
		cout << "The valid choices are 1 through 4. Run the\n"
			<< "program again and select one of those.\n";
	}
	//FALL THROUGH SWITCH
	
	cout << "Do you prefer: \nparty rooms 1 and 2 ($200/hour) \n";
	cout << "3 or 4 ($500/hour)\n5)$20/hour";
	cin >> number;
	
	switch (number)
	{
	case 1:
	case 2: cout << "Nice choice - we'll have it a decorated!\n";
		break;
	case 3:
	case 4: cout << "Excellent! Live DJ included\n";
		break;
	case 5: cout << "Budget friendly - you bring everything\n";
		break;
	default: cout << "That is an invalid choice.\n";
	}

	//ODD VS EVEN
	int x = 0;
	cout << "Enter a number to check:  ";
	cin >> x;

	(x % 2 > 0) ? cout << "\n\nOdd!" : "\n\nEven!";

	//COMPARE STRINGS
	string stringOne;
	string stringTwo;

	cout << "Enter two words separated by a space:  ";
	cin >> stringOne >> StringTwo;

	if (stringOne.compare(stringTwo) > 0)
		cout << "The first word is bigger.";
	else if (stringTwo.compare(stringOne) > 0)
		cout << "The second word is bigger.";
	else cout << "The strings are identical.";


	cout << "\n\nPress enter to close program";
	cin.ignore(100, '\n');
	cin.get();
	return 0;
}