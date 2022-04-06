#include "serendipity.h"

bool seqSearch(const int bookCount, const int qty[], const string title[], const string isbn[], const string author[],
				const string publisher[], const string date[], const float wPrice[], const float rPrice[], string newTarget, string target) {
    char userInput = '\0';
    string tempTitleArr[bookCount];
    bool success = false;
    int remainder;
    string QtyStr;
    string wPriceString;
    string rPriceString;

    // Copy title[] to tempTitleArr[]
    for (int i = 0; i < bookCount; i++) {
        tempTitleArr[i] = title[i];
    }

    // Now that we have the title array copied to the new array we lowercase each letter.
    for (int i = 0; i < bookCount; i++) {
        for (int j = 0; j < tempTitleArr[i].length(); j++){
            tempTitleArr[i][j] = tolower(tempTitleArr[i][j]); 
        }
    }


    /* We now have a new array that has the lowercase title for each book in the data base. Compare the substring
       to each *letter* (not word) in this array */
    for (int i = 0; i < bookCount; i++) 
    {   
        if (tempTitleArr[i].find(newTarget) != string::npos)
        {
            system("clear");
            system("clear");
            cout << "Search: " << target << endl;
            cout << "Found:" << endl;

            // Display book info
            cout << setw(WIDTH) << setfill('-') << right << "-" << endl;

            remainder = WIDTH - 8 - isbn[i].length();
            cout << "- " << setfill(' ') << "ISBN: " << isbn[i] << setw(remainder) << right << "-" << endl;

            remainder = WIDTH - 9 - title[i].length();
            cout << "- " << setfill(' ') <<"Title: " << title[i] << setw(remainder) << right << "-" << endl;

            remainder = WIDTH - 10 - author[i].length();
            cout << "- " << setfill(' ') << "Author: " << author[i] << setw(remainder) << right << "-" << endl;

            remainder = WIDTH - 13 - publisher[i].length();
            cout << "- " << setfill(' ') << "Publisher: " << publisher[i] << setw(remainder) << right << "-" << endl;

            remainder = WIDTH - 14 - date[i].length();
            cout << "- " << "Date Added: " << date[i] << setw(remainder) << right << "-" << endl;

            QtyStr = to_string(qty[i]);
            remainder = WIDTH - 20 - QtyStr.length();
            cout << "- " << "Quantity-On-Hand: " << qty[i] << setw(remainder) << right << "-" << endl;

            wPriceString = to_string(wPrice[i]);
            remainder = WIDTH - 15 - wPriceString.length();
            cout << "- " << "Wholesale Cost: $" << wPrice[i] << setw(remainder) << right << "-" << endl;

            rPriceString = to_string(rPrice[i]);
            remainder = WIDTH - 13 - rPriceString.length();
            cout << "- " << "Retail Price: $" << rPrice[i] << setw(remainder) << right << "-" << endl;

            cout << setw(WIDTH) << setfill('-') << right << "-" << endl;

            // Ask if book is correct
            cout << setfill(' ') << "Is this your desired book? " << "Enter (y/n): ";
            userInput = getchar();
            if (userInput == 'y')
            {
                break;
            }
            else
            {
                continue;
            }

        }   
    }   
    system("clear");
    system("clear");
    if (userInput != 'y')
        {
            cout << "Search: " << target << endl;
            cout << "Sorry, unable to locate your book." << endl;
            pressAnyKey();
        }

    // Return the boolean value of success to lookUpbook
    return success;
}
