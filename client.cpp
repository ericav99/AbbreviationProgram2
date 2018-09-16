// Testing Client Program for class Key
// filename: client.cpp
// Eric Av and Ryan Brown
// 9/15/18
// The client.cpp file will test all the methods from item.cpp and key.cpp.
// The tests will show that each method works for their intended purposes
// with user input or reading from a file. The client.cpp file will also
// show the textingAbbreviation and meaning data members functioning within
// their respective tests. Each test has it's own function outside of int main
// which is called in int main.

#include "key.h"
#include "item.h"
#include <iostream>
#include <fstream>
using namespace std;

void testKeyConstructor();
void testKeyCopyConstructor();
void testKeyInputOutput();
void testKeyConvertToInteger();
void testKeyOperatorEqualsEquals();
void testKeyOperatorLessThan();
void testItemConstructor();
void testItemInputOutput();
void testItemCopyConstructor();
void testItemConvertToInteger();
void testItemOperatorEquals();
void testItemOperatorEqualsEquals();
void testItemOperatorLessThan();

int main()
{

   cout << endl << endl;    // to move first output away from command prompt 
   testKeyConstructor();
   cout << endl;
   testKeyCopyConstructor();
   cout << endl;
   testKeyInputOutput();
   cout << endl;
   testKeyConvertToInteger();
   cout << endl;
   testKeyOperatorEqualsEquals();
   cout << endl;
   testKeyOperatorLessThan();
   cout << endl;
   testItemConstructor();
   cout << endl;
   testItemCopyConstructor();
   cout << endl;
   testItemConvertToInteger();
   cout << endl;
   testItemInputOutput();
   cout << endl;
   testItemOperatorEqualsEquals();
   cout << endl;
   testItemOperatorLessThan();
   cout << endl;
   testItemOperatorEquals();
   cout << endl;

   return 0;
}

void testKeyConstructor()
{
   Key firstOne;
   cout << "          Testing the constructor for Key" << endl;
   cout << "string is empty and show nothing between # signs" << endl;
   cout << "#";
   cout << firstOne;;//displays the empty string textingAbbreviation
   cout << "#" << endl;
   cout << "**********************************************************"<<endl;
}

void testKeyCopyConstructor()
{
	Key OriginalConstructor;
	cout << "Testing copy constructor for Key" << endl;
	cout << "Enter a texting abbreviation ";
	cin >> OriginalConstructor;
	cout << endl;
	Key CopyConstructor(OriginalConstructor);
	cout << "OriginalConstructor copied over to CopyConstructor" << endl;
	cout << "The contents of CopyConstructor: " << CopyConstructor << endl;
	cout << "**********************************************************" << endl;
}

void testKeyInputOutput()
{
   Key firstOne, secondOne, thirdOne;
   ifstream inFile;
   ofstream outFile;
   
   cout << "          Testing the read from a user and write to the screen with Key" << endl;
   cout << "Enter a texting abbreviations -> ";  // note the arrow to show the user where to type and left on same line
   cin >> firstOne >> secondOne >> thirdOne; // user input to textingAbbreviation
   cout << "shows result between # signs" << endl;
   cout << "#";
   cout << firstOne << "# " << secondOne << "# " << thirdOne;// displays the user inputed textingAbbreviation
   cout << "#" << endl;
   cout << endl;
   
   cout << "Testing the read from a file and write to a file " << endl;  // note the arrow to show the user where to type and left on same line
   cout << "Reading from the file...";
   inFile.open("in.dat");//opens the in.dat file
   inFile >> firstOne >> secondOne >> thirdOne;//reads the in.dat file into the textingAbbreviation of instance firstOne, secondOne, and thirdOne.
   outFile.open("out.dat");//opens the out.dat file
   cout << "writing in.dat to out.dat " << endl; 
   outFile << firstOne << secondOne << thirdOne;//writes the textingAbbreviation of instance firstOne, secondOne, and thirdOne into the out.dat file
   cout << endl;
   cout << "**********************************************************" << endl;
}

