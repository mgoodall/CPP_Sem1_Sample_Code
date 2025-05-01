// This program also demonstrates proper spacing
// for good coding conventions and
//  a problem that occurs when you mix cin >> with cin.get().

#include <iostream>
#include <iomanip>
#include <string>
#include <random>

using namespace std;

int main()
{
	// INTRODUCTION TO CIN
	int length, width, area;

	cout << "This program calculates the area of a ";
	cout << "rectangle.\n";
	cout << "What is the length of the rectangle? ";
	cin >> length;

	cout << "What is the width of the rectangle? ";
	cin >> width;

	area = length * width;

	cout << "The area of the rectangle is " << area << ".\n";

	//CIN MULTIPLE
	cout << "\n\n";
	cout << "Enter the length and width of the rectangle ";
	cout << "separated by a space.\n";
	cin >> length >> width;

	area = length * width;

	cout << "The area of the rectangle is " << area << endl;

	//CIN WIDTH LIMITED
	cout << "\n\n";

	char word[5];

	cout << "Enter a word: ";
	cin.width(5);
	cin >> word;

	cout << "You entered " << word << endl;
	//CIN.IGNORE
	cout << "\n\n";

	cin.ignore(100, '\n'); //run first with this line commented

	char ch;

	cout << "This program has paused. Press Enter to continue.";

	cin.get(ch);
	cout << "It has paused a second time. Please press Enter again.";

	ch = cin.get();
	cout << "It has paused a third time. Please press Enter again.";

	cin.get();
	//CIN MULTIPLE INITIALIZATION
	cout << "\n\n";

	int begInv, // Begining inventory for all stores
		sold, // Number of widgets sold
		store1, // Store 1's inventory
		store2, // Store 2's inventory
		store3; // Store 3's inventory

	cout << "What was the beginning inventory? ";
	cin >> begInv;

	store1 = store2 = store3 = begInv;

	cout << "store 1 inventory: " << store1 << endl;
	cout << "store 2 inventory: " << store2 << endl;
	cout << "store 3 inventory: " << store3 << endl;

	//READING A STRING WITH GETLINE
	cout << "\n\n"; cin.ignore();
	string name;

	cout << "Please enter your name: ";
	getline(cin, name);

	cout << "Hello, " << name << endl;

	//CIN.IGNORE
	cout << "\n\n";

	int number;

	cout << "Enter a number: ";
	cin >> number;

	cin.ignore(); // run first with this line commented

	cout << "Enter a name or character: ";
	getline(cin, name);

	cout << name << endl;

	//UNDERFLOW OVERFLOW EXAMPLES
	cout << "\n\n";

	short testVar = 32767;// testVar is initialized with the maximum value for a short.

	cout << testVar << endl; // Display testVar.

	testVar = testVar + 1; // Add 1 to testVar to make it overflow.

	cout << testVar << endl;

	testVar = testVar - 1; // Subtract 1 from testVar to make it underflow.

	cout << testVar << endl;

	//*********************************************************************************
	// 
	// TO SAVE SPACE ON EXAMPLE - EXTRA LINES FOR GOOD CODING CONVENTIONS STOP HERE.
	//
	//*********************************************************************************
	
	//OVERFLOW UNDERFLOW 2
	cout << "\n\n";
	float test;
	test = 2.0e38 * 1000; // Should overflow test.
	cout << test << endl;
	test = 2.0e-38 / 2.0e38; // Should underflow test.
	cout << test << endl;
	//PREFIX VS POSTFIX INCREMENT DECREMENT
	cout << "\n\n";
	int num = 4; // num starts out with 4.
	cout << "The variable num is " << num << endl;
	cout << "I will now increment num.\n\n";
	num++; // Use postfix ++ to increment num.
	cout << "Now the variable num is " << num << endl;
	cout << "I will increment num again.\n\n";
	++num; // Use prefix ++ to increment num.
	cout << "Now the variable num is " << num << endl;
	cout << "I will now decrement num.\n\n";
	num--; // Use postfix -- to decrement num.
	cout << "Now the variable num is " << num << endl;
	cout << "I will decrement num again.\n\n";

	--num; // Use prefix -- to increment num.
	cout << "Now the variable num is " << num << endl;
	//TYPECASTING FOR CHARACTERS
	cout << "\n\n";
	number = 65;
	cout << number << endl;
	cout << static_cast<char>(number) << endl;
	cout << (char)(number) << endl;
	//TYPECASTING TO AVOID INTEGER DIVISION ERRORS
	cout << "\n\n";
	cout << number / test << endl;
	cout << number / (float)test << endl;
	//POW FUNCTION (INTRO TO MATH LIBRARY FUNCTIONS
	cout << "\n\n";
	const double PI = 3.14159;
	cout << PI * pow(number, 2);
	//COUNTING AND AVERAGE
	cout << "\n\n";
	int num1, num2, num3;
	num1 = num2 = num3 = 0;
	float average = 0;
	cout << "Enter in 3 numbers separated by a space: ";
	cin >> num1 >> num2 >> num3;
	average = (num1 + num2 + num3) / 3.0;
	cout << "\nAverage is: " << average << endl;
	//RANDOM (STATISTICALLY VALID)
	cout << "\n\n";
	const int MIN = 1; // Minimum dice value
	const int MAX = 6; // Maximum dice value
	random_device engine; // Random number engine
	std::random_device rand_dev; // Distribution object
	std::mt19937 generator(rand_dev());
	std::uniform_int_distribution<int> dist(MIN, MAX);
	cout << "Rolling the dice...\n";
	cout << dist(generator) << endl; //generator
	cout << dist(generator) << endl;
	//IOMANIP SET PRECISION
	cout << "\n\n";
	double quotient, number1 = 132.364, number2 = 26.91;
	quotient = number1 / number2;
	cout << quotient << endl;
	cout << setprecision(5) << quotient << endl;
	cout << setprecision(4) << quotient << endl;
	cout << setprecision(3) << quotient << endl;
	cout << setprecision(2) << quotient << endl;
	cout << setprecision(1) << quotient << endl;
	//COUT PRECISION
	cout << "\n\n";
	double day1, day2, day3, total;
	cout << "Enter the sales for day 1: ";
	cin >> day1;
	cout << "Enter the sales for day 2: ";
	cin >> day2;

	cout << "Enter the sales for day 3: ";
	cin >> day3;
	total = day1 + day2 + day3;
	cout.precision(2);
	cout.setf(ios::fixed | ios::showpoint);
	cout << "\nSales Figures\n";
	cout << "-------------\n";
	cout << "Day 1: " << setw(8) << day1 << endl;
	cout << "Day 2: " << setw(8) << day2 << endl;
	cout << "Day 3: " << setw(8) << day3 << endl;
	cout << "Total: " << setw(8) << total << endl;
	//UNFORMATED TABLE
	cout << "\n\n";
	num1 = 2897, num2 = 5, num3 = 837;
	int num4 = 34, num5 = 7, num6 = 1623,
		num7 = 390, num8 = 3456, num9 = 12;
	// Display the first row of numbers
	cout << num1 << " " << num2 << " " << num3 << endl;
	// Display the second row of numbers
	cout << num4 << " " << num5 << " " << num6 << endl;
	// Display the third row of numbers
	cout << num7 << " " << num8 << " " << num9 << endl;
	//FORMATED TABLE
	cout << "\n\n";
	// Display the first row of numbers
	cout << setw(6) << num1 << setw(6)
		<< num2 << setw(6) << num3 << endl;
	// Display the second row of numbers
	cout << setw(6) << num4 << setw(6)
		<< num5 << setw(6) << num6 << endl;
	// Display the third row of numbers
	cout << setw(6) << num7 << setw(6)
		<< num8 << setw(6) << num9 << endl;
	//PROPER FORMATTING TECHNIQUES
	cout << "\n\n";
	total = day1 + day2 + day3;
	// Display the sales amounts.
	cout << "\nSales Amounts\n";
	cout << "-------------\n";
	cout << setprecision(5);
	cout << "Day 1: " << setw(8) << day1 << endl;
	cout << "Day 2: " << setw(8) << day2 << endl;
	cout << "Day 3: " << setw(8) << day3 << endl;
	cout << "Total: " << setw(8) << total << endl;
	//PRINTF CHEAT SHEET
	cout << "\n\n";
	printf("Characters: %c %c \n", 'a', 65); cout << endl;
	printf("Decimals: %d %ld\n", 1977, 650000L); cout << endl;
	printf("Preceding with blanks: %10d \n", 1977); cout << endl;
	printf("Preceding with zeros: %010d \n", 1977); cout << endl;
	printf("Some different radices: %d %x %o %#x %#o \n", 100, 100, 100, 100, 100);
	cout << endl;

	printf("floats: %4.2f %+.0e %E \n", 3.1416, 3.1416, 3.1416); cout << endl;
	printf("Width trick: %*d \n", 5, 10); cout << endl;
	printf("%s \n", "A string"); cout << endl;
	printf("the %s jumped over the %s, %d times", "cow", "moon", 2); cout << endl;
	printf("%3d", 0); cout << endl; //0
	printf("%3d", 123456789); cout << endl; //123456789
	printf("%3d", -10); cout << endl; //-10 cout << endl;
	printf("%3d", -123456789); cout << endl;
	printf("%-3d", 0); cout << endl; //0
	printf("%-3d", 123456789); cout << endl; //123456789
	printf("%-3d", -10); cout << endl; //-10
	printf("%-3d", -123456789); cout << endl; //-123456789
	printf("%03d", 0); cout << endl; //000
	printf("%03d", 1); cout << endl; //001
	printf("%03d", 123456789); cout << endl; //123456789
	printf("%03d", -10); cout << endl; //-10
	printf("%03d", -123456789); cout << endl;//-123456789
	printf("'%5d'", 10); cout << endl; //min 5 wide
	printf("'%-5d'", 10); cout << endl; //min 5 wide left
	printf("'%05d'", 10); cout << endl; //5 wide 0 filled
	printf("'%+5d'", 10); cout << endl; //4 wide with + sign
	printf("'%.1f'", 10.3456); cout << endl;
	printf("'%.2f'", 10.3456); cout << endl;
	printf("'%8.2f'", 10.3456); cout << endl;
	printf("'%8.4f'", 10.3456); cout << endl;
	printf("'%08.2f'", 10.3456); cout << endl;
	printf("'%-8.2f'", 10.3456); cout << endl;
	printf("'%-8.2f'", 101234567.3456); cout << endl;
	printf("'%s'", "Hello"); cout << endl;
	printf("'%10s'", "Hello"); cout << endl;
	printf("'%-10s'", "Hello"); cout << endl;
	cout << "\n\nPress enter to close program";
	cin.ignore(100, '\n');
	cin.get();
	return 0;
}
