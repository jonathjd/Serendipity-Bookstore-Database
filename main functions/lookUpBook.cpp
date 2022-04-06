#include "serendipity.h"

int lookUpBook(const int bookCount, const int qty[], const string title[], const string isbn[], const string author[],
				const string publisher[], const string date[], const float wPrice[], const float rPrice[]) {
	bool found = false;
	string target;
	char userChoice = 'y';
	string newTarget;
	do{
		cout << "Search: ";
		cin.ignore(10000, '\n');
		getline(cin, target);
		newTarget = toLower(target);
		found = seqSearch(bookCount, qty, title, isbn, author, publisher, date, wPrice, rPrice, newTarget, target);
		if (found == false)
		{
			cout << "Would you like to make another search? (Enter y/n): ";
			cin >> userChoice;
		}
	}
	while ((found == false) && (userChoice == 'y'));

	return bookCount;
}

