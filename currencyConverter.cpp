#include <iostream>
using namespace std;
// Currency Converter 
int main() {
    double amount;
    double convertedAmount;
    int choice;
    char continueChoice;

    // Fixed exchange rates (for simplicity)
    const double USD_to_EUR = 0.85;
    const double USD_to_GBP = 0.75;
    const double USD_to_JPY = 110.0;
    const double EUR_to_USD = 1.18;
    const double GBP_to_USD = 1.33;
    const double JPY_to_USD = 0.0091;

    do {
        // Display the conversion options
        cout << "Currency Converter" << endl;
        cout << "1. USD to EUR" << endl;
        cout << "2. USD to GBP" << endl;
        cout << "3. USD to JPY" << endl;
        cout << "4. EUR to USD" << endl;
        cout << "5. GBP to USD" << endl;
        cout << "6. JPY to USD" << endl;
        cout << "Choose an option (1-6): ";
        cin >> choice;

        // Prompt the user to enter the amount to be converted
        cout << "Enter the amount to convert: ";
        cin >> amount;

        // Perform the conversion based on the user's choice
        switch (choice) {
            case 1:
                convertedAmount = amount * USD_to_EUR;
                cout << amount << " USD is " << convertedAmount << " EUR" << endl;
                break;
            case 2:
                convertedAmount = amount * USD_to_GBP;
                cout << amount << " USD is " << convertedAmount << " GBP" << endl;
                break;
            case 3:
                convertedAmount = amount * USD_to_JPY;
                cout << amount << " USD is " << convertedAmount << " JPY" << endl;
                break;
            case 4:
                convertedAmount = amount * EUR_to_USD;
                cout << amount << " EUR is " << convertedAmount << " USD" << endl;
                break;
            case 5:
                convertedAmount = amount * GBP_to_USD;
                cout << amount << " GBP is " << convertedAmount << " USD" << endl;
                break;
            case 6:
                convertedAmount = amount * JPY_to_USD;
                cout << amount << " JPY is " << convertedAmount << " USD" << endl;
                break;
            default:
                cout << "Invalid option!" << endl;
                break;
        }

        // Ask if the user wants to perform another conversion
        cout << "\nDo you want to perform another conversion? (y/n): ";
        cin >> continueChoice;

    } while (continueChoice == 'y' || continueChoice == 'Y'); 

    // Display thank you message when the user chooses to exit
    cout << "Thank you for using the currency converter. Goodbye!" << endl;

    return 0;
}
