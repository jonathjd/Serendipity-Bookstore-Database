/******************************************************************************************
* Assignment: A21
* Author: Jonathan Dickinson
* Date: 08/04/2021
*******************************************************************************************
* Purpose: Create a dashboard which displays the inventory database to the user.
*******************************************************************************************
* Algorithm:
    1. Display the inventory database
******************************************************************************************
* Centering formula: (CONSOLE WIDTH - STRING LENGTH) / 2
*****************************************************************/

#include "serendipity.h"

void bookInfo() {
    system("clear");
    system("clear");
    int centered = 0;
    int remainder = 0;
    int leftAligned = 0;

    string str1 = "Serendipity Booksellers";
    string str2 = "Book Information";
    string str3 = "ISBN:";
    string str4 = "Title:";
    string str5 = "Author:";
    string str6 = "Publisher:";
    string str8 = "Date Added:";
    string str7 = "Quantity-On-Hand:";
    string str9 = "Wholesale Cost:";
    string str10 = "Retail Price:";

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
    leftAligned = ((WIDTH - 40) - str1.length())/2 - 2;

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

    // set remainder for string 7
    remainder = WIDTH - 1 - leftAligned - str7.length();
    cout << "=" << setw(leftAligned) << " " << str7 << setw(remainder) << right << "=" << endl;

    // Set remainder for string 9
    remainder = WIDTH - 1 - leftAligned - str9.length();
    cout << "=" << setw(leftAligned) << " " << str9 << setw(remainder) << right << "=" << endl;

    // Set remainder for string 10
    remainder = WIDTH - 1 - leftAligned - str10.length();
    cout << "=" << setw(leftAligned) << " " << str10 << setw(remainder) << right << "=" << endl;

    //Blank line
    cout << "=" <<  setfill(' ') << setw(WIDTH - 1) << right << "=" << endl;

    // Bottom Row
    cout << setfill('=') << setw(WIDTH) << right << "=" << setfill(' ') << endl;


    return;
    }
