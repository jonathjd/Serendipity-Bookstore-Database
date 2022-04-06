/******************************************************************************************
* Assignment: A21
* Author: Jonathan Dickinson & Pierce.
* Date: 08/05/2021
*******************************************************************************************
* Purpose: Allow user to input the title of a book, the ISBN code, the quantity, the and
the price, then display the sales receipt to the user.
*******************************************************************************************
* Algorithm:
   1. Prompt user for date and store date in var.
	2. Prompt user for quantity and store in var.
	3. Prompt user for isbn and store in var.
	4. Prompt user for title and store in var.
	5. Propmt user for price and store in var.
	6. Print sales slip
	7. Calculate tax, total price, and price with tax.
	8. Display to the user.
	9. Ask user if they wish to make another transaction.
******************************************************************************************/

#include "serendipity.h"

/******************************************************************************************
Function: cashier()
params: None
Purpose: Allows user to input date, isbn, title, and price of the book they wish to purchase.
	then displays a sales slip to the user.
Returns: none
*********************************************************************************************/

void cashier() {
	char userContinue = '\0';
	int qty = 0;
	double price = 0;
	double subtotal = 0;
	double total = 0;
	double tax = 0;
	int remainder = 0;
	int remainder1 = 0;
	int remainder2 = 0;
	int remainder3 = 0;
	int remainder4 = 0;
	string str1 = "Seredipity Booksellers";
	string str2 = "Thank You for Shopping at Seredipity!";
	string str3 = "Date: ";
	string date;
	string str4 = "Qty";
	string qtyString;
	string str5 = "ISBN";
	string isbn;
	string title;
	string str6 = "Title";
	string str7 = "Price";
	string priceString;
	string str8 = "Total";
	string str9 = "Subtotal";
	string subtotalString;
	string str10 = "Tax";
	string taxString;
	string str11 = "Total";
	string str12 = "Cashier Module";
	string str13 = "Quantity of Book: ";

	cout << fixed << showpoint << setprecision(2);

	do {

	system("clear");
	system("clear");

	// Print top border
	cout << setfill('=') << setw(WIDTH) << right << "=" << setfill(' ') << endl;

	// Print blank line
	remainder = WIDTH - 1;
	cout << "=" << setfill(' ') << setw(remainder) << right << "=" << endl;

	// Print "Seredipity Booksellers"
	remainder = WIDTH - str1.length() - 5;
	cout << "=    " << setw(10) << str1 << setfill(' ') << setw(remainder) << right << "=" << endl;

	// Print "Cashier Module
	remainder = WIDTH - str12.length() - 7;
	cout << "=      " << setw(12) << setfill(' ') << str12 << setw(remainder) << right << "=" << endl;

	// Blank line
	remainder = WIDTH - 1;
	cout << "=" << setfill(' ') << setw(remainder) << right << "=" << endl;

	// Prompt date and store in var
	cout << "=     " << setw(3) << str3;
	cin >> date;

	// Quantity
	cout << "=     " << setw(3) << str13;
	cin >> qty;

	// ISBN
	cout << "=     " << setw(3) << str5 << ": ";
	cin >> isbn;
	cin.ignore(400, '\n');

	// Title
	cout << "=     " << setw(3) << str6 << ": ";
	getline(cin, title);

	// Price
	cout << "=     " << setw(3) << str7 << ": ";
	cin >> price;
	cin.ignore(500, '\n');

	// Blank line
	remainder = WIDTH - 1;
	cout << "=" << setfill(' ') << setw(remainder) << right << "=" << endl;
	cout << "=" << setfill(' ') << setw(remainder) << right << "=" << endl;
	cout << "=" << setfill(' ') << setw(remainder) << right << "=" << endl;

	// Bottom Border
	cout << setfill('=') << setw(WIDTH) << right << "=" << setfill(' ') << endl;

////////////////////////Cashier Module//////////////////////////////////////////
///////////////////////DIVISOR///////////////////////////////////////////////////

	cout << endl;
	cout << endl;
	cout << endl;


//////////////////////SALESSLIP////////////////////////////////////////////////

	// Print top border
	cout << setfill('=') << setw(WIDTH) << right << "=" << setfill(' ') << endl;

	// Print blank line
	remainder = WIDTH - 1;
	cout << "=" << setfill(' ') << setw(remainder) << right << "=" << endl;

	// Print "Seredipity Booksellers" header
	remainder = WIDTH - str1.length() - 2;
	cout << "= " << str1 << setfill(' ') << setw(remainder) << right << "=" << endl;

	//Print blank line
	remainder = WIDTH - 1;
	cout << "=" << setfill(' ') << setw(remainder) << right << "=" << endl;

	// Print the Date
	remainder = WIDTH - str3.length() - date.length() - 2;
	cout << "= " << setfill(' ') <<  str3 << date << setw(remainder) << right << "=" << endl;

	//Print blank line
	remainder = WIDTH - 1;
	cout << "=" << setfill(' ') << setw(remainder) << right << "=" << endl;

	// Output Qty, ISBN, Title, Price, Total
	cout << "=" << setfill(' ') << " " << str4 << setw(2) << " "
		  << str5 << setw(11) << " " << str6 << setw(32) << " "
	     << str7 << setw(4) << " " << str8 << setw(7) << right << "=" << endl;

	// Print underscores
	cout << setfill('_') << setw(WIDTH) << right << "_" << setfill('_') << endl;

	// Display user totals
	subtotal = price * qty;
	qtyString = to_string(qty);
	priceString = to_string(price);
	subtotalString = to_string(total);
	remainder1 = WIDTH - qtyString.length() - 75;
	remainder2 = WIDTH - title.length() - 43;
	remainder3 = WIDTH - priceString.length() - 68;
	remainder4 = WIDTH - subtotalString.length() - priceString.length() - 58;
	cout << "=" << setfill(' ') << " " << qty << right << setw(remainder1) << " " << isbn
		  << setw(2) << " " << title << setw(remainder2) << " " << "$" << " " << price
		  << setw(remainder3) << "$" << " " <<  subtotal << setw(remainder4) << "=" << endl;

	// Print two blank lines
	remainder = WIDTH - 1;
	cout << "=" << setfill(' ') << setw(remainder) << right << "=" << endl;
	cout << "=" << setfill(' ') << setw(remainder) << right << "=" << endl;

	// Display subtotal
	remainder = WIDTH - str9.length() - 28;
	cout << "=" << setfill(' ') << setw(WIDTH - 65) << " " << str9 << setw(remainder)
	     << " " << "$" << " " << subtotal << setw(remainder4) << "=" << endl;

	// Display tax
	tax = subtotal * (SALES_TAX / 100);
	taxString = to_string(tax);
	remainder = WIDTH - str10.length() - 28;
	remainder2 = WIDTH - str10.length() - taxString.length() - 64;
	cout << "=" << setfill(' ') << setw(WIDTH - 65) << " " << str10 << setw(remainder)
	     << " " << "$" << "  " << tax << setw(remainder2) << "=" << endl;

	// Display total
	total = subtotal + tax;
	remainder = WIDTH - str8.length() - 28;
	cout << "=" << setfill(' ') << setw(WIDTH - 65) << " " << str8 << setw(remainder)
	     << " " << "$" << " " << total << setw(remainder4) << "=" << endl;

	// Print blank line
	remainder = WIDTH - 1;
	cout << "=" << setfill(' ') << setw(remainder) << right << "=" << endl;

	// Print "Thank you for shopping at serendipity!"
	remainder = WIDTH - str2.length() - 2;
	cout << "=" << " " << str2 << setfill(' ') << setw(remainder) << "=" << endl;

	// Print blank line
	remainder = WIDTH - 1;
	cout << "=" << setfill(' ') << setw(remainder) << right << "=" << endl;

	// Print bottom border
	cout << setfill('=') << setw(WIDTH) << right << "=" << endl << endl;;

	cout << "Would you like to process another transaction? Select 'y' or 'n': ";
	cin.clear();
	cin >> userContinue;
	}
	while (userContinue != 'n');

	return;
}
