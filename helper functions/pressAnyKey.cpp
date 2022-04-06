/******************************************************************************************
	*Stub Function name: pressAnyKey()
*******************************************************************************************
	*Purpose: Helper Function- Displays the message "Press the ENTER key to continue".
                               Once enter key is pressed code continues as normal.
******************************************************************************************
	*params: none
******************************************************************************************/

#include "serendipity.h"

void pressAnyKey() {
    cin.ignore(25, '\n');
    cout << "Press the ENTER key to continue . . .";
    getchar();
}
