/***************************************************
* Function: Stub Function
***************************************************
* Purpose: Output statement
***************************************************
* Params: None
***************************************************
* Returns: none
**************************************************/

#include "serendipity.h"

void repListing(int bookCount, const int qty[], const string title[], const string isbn[], const string author[],
				const string publisher[], const string date[], const float wPrice[], const float rPrice[]) {
	int centered = 0;
	int remainder = 0;
	int leftAligned = 0;
	string str1 = "Serendipity Booksellers";
	string str2 = "REPORT LISTING";
	string dbStr = "DATABASE SIZE: 20";
	string bcStr = "CURRENT BOOK COUNT: ";
	string titleStr = "TITLE";
	string isbnStr = "ISBN";
	string authorStr = "AUTHOR";
	string publisherStr = "PUBLISHER";
	string dateStr = "DATE ADDED";
	string qtyStr = "QTY O/H";
	string wholesaleStr = "WHOLESALE COST";
	string retailStr = "RETAIL PRICE";
	string tempTitle = "EMPTY";
	string tempISBN = "EMPTY";
	string tempAuthor = "EMPTY";
	string tempPublisher = "EMPTY";
	string tempDate = "EMPTY";

	cout << showpoint << fixed << setprecision(2);

	for (int i = 0; i < 2; i++)
	{
		// Clear console
		system("clear");
		system("clear");

		// Print top border.
		cout << setfill('=') << setw(STUB_WIDTH) << right << "=" << setfill(' ') << endl;

		// Centered Formula for str1
		centered = ((STUB_WIDTH - 1) - str1.length())/2 - 1;

		// Blank line
		cout << "=" << setfill(' ') << setw(STUB_WIDTH - 1) << right << "=" << endl;

		// first part of printing the line
		cout << "=" << setw(centered) << " " << str1;

		// last part of the printing line
		remainder = STUB_WIDTH - 1 - centered - str1.length();
		cout << setw(remainder) << right << "=" << endl;

		// Centered Formula for str2
		centered = ((STUB_WIDTH - 1) - str2.length())/2 - 1;

		// Left aligned formula
		leftAligned = ((STUB_WIDTH - 1) - str1.length())/2 - 2;

		// first part of the printing line
		cout << "=" << setw(centered) << " " << str2;

		// last part of the printing line
		remainder = STUB_WIDTH - 1 - centered - str2.length();
		cout << setw(remainder) << right << "=" << endl;

		// Blank line
		cout << "=" << setfill(' ') << setw(STUB_WIDTH - 1) << right << "=" << endl;

		// set remainder for database and current book strings
		string bcStr2 = to_string(bookCount);
		remainder = STUB_WIDTH - leftAligned - dbStr.length() - bcStr2.length();
		cout << "=" << setw(leftAligned - 20) << "PAGE: " << i + 1 << " of " << "2" << " " << setw(28) << dbStr << setw(30) << bcStr << DBSIZE << setw(26) << right << "=" << endl;

		// Blank line
		cout << "=" << setfill(' ') << setw(STUB_WIDTH - 1) << right << "=" << endl;

		cout << "= " << titleStr << setw(27) << setfill(' ') << isbnStr << setw(16) << authorStr << setw(16) << publisherStr << setw(14) << dateStr << setw(8)
					<< qtyStr << setw(15) << wholesaleStr << setw(13) << retailStr << setw(4) << right << "=" << endl;
		cout << "-" << setw(STUB_WIDTH - 1) << setfill('-') << right << "-" << endl;

		if (i == 0)
		{
			for (int j = 0; j < (DBSIZE / 2); j++)
			{
				cout << "= "  << setfill(' ') << setw(28) << left << title[j].substr(0, 27) << setw(14) << isbn[j] << setw(14) << author[j].substr(0,13) << setw(13) << publisher[j] << setw(9) 
					<< date[j] << setw(7) << right << qty[j] << setw(5) << "$" << setw(9) << setfill('.') << wPrice[j] << setw(5) << setfill(' ') << "$" << setw(6) << setfill('.') << right << rPrice[j] << right
					<< setw(7) << setfill(' ')<< "=" << endl << endl;
			}
			pressAnyKey();
		}
		else
		{
			for (int j = 10; j < DBSIZE; j++)
			{
				cout << "= "  << setfill(' ') << setw(28) << left << title[j].substr(0, 27) << setw(14) << isbn[j] << setw(14) << author[j].substr(0,13) << setw(13) << publisher[j].substr(0, 11) << setw(9) 
					<< date[j] << setw(7) << right << qty[j] << setw(5) << "$" << setw(9) << setfill('.') << wPrice[j] << setw(5) << setfill(' ') << "$" << setw(6) << setfill('.') << right << rPrice[j] << right
					<< setw(7) << setfill(' ')<< "=" << endl << endl;
			}
			break;
		}
	}
	pressAnyKey();
}