void testKeyConvertToInteger()
{
   Key firstOne;
   cout << "Enter a texting abbreviation for the ConvertToInteger test: ";
   cin >> firstOne;
   cout << "Testing the convertToInteger and shows result to the screen between # signs" << endl;
   cout << "#";
   cout << firstOne.convertToInteger(); // calls the convertToInteger function for the instance firstOne. 
   //Will display the sum of the ascii numbers corresponding to each character in the string textingAbbreviation
   cout << "#" << endl;
   cout << "**********************************************************" << endl;
}

void testKeyOperatorEqualsEquals()
{
   Key firstOne;
   Key secondOne;
   
   cout << "Testing the operator== function for key to show that if two texting abbreviations are equal" << endl;
   cout << "Enter two texting abbreviations so that firstOne and secondOne ARE equal: ";
   cin >> firstOne >> secondOne;
   cout << "Showing the first texting abbreviation between # signs" << endl;
   cout << "#";
   cout << firstOne; //displays the textingAbbreviation from instance firstOne.
   cout << "#" << endl;
   cout << "Showing the second texting abbreviation between # signs" << endl;
   cout << "#";
   cout << secondOne;    //displays the textingAbbreviation from instance secondOne.
   cout << "#" << endl << endl;
   
   cout << "Checking to see if the firstOne and secondOne are equal in value..." << endl;
   if (firstOne == secondOne)
   {
	   cout << firstOne << " is the same as " << secondOne << endl;
   }
   else 
	   cout << firstOne << " is not the same as " << secondOne << endl;
   
   cout << "Enter two texting abbreviations so that firstOne and secondOne are NOT equal: ";
   cin >> firstOne >> secondOne;
   cout << "Showing the first texting abbreviation between # signs" << endl;
   cout << "#";
   cout << firstOne; //displays the textingAbbreviation from instance firstOne.
   cout << "#" << endl;
   cout << "Showing the second texting abbreviation between # signs" << endl;
   cout << "#";
   cout << secondOne;    //displays the textingAbbreviation from instance secondOne.
   cout << "#" << endl;
   
   cout << "Checking to see if the firstOne and secondOne are equal in value..." << endl;
   if (firstOne == secondOne)
   {
	   cout << firstOne << " is the same as " << secondOne << endl;
   }
   else 
	   cout << firstOne << " is not the same as " << secondOne << endl;
   cout << "**********************************************************" << endl;
}

void testKeyOperatorLessThan()
{
    Key firstOne;
    Key secondOne;
	
    cout << "Testing the operator< function for Key" << endl;
    cout << "Enter two texting abbreviations to show either true or false for the less than test: ";
    cin >> firstOne >> secondOne;

    cout << "Showing the first item between # signs" << endl;
    cout << "#";
    cout << firstOne; //displays the textingAbbreviation from instance firstOne.
    cout << "#"<< endl;
    cout << "Showing the second item between # signs" << endl;
    cout << "#";
    cout << secondOne;    //displays the textingAbbreviation from instance secondOne.
    cout << "#"<< endl;

    cout << "Checking to see if firstOne is less than secondOne..." << endl;
    if (firstOne < secondOne)
    {
        cout << firstOne << " is less than " << secondOne << endl;
    }
    else
        cout << firstOne << " is greater than " << secondOne << endl;
	cout << endl;

	cout << "Now enter two texting abbreviations to show the opposite result from the first: ";
    cin >> firstOne >> secondOne;

    cout << "Showing the first item between # signs" << endl;
    cout << "#";
    cout << firstOne; //displays the textingAbbreviation from instance firstOne.
    cout << "#"<< endl;
    cout << "Showing the second item between # signs" << endl;
    cout << "#";
    cout << secondOne;    //displays the textingAbbreviation from instance secondOne.
    cout << "#"<< endl;

    cout << "Checking to see if firstOne is less than secondOne..." << endl;
    if (firstOne < secondOne)
    {
        cout << firstOne << " is less than " << secondOne << endl;
    }
    else
        cout << firstOne << " is greater than " << secondOne << endl;
	cout << "**********************************************************" << endl;
}

