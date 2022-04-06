/******************************************************************************************
* Assignment: A21
* Author: Jonathan Dickinson
* Date: 08/04/2021
*******************************************************************************************
* Purpose: Create a main menu for navigating the three modules (Cashier, Inventory Database,
and Report) for the Seredipity project.
*******************************************************************************************
* Algorithm:
   1. Display the main menu.
	2. Allow user to enter a choice from 1-4 and store it in either an int or char variable.
	3. Enter While loop to output statement based on user selection.
	4. Exit
******************************************************************************************
* Centering formula: (CONSOLE WIDTH - STRING LENGTH) / 2
******************************************************************************************/

#include "serendipity.h"

int main(){
	int qty[DBSIZE];
	string title[DBSIZE];
	string isbn[DBSIZE];
	string author[DBSIZE];
	string publisher[DBSIZE];
	string date[DBSIZE];
	float wPrice[DBSIZE];
	float rPrice[DBSIZE];
	int bookCount = 0;
	int centered = 0;
	int remainder = 0;
	int leftAligned = 0;
	char userChoice = '\0';
   string str1 = "Serendipity Booksellers";
   string str2 = "Main Menu";
   string str3 = "1. Cashier Module";
   string str4 = "2. Inventory Database Module";
   string str5 = "3. Report Module";
   string str6 = "4. Exit";
   string str7 = "Enter Your Choice: ";
   do
   {
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

   // Print first part of the menu choice
   cout << "=" << setw(leftAligned) << " " << str3 << setw(remainder) <<  right << "=" << endl;;

   // last part of printing line
   remainder = WIDTH - 1 - leftAligned - str3.length();

   // Set remainder for string 4
   remainder = WIDTH - 1 - leftAligned - str4.length();
   cout << "=" << setw(leftAligned) << " " << str4 << setw(remainder) << right << "=" << endl;

   // set remainder for string 5
   remainder = WIDTH - 1 - leftAligned - str5.length();
   cout << "=" << setw(leftAligned) << " " << str5 << setw(remainder) << right << "=" << endl;

   // set remainder for string 6
   remainder = WIDTH - 1 - leftAligned - str6.length();
   cout << "=" << setw(leftAligned) << " " << str6 << setw(remainder) << right << "=" << endl;

	// Blank line
	cout << "=" << setfill(' ') << setw(WIDTH - 1) << right << "=" << endl;

	// Blank line
	cout << "=" << setfill(' ') << setw(WIDTH - 1) << right << "=" << endl;

	// Bottom Border
	cout << setfill('=') << setw(WIDTH) << right << "=" << setfill(' ') << endl;

   // set remainder for string 7
	remainder = WIDTH - 2 - leftAligned - str3.length();
	cout << setw(leftAligned) << " " << str7;

      cin >> userChoice;

	   switch(userChoice) {
		   case '1':
			   cashier();
			   break;
		   case '2':
			   invMenu(bookCount, qty, title, isbn, author, publisher, date, wPrice, rPrice);
			   break;
		   case '3':
			   reports(bookCount, qty, title, isbn, author, publisher, date, wPrice, rPrice);
			   break;
		   default:
			   break;
		}
   } while (userChoice != '4');
   
/*
	cin >> userChoice;

	switch(userChoice) {
		case '1':
			cashier();
			break;
		case '2':
			invMenu(bookCount, qty, title, isbn, author, publisher, date, wPrice, rPrice);
			break;
		case '3':
			reports();
			break;
		default:
			break;
		}
*/

	return 0;

}
