#ifndef SERENDIPITY_H
#define SERENDIPITY_H

#include <iostream>
#include <iomanip>
#include <string>
#include <cstring>
using namespace std;

/********************************* Constant Variables *******************************/
const int WIDTH = 80;
const int STUB_WIDTH = 120;
const int DBSIZE = 20;
const double SALES_TAX = 6.0;

/****************************** Serendipity Modules ********************************/
void cashier();
void invMenu(int bookCount, int qty[], string title[], string isbn[], string author[],
				 string publisher[], string date[], float wPrice[], float rPrice[]);
void reports(int bookCount, int qty[], string title[], string isbn[], string author[],
				 string publisher[], string date[], float wPrice[], float rPrice[]);
void bookInfo();

/***************************** Stub Functions -> InvMenu <-  ***********************/
int lookUpBook(const int bookCount, const int qty[], const string title[], const string isbn[], const string author[],
				const string publisher[], const string date[], const float wPrice[], const float rPrice[]);
void addBook(int bookCount, int qty[], string title[], string isbn[], string author[],
			 string publisher[], string date[], float wPrice[], float rPrice[]);
void editBook();
void deleteBook();

/************************ Stub Functions -> reports <- ***************************/
void repListing(const int bookCount, const int qty[], const string title[], const string isbn[], const string author[],
				const string publisher[], const string date[], const float wPrice[], const float rPrice[]);
void repWholesale();
void repRetail();
void repQty();
void repCost();
void repAge();

/************************* Helper functions ****************************************/
void pressAnyKey();
bool seqSearch(const int bookCount, const int qty[], const string title[], const string isbn[], const string author[],
				const string publisher[], const string date[], const float wPrice[], const float rPrice[], string newTarget, string target);
string toLower(string target);

#endif