void testItemConvertToInteger()
{
   Item firstOne;
   cout << "Enter a texting abbreviation and meaning for the ConvertToInteger test: ";
   cin >> firstOne;
   cout << "Testing the convertToInteger and shows result to the screen between # signs" << endl;
   cout << "#";
   cout << firstOne.convertToInteger(); // calls the convertToInteger function for the instance firstOne. 
   //Will display the sum of the ascii numbers corresponding to each character in the string textingAbbreviation and string meaning
   cout << "#" << endl;
   cout << "**********************************************************" << endl;
}

void testItemConstructor()
{
   Item firstOne;
   cout << "          Testing the constructor for Item " << endl;
   cout << "Item is empty and show nothing between # signs" << endl;
   cout << "#";
   cout << firstOne;;//displays the empty textingAbbreviation and meaning 
   cout << "#" << endl;
   cout << "**********************************************************" << endl;
}

void testItemCopyConstructor()
{
    Item OriginalConstructor;
	cout << "**********************************************************" << endl;
	cout << "Testing copy constructor for Item" << endl;
	cout << "Enter a texting abbreviation and a meaning: ";
	cin >> OriginalConstructor;
	cout << endl;
	Item CopyConstructor(OriginalConstructor);
	cout << " OriginalConstructor copied over to CopyConstructor " << endl;
	cout << "The contents of CopyConstructor: " << CopyConstructor << endl;
	cout << "**********************************************************" << endl;
}

void testItemOperatorEquals()
{
    Item firstOne;
    Item secondOne;
    Item thirdOne;

    cout << "Testing the operator= function for item" << endl;
    cout << "Enter three items (each with textingAbbreviation and meaning): ";
    cin >> firstOne >> secondOne >> thirdOne;

    cout << "Showing the textingAbbreviation and meanings between # signs" << endl;
    cout << "#" << firstOne << "# " << secondOne << "# " << thirdOne << "# " << endl;
    cout << endl << endl;

    cout << " Assigning the firstOne to the secondOne and thirdOne " << endl;
    thirdOne = secondOne = firstOne;    //Copies the textingAbbreviation and meaning from instance firstOne over to the empty textingAbbreviation and meaning  of instance secondOne and thirdOne
    cout << endl;
    cout << "Showing that the secondOne got assigned between # signs" << endl;
    cout << "#";
    cout << secondOne;        // Displays secondOne after being copying value from firstOne
    cout << "#" << endl;
    cout << "showing that the thirdOne got assigned between # signs" << endl;
    cout << "#";
    cout << thirdOne;        //Displays thirdOne after copying value from secondOne
    cout << "#" << endl;
	cout << "**********************************************************" << endl;
}

void testItemOperatorLessThan()
{
    Item firstOne;
    Item secondOne;
	
    cout << "Testing the operator< function for Item" << endl;
    cout << "Enter two items (each with textingAbbreviation and meaning) to show either true or false for the less than test: ";
    cin >> firstOne >> secondOne;

    cout << "Showing the first item between # signs" << endl;
    cout << "#";
    cout << firstOne; //displays the textingAbbreviation and meaning from instance firstOne.
    cout << "#" << endl;
    cout << "Showing the second item between # signs" << endl;
    cout << "#";
    cout << secondOne;    //displays the textingAbbreviation and meaning from instance secondOne.
    cout << "#" << endl;

    cout << "Checking to see if firstOne is less than secondOne..." << endl;
    if (firstOne < secondOne)
    {
        cout << firstOne << " is less than " << secondOne << endl;
    }
    else
        cout << firstOne << " is greater than " << secondOne << endl;
	cout << endl;
	
	cout << "Now enter two new items (each with textingAbbreviation and meaning) to show the opposite result from the first: ";
    cin>> firstOne >> secondOne;
	
	cout << "Showing the first item between # signs" << endl;
    cout << "#";
    cout << firstOne; //displays the textingAbbreviation and meaning from instance firstOne.
    cout << "#" << endl;
    cout << "Showing the second item between # signs" << endl;
    cout << "#";
    cout << secondOne;    //displays the textingAbbreviation and meaning from instance secondOne.
    cout << "#" << endl;
	
    cout << "Checking to see if firstOne is less than secondOne..." << endl;
    if (firstOne < secondOne)
    {
        cout << firstOne << " is less than " << secondOne << endl;
    }
    else
        cout << firstOne << " is greater than " << secondOne << endl;
    cout << "**********************************************************" << endl;
}

