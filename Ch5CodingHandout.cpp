//LOOPS ARE FORMALLY KNOWN AS INTERATION

/*
The three types of bounds in a loop are:
         Data bounds:  loops keep reading input until there is nothing left to process
         Sentinel bounds:  loop that looks for a particular input to end or continue
         Limits bound:  loops that end when there is no goal reached. It examines the result of the loop

CONTINUE AND BREAK:
A continue is used to not process the current loop iteration.. skip over it  BUT KEEP LOOPING.  For example, looping through numbers, skip every number evenly divisible by 5.
A break is used to end a loop early when it is no longer needed, not to end a loop when a valid exit condition remains.  For example, when searching through data for a  word, exit the loop when the word is found, instead of continuing to loop to the end
*/

//DECLARE AND INITIALIZE OUTSIDE LOOP! SCOPE IS VERY IMPORTANT
//F0R LOOP COUNTS UP, (OR DOWN)
for (int i=0; i<10, i++){  
 //  Precondition i =0, bounds i <10, post condition i++)
            	//do something here while repeating
}

//WHILE LOOP EXAMPLE
//WHILE LOOP WILL TEST TO SEE IF IT EVEN NEEDS TO RUN
//MAY NEED TO RESET A VARIABLE AT THE END OF A WHILE LOOP
int userChoice=1;  //precondition
while (userChoice !=6) { //bounds
            	//doing something here while eventually result in post-condition to end the loop
}

//NEVER WHILE (TRUE) - BAD AND LAZY CODING.  FORCES AN INFINITE LOOP. USEFUL FOR GRAPHICAL PROGRAMS ONLY

//DO WHILE LOOP
//THIS LOOP WILL ALWAYS RUN AT LEAST ONCE.  THINK MENU :)
//SOMETIMES MAY NEED TO RESET A VARIABLE AT THE END OF A WHILE LOOP
int userChoice=1;  //precondition
do {
            	//doing something here while eventually result in post-condition to end the loop
} while (userChoice !=6) (bounds)


//ERROR TRAPPING
//MENU Displayed here
int choice=0;
cout >> “What is your choice?  “;
while ((!(cin >> num1)) || cin.fail()) { // look here!  Our input is part of our error checking loop now
		cout << "Error - try again";
		cin.clear(); //clear the error failure
		cin.sync(); //clear out the memory buffer
		cin.ignore(100, '\n'); //get rid of all white space
		cout << "enter num";
	}



//DOES IT NEED TO BE IN A RANGE?
cout << "enter  num  ";
	while ((!(cin >> num1) || cin.fail() || (num1<1 && num2>5)) {
		cout << "Error - try again";
		cin.clear();
		cin.sync();
		cin.ignore(100, '\n');
		cout << "enter num";
	}


//EXAMPLE FILE PROCESSING CODE
//REMEMER TO READ THE FILES STRUCTURE FIRST, TO DETERMINE HOW THE LOOP WILL 
//HAPPEN AND WHEN TO USE FIN, FIN.IGNORE, AND GETLINE(FIN)
#include <fstream> // FILE I/O

int main() {
 
ofstream myOutputFile;
ifstream myInputFile;
//ASK FOR THE DIRECTORY
string directoryName;
cout << "What directory do you want to use? ";
getline(cin, directoryName);
cin.sync();
 
//ASK FOR THE FILE
string fileName;
cout << "What is the name of the file? ";
getline(cin, fileName);
cin.sync();
//GENERIC OPEN AND WRITE TO THE FILE
/*cout << "Opening file....\n";
Sleep(2000);
FOUT.open(directoryName + "\\" + fileName);
if (myOutputFile.is_open()) {
cout << "Writing to file.....\n";
Sleep(2000);
myOutputFile << "Demonstrate something" << endl;
cout << "Closing file....\n";
Sleep(2000);
myOutputFile.close();
cout << "Success...\n";
}
else cout << "Error opening file in specified file location";
*/
//GENERIC OPEN AND APPEND TO THE FILE
/*cout << "Opening file....\n";
Sleep(2000);
myOutputFile.open(directoryName + "\\" + fileName, ios::ate | ios::app);
if (myOutputFile.is_open()) {
cout << "Appending to file.....\n";
Sleep(2000);
myOutputFile << "Demonstrate something" << endl;
cout << "Closing file....\n";
Sleep(2000);
myOutputFile.close();
cout << "Success...\n";
}
else cout << "Error opening file in specified file location";
*/
myInputFile.open(directoryName + "\\" + fileName);
string info;
int num1, num2, num3, total=0;
while (myInputFile >> info) {
Sleep(2000);
cout << "\nreading a line..." << endl;
myInputFile >> num1 >> num2 >> num3;
//total = total + (num1 + num2 + num3);
//cout << info << " "<< num1 << " " << num2 << " " << num3 << endl;
}
myInputFile.close();
total = total + (num1 + num2 + num3);
cout << info << " " << num1 << " " << num2 << " " << num3 << endl;
cout << total;
