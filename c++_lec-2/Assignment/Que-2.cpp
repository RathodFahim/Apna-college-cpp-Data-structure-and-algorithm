#include <iostream>
using namespace std;

    int main() {
        float pen, pencil, eracer;

        cout << "Enter the price of pen: ";
        cin >> pen;

        cout << "Enter the price of pencil: ";
        cin >> pencil;

        cout << "Enter the price of eracer: ";
        cin >> eracer;

        float GST = 0.18;

        float total_bill = (pen + pencil + eracer);
        cout << "Total bill = " << total_bill;

        float total_bill_with_GST = total_bill + (total_bill * GST);
        cout << "Total bill with GST = " << total_bill_with_GST;

    }