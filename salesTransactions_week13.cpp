/* 
*BCS-05-0044/2025
*Bradly Okoth

*Sales Transactions Reader 
* This program reads sales transactions from a text file named "sales.txt".
* It calculates and displays the total sales for the day.
*/

#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream inFile("sales.txt");
    double amount, totalSales = 0;

    if (inFile.is_open()) {
        while (inFile >> amount) {
            totalSales += amount;
        }
        cout << "Total sales for the day: Ksh " << totalSales << endl;
        inFile.close();
    } else {
        cout << "Error opening sales.txt (Make sure the file exists first!)." << endl;
    }
    return 0;
}