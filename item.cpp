// Specification of ADT Item wherex
//     an Item is-a Key  (technical computer science)
//     class Item is a derived or child class of class Key

//     data object: a meaning of a texting abbreviation
//     operations: create, destroy, copy create, copy
//                 input, output
//Eric Av and Ryan Brown
//Username eav used in dropoff
#include "key.h" 
#include "item.h"
#include <iostream>

istream& operator>> (istream& input, Item& rightHandSideItem)
{
	char newline;
	input>> rightHandSideItem.textingAbbreviation;
	input.get(newline);
	getline(input, rightHandSideItem.meaning);
	return input;
}
 
//allows for the output of an item to the standard output device or a file
//pre rightHandSideItem has been filled with a texting abbreviation and
//    its associated meaning 
//    output has been opened
//post rightHandSideItem has been written to the output device
//     lol:  laugh out loud
// 
//usage  outfile << myItem;
ostream& operator<< (ostream& output, const Item& rightHandSideItem)
{
output << rightHandSideItem.textingAbbreviation;
cout<< " means: ";
output << rightHandSideItem.meaning;
return output;	
}


//creates an empty item (texting abbreviation and its associated meaning)
//post 
//usage Item aitem;
Item::Item()
{

}


//releases memory for a texting abbreviation and its associated meaning
//pre Item object exists
//post Item object no longer exists, memory has been freed
//usage automatically done at the end of scope
Item::~Item()
{
	
}

//creates a new item and copies the right hand side item into item
//pre
//post
//usage  Item myItem(yourItem);
Item::Item(const Item& rightHandSideItem)
{
Item newObject = rightHandSideItem;
}

//
//pre
//post
//usage
Item& Item::operator=(const Item& rightHandSideItem)
{
	if (this != &rightHandSideItem)
	{
       textingAbbreviation = rightHandSideItem.textingAbbreviation;
	   meaning = rightHandSideItem.meaning;
	}
	return *this;
}
      