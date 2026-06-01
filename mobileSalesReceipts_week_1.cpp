/* Sales Receipt Program for Mobile Phone Shop
 * Bradly Okoth
 * BCS-05-0044/2025
*/

#include<iostream>
#include<string>
using namespace std;

int main()
{
    string customerName, phoneModel;
    int quantity;
    double pricePerPhone, totalSalesAmount;

    // System prompts user for input
    cout <<"Enter customer name: ";
    getline(cin, customerName);

    cout <<"Enter phone model: ";
    getline(cin, phoneModel);

    cout << "Enter quantity bought: ";
    cin >> quantity;

    cout << "Enter price per phone: ";
    cin >> pricePerPhone;

    // Calculate total sales amount
    totalSalesAmount = quantity * pricePerPhone;

    // Display the sales receipt
    cout << "\n===== SALES RECEIPT ====="<<endl;
    cout << "Customer Name: "<<customerName<<endl;
    cout << "Phone Model: "<<phoneModel<<endl;
    cout <<  "Quantity Bought: "<<quantity<<endl;
    cout << "Price Per Phone: Ksh "<<pricePerPhone<<endl;
    cout << "Total Sales Amount: Ksh "<<totalSalesAmount<<endl;

    return 0;
}