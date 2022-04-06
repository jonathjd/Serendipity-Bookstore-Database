/******************************************************************************************
* Assignment: A21
* Author: Jonathan Dickinson
* Date: 08/04/2021
*******************************************************************************************
* Purpose: Create a dashboard which displays the inventory database to the user.
*******************************************************************************************
* Algorithm:
   1. Display the inventory database
	2. Allow user to input choice and store as variable.
	3. If the user choice is 7 ext, else, repeat.
******************************************************************************************
* Centering formula: (CONSOLE WIDTH - STRING LENGTH) / 2
*****************************************************************/

#include "serendipity.h"

/******************************************************************************************
	*Function name: reports()
*******************************************************************************************
	*Purpose: Print menu suggestions to the user.
*******************************************************************************************
	*params: none
******************************************************************************************/

void reports(int bookCount, int qty[], string title[], string isbn[], string author[],
				 string publisher[], string date[], float wPrice[], float rPrice[]) {
   int centered = 0;
   int remainder = 0;
   int leftAligned = 0;
	char userChoice = '\0';
   string str1 = "Serendipity Booksellers";
   string str2 = "Reports";
   string str3 = "1. Inventory Listing";
   string str4 = "2. Inventory Wholesale Value";
   string str5 = "3. Inventory Retail Value";
   string str6 = "4. Listing by Quantity";
   string str7 = "Enter Your Choice: ";
	string str8 = "5. Listing by Cost";
   string str9 = "6. Listing by Age";
	string str10 = "7. Return to Main Menu";

	// Clear console
	system("clear");
	system("clear");

   // Print top border.
   cout << setfill('=') << setw(WIDTH) << right << "=" << setfill(' ') << endl;

   centered = ((WIDTH - 1) - str1.length())/2 - 1;

   // Blank line
   cout << "=" <<  setfill(' ') << setw(WIDTH - 1) << right << "=" << endl;

   // first part of printing the line
   cout << "=" << setw(centered) << " " << str1;

   // last part of the printing line
   remainder = WIDTH - 1 - centered - str1.length();
   cout << setw(remainder) << right << "=" << endl;

   centered = ((WIDTH - 1) - str2.length())/2 - 1;

   // first part of the printing line
   cout << "=" << setw(centered) << " " << str2;

   // last part of the printing line
   remainder = WIDTH - 1 - centered - str2.length();
   cout << setw(remainder) << right << "=" << endl;

   // Blank line
   cout << "=" <<  setfill(' ') << setw(WIDTH - 1) << right << "=" << endl;

   // Left align the menu choices
   leftAligned = ((WIDTH - 1) - str1.length())/2 - 2;

   //Set remainder for menu choice string 3
   remainder = WIDTH - 1 - leftAligned - str3.length();

   // Print string 3
   cout << "=" << setw(leftAligned) << " " << str3 << setw(remainder) <<  right << "=" << endl;;

   // Set remainder for string 4
   remainder = WIDTH - 1 - leftAligned - str4.length();
   cout << "=" << setw(leftAligned) << " " << str4 << setw(remainder) << right << "=" << endl;

   // set remainder for string 5
   remainder = WIDTH - 1 - leftAligned - str5.length();
   cout << "=" << setw(leftAligned) << " " << str5 << setw(remainder) << right << "=" << endl;

   // set remainder for string 6
   remainder = WIDTH - 1 - leftAligned - str6.length();
   cout << "=" << setw(leftAligned) << " " << str6 << setw(remainder) << right << "=" << endl;

   // set remainder for string 8
   remainder = WIDTH - 1 - leftAligned - str8.length();
   cout << "=" << setw(leftAligned) << " " << str8 << setw(remainder) << right << "=" << endl;

	// Set remainder for string 9
	remainder = WIDTH - 1 - leftAligned - str9.length();
	cout << "=" << setw(leftAligned) << " " << str9 << setw(remainder) << right << "=" << endl;

	// set remainder for string 10
	remainder = WIDTH - 1 - leftAligned - str10.length();
	cout << "=" << setw(leftAligned) << " " << str10 << setw(remainder) << right << "=" << endl;

   //Blank line
   cout << "=" << setfill(' ') << setw(WIDTH - 1) << right << "=" << endl;

	// Prompt user for their input
	cout << "=" << setw(leftAligned) << " " << str7;
	cin.ignore(200, '\n');

	// Get user selection
	cin >> userChoice;

	//Blank line
	cout << "=" <<  setfill(' ') << setw(WIDTH - 1) << right << "=" << endl;

	// Switch statement
	switch (userChoice) {
	case '1':
		repListing(bookCount, qty, title, isbn, author, publisher, date, wPrice, rPrice);
		break;
	case '2':
		repWholesale();
		break;
	case '3':
		repRetail();
		break;
	case '4':
		repQty();
		break;
	case '5':
		repCost();
		break;
	case '6':
		repAge();
		break;
	default:
		break;
	}
   return;
}
