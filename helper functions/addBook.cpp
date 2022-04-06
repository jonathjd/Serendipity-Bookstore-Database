/******************************************************************************************
	*Stub Function name: addBook()
*******************************************************************************************
	*Purpose: Store books entered by the user in database.
******************************************************************************************
	*params: none
******************************************************************************************/

#include "serendipity.h"

// return type declared as an int, but this function returns void 
void addBook(int bookCount, int qty[], string title[], string isbn[], string author[],
				string publisher[], string date[], float wPrice[], float rPrice[]) {
	int centered = 0;
	int remainder = 0;
	int leftAligned = 0;
	char userChoice = '\0';
	float tempRC = 0.00;
	float tempWC = 0.00;
	int tempQty = 0;
	string str1 = "Serendipity Booksellers";
	string str2 = "Add Book";
	string dbStr = "DATABASE SIZE: 20";
	string bcStr = "CURRENT BOOK COUNT: ";
	string pVal = "--PENDING VALUES";
	string titleStr = " <1>   Enter Book Title              > ";
	string isbnStr = " <2>   Enter ISBN                    > ";
	string authorStr = " <3>   Enter Author                  > ";
	string publisherStr = " <4>   Enter Publisher               > ";
	string dateStr = " <5>   Enter Date Added (MM/DD/YYYY) > ";
	string qtyStr = " <6>   Enter Quantity on Hand        > ";
	string wholesaleStr = " <7>   Enter Wholesale Cost          > ";
	string retailStr = " <8>   Enter Retail Price            > ";
	string saveStr = " <9>   Save Book to Database";
	string returnStr = " <0>   Return to Inventory Menu";
	string str3 = "Enter Your Choice <0-9>: ";
	string tempTitle = "EMPTY";
	string tempISBN = "EMPTY";
	string tempAuthor = "EMPTY";
	string tempPublisher = "EMPTY";
	string tempDate = "EMPTY";
	string tempQtyStr;
	string tempWCStr;
	string tempRCStr;

	cout << showpoint << fixed << setprecision(2);

	do {
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
	cout << "=" << setw(leftAligned - 7) << " " << dbStr << " " << bcStr << bookCount << setw(41) << right << "=" << endl;

	// set remainder for pending values string
	remainder = STUB_WIDTH - 1 - leftAligned - pVal.length();
	cout << "=" << setw(leftAligned) << " " << pVal << setw(remainder) << right << "=" << endl;

   // Blank line
   cout << "=" << setfill(' ') << setw(STUB_WIDTH - 1) << right << "=" << endl;

   //Set remainder for titleStr
   remainder = STUB_WIDTH - 1 - leftAligned - tempTitle.length() + 3;

   // Print titleStr
   cout << "=" << titleStr << " --" << tempTitle << setw(remainder + 1) <<  right << "=" << endl;

   // Set remainder for isbnStr
   remainder = STUB_WIDTH - 1 - leftAligned - tempISBN.length() + 3;
   cout << "=" << isbnStr << " --" << tempISBN << setw(remainder + 1) << right << "=" << endl;

   // set remainder for author string
   remainder = STUB_WIDTH - 1 - leftAligned - tempAuthor.length() + 3;
   cout << "=" << authorStr << " --" << tempAuthor << setw(remainder + 1) << right << "=" << endl;

   // set remainder for publisher string
   remainder = STUB_WIDTH - 1 - leftAligned - tempPublisher.length() + 3;
   cout << "=" << publisherStr << " --" << tempPublisher << setw(remainder + 1) << right << "=" << endl;

   // set remainder for date string
   remainder = STUB_WIDTH - 1 - leftAligned - tempDate.length() + 3;
   cout << "=" << dateStr << " --" << tempDate << setw(remainder + 1) << right << "=" << endl;

	tempQtyStr = to_string(tempQty);
	// Set remainder for quantity string
	remainder = STUB_WIDTH - 3 - qtyStr.length() - tempQtyStr.length();
	cout << "=" << qtyStr << " --" << tempQty << setw(remainder - 1) << right << "=" << endl;

	tempWCStr = to_string(tempWC);
	// set remainder for wholesale string
	remainder = STUB_WIDTH - 1 - wholesaleStr.length() - tempWCStr.length();
	cout << "=" << wholesaleStr << " --$" << tempWC << setw(remainder) << right << "=" << endl;

	// set remainder for retail string
	tempRCStr = to_string(tempRC);
	remainder = STUB_WIDTH - 1 - retailStr.length() - tempRCStr.length();
	cout << "=" << retailStr << " --$" << tempRC << setw(remainder) << right << "=" << endl;

	// set remainder for save book string
	remainder = STUB_WIDTH - 1 - saveStr.length();
	cout << "=" << saveStr << setw(remainder) << right << "=" << endl;

	// set remainder for return string
	remainder = STUB_WIDTH - 1 - returnStr.length();
	cout << "=" << returnStr << setw(remainder) << right << "=" << endl;

   //Blank line
   cout << "=" << setfill(' ') << setw(STUB_WIDTH - 1) << right << "=" << endl;

	// Bottom Row
	cout << setfill('=') << setw(STUB_WIDTH) << right << "=" << setfill(' ') << endl;

	// Prompt user for their input
	cout << setw(8) << " " << str3;

		cin >> userChoice;

		if (userChoice == '0')
			break;
		else {
			switch (userChoice) {
				case '1':
					cin.ignore(400, '\n');
					cout << " " << setw(20) <<  setfill(' ') << "Enter Title: ";
					getline(cin, tempTitle);
					break;
				case '2':
					cin.ignore(400, '\n');
					cout << setfill(' ') << setw(36) << " Enter ISBN (X-XXXX-XXXX-X): ";
					cin >> tempISBN;
					break;
				case '3':
					cin.ignore(400, '\n');
					cout << setfill(' ') << setw(22) << "Enter Author: ";
					getline(cin, tempAuthor);
					break;
				case '4':
					cin.ignore(400, '\n');
					cout << setfill(' ') << setw(25) << "Enter Publisher: ";
					getline(cin, tempPublisher);
					break;
				case '5':
					cin.ignore(400, '\n');
					cout << setfill(' ') << setw(32) << "Enter Date (MM/DD/YYYY): ";
					cin >> tempDate;
					break;
				case '6':
					cin.ignore(400, '\n');
					cout << setfill(' ') << setw(24) << "Enter quantity: ";
					cin >> tempQty;
					break;
				case '7':
					cin.ignore(400, '\n');
					cout << setfill(' ') << setw(31) << "Enter Wholesale Price: ";
					cin >> tempWC;
					break;
				case '8':
					cin.ignore(400, '\n');
					cout << " " << setfill(' ') << setw(27) << "Enter Retail Price: ";
					cin >> tempRC;
					break;
				case '9':
					title[bookCount] = tempTitle;
					isbn[bookCount] = tempISBN;
					author[bookCount] = tempAuthor;
					publisher[bookCount] = tempPublisher;
					qty[bookCount] = tempQty;
					date[bookCount] = tempDate;
					wPrice[bookCount] = tempWC;
					rPrice[bookCount] = tempRC;
					bookCount++;
					break;
				}
			}
		}
	
	while (bookCount < 20);

   return invMenu(bookCount, qty, title, isbn, author, publisher, date, wPrice, rPrice);
}
