/******************************************************************************************
	* Assignment: A21
	* Author: Jonathan Dickinson
	* Date: 07/11/2021
*******************************************************************************************
	* Purpose: Create a dashboard which displays the inventory database to the user.
*******************************************************************************************
	* Algorithm:
   	1. Display the inventory database
		2. Prompt the user to enter their selection from the menu options.
		3. Store user option in var.
		4. If user var is 5 then exit program, if else then display program again.
******************************************************************************************
* Centering formula: (CONSOLE WIDTH - STRING LENGTH) / 2
*****************************************************************/

#include "serendipity.h"

void invMenu(int bookCount, int qty[], string title[], string isbn[], string author[],
				 string publisher[], string date[], float wPrice[], float rPrice[]) {
   system("clear");
	system("clear");
   int centered = 0;
   int remainder = 0;
   int leftAligned = 0;
	char userSelection = '\0';
   string str1 = "Serendipity Booksellers";
   string str2 = "Inventory Database";
   string str3 = "1. Look Up a Book";
   string str4 = "2. Add a Book";
   string str5 = "3. Edit a Books Record";
   string str6 = "4. Delete a Book";
   string str8 = "5. Return to the Main Menu";
   string str7 = "Enter Your Choice: ";

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

   //Blank line
   cout << "=" << setfill(' ') << setw(WIDTH - 1) << right << "=" << endl;

	// Blank Line
	cout << "=" << setfill(' ') << setw(WIDTH - 1) << right << "=" << endl;

	// Bottom Border
	cout << setfill('=') << setw(WIDTH) << right << "=" << setfill(' ') << endl;

	// Prompt User
	cout << setw(leftAligned + 1) << " " << "Enter your choice: ";
	
   do
   {
      switch(userSelection) {
		case '1':
         if (bookCount == 0) {
            cout << "*** ERROR *** Database is EMPTY. Cannot look up any books." << endl;
            pressAnyKey();
         }
         else{
            lookUpBook(bookCount, qty, title, isbn, author, publisher, date, wPrice, rPrice);
         }
			break;
		case '2':
         if (bookCount < 20) {
			   addBook(bookCount, qty, title, isbn, author, publisher, date, wPrice, rPrice); 
         }
         else {
            cout << "*** ERROR *** Database is FULL. Cannot add more books." << endl;
            pressAnyKey();
         }
			break;
		case '3':
			editBook();
			break;
		case '4':
			deleteBook();
			break;
		default:
			break;
	   }
      cin >> userSelection;

   } while (userSelection != '5');
   
/*
   switch(userChoice) {
		case '1':
         if (bookCount == 0) {
            cout << "*** ERROR *** Database is EMPTY. Cannot look up any books." << endl;
            pressAnyKey();
         }
         else{
            lookUpBook(bookCount, qty, title, isbn, author, publisher, date, wPrice, rPrice);
         }
			break;
		case '2':
         if (bookCount < 20) {
			   addBook(bookCount, qty, title, isbn, author, publisher, date, wPrice, rPrice); 
         }
         else {
            cout << "*** ERROR *** Database is FULL. Cannot add more books." << endl;
            pressAnyKey();
         }
			break;
		case '3':
			editBook();
			break;
		case '4':
			deleteBook();
			break;
		default:
			break;
	   }
   */
   return;
}