void testItemInputOutput()
{
   Item firstOne, secondOne, thirdOne;
   ifstream inFile;
   ofstream outFile;
   
   cout << "          Testing the read from a user and write to the screen with Item" << endl;
   cout << "Enter three Items (each with a textingAbbreviation and a meaning): ";  // note the arrow to show the user where to type and left on same line
   cin >> firstOne >> secondOne >> thirdOne; // user input to Item instances
   cout << "shows result between # signs" << endl;
   cout << "#";
   cout << firstOne << "# " << secondOne << "# " << thirdOne;// displays the user inputed textingAbbreviation
   cout << "#" << endl;
   cout << endl;
   
   cout << "Testing the read from a file and write to a file " << endl;  // note the arrow to show the user where to type and left on same line
   cout << "Reading from the file...";
   inFile.open("in.dat");//opens the in.dat file
   inFile >> firstOne >> secondOne >> thirdOne;//reads the in.dat file into the Item of instance firstOne, secondOne, and thirdOne.
   outFile.open("out.dat");//opens the out.dat file
   cout << "writing in.dat to out.dat " << endl; 
   outFile << firstOne << secondOne << thirdOne;//writes the textingAbbreviation and meaning of instance firstOne, secondOne, and thirdOne into the out.dat file
   cout << endl;
   cout << "**********************************************************" << endl;
}

void testItemOperatorEqualsEquals()
{
   Item firstOne;
   Item secondOne;
   
   cout << "Testing the operator== function for Item to show inheritance and to show that they ARE equal" << endl;
   cout << "Enter two items (each with textingAbbreviation and meaning): ";
   cin >> firstOne >> secondOne;
   cout << "Showing the first item between # signs" << endl;
   cout << "#";
   cout << firstOne; //displays the textingAbbreviation and meaning from instance firstOne.
   cout << "#" << endl;
   cout << "Showing the second item between # signs" << endl;
   cout << "#";
   cout << secondOne;    //displays the textingAbbreviation and meaning from instance secondOne.
   cout << "#" << endl;
   
   cout << "Checking to see if the firstOne and secondOne are equal in value..." << endl;
   if (firstOne == secondOne)
   {
	   cout << firstOne << " is the same as " << secondOne << endl;
   }
   else 
	   cout << firstOne << " is not the same as " << secondOne << endl;
   cout<<endl;
   
   cout << "Now enter two new items (each with textingAbbreviation and meaning) to show they are NOT equal: ";
   cin >> firstOne >> secondOne;
   cout << "Showing the first item between # signs" << endl;
   cout << "#";
   cout << firstOne; //displays the textingAbbreviation and meaning from instance firstOne.
   cout << "#" << endl;
   cout << "Showing the second item between # signs" << endl;
   cout << "#";
   cout << secondOne;    //displays the textingAbbreviation and meaning from instance secondOne.
   cout << "#" << endl;
   
   cout << "Checking to see if the firstOne and secondOne are equal in value..." << endl;
   if (firstOne == secondOne)
   {
	   cout << firstOne << " is the same as " << secondOne << endl;
   }
   else 
	   cout << firstOne << " is not the same as " << secondOne << endl;
   cout << "**********************************************************" << endl;
}
