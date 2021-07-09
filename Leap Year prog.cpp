#include <iostream> // to use io
using namespace std; // for cout, cin

int main() {
    int year;

    cout << "Hello!\nWelcome to leap year calculator!\n";

    cout << "Enter a year: ";
    cin >> year; // input
    while (year > 0) { // start of first loop year > 0 so there isnt any negative numbers

        if (year % 4 == 0) { //if else statements for the options
            if (year % 100 == 0) {
                if (year % 400 == 0)
                    cout << year << " is a leap year.";
                else
                    cout << year << " is not a leap year.";
            }
            else
                cout << year << " is a leap year.";
        }
        else
            cout << year << " is not a leap year.";
        break;
    }
    char choice; // declare char as choice

    while (true) // other loop asking if user wants another
    {
        cout << "\nWould you like to try another year?(Y/N)\n"; //asking user
        cin >> choice;
        if (choice == 'N' || choice == 'n') { // If user choosed N or n program ends
            break;
        }


        cout << "\nEnter a year: "; // asking for year again if user wants to do more
        cin >> year;

        while (year > 0) // another loop if user wants more
            break;
        if (year % 4 == 0) {
            if (year % 100 == 0) {
                if (year % 400 == 0)
                    cout << year << " is a leap year.";
                else
                    cout << year << " is not a leap year.";
            }
            else
                cout << year << " is a leap year.";
        }
        else
            cout << year << " is not a leap year.\n";

    }



    cout << "\nThank You"; // thanking user/ end of program

    return 0; // end

}