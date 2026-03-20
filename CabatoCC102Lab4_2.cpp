#include <iostream>
#include <string>
using namespace std;

int main() {
    const int MONTHS = 12;
    string monthNames[MONTHS] = {
        "January", "February", "March", "April", "May", "June",
        "July", "August", "September", "October", "November", "December"
    };

    double sales[MONTHS];
    double totalSales = 0;
    double highestSale = -1;
    double lowestSale = 1e9; 
    int highestMonth = 0, lowestMonth = 0;

    for (int i = 0; i < MONTHS; i++) {
        cout << "Enter sales for " << monthNames[i] << ": ";
        cin >> sales[i];
        totalSales += sales[i];

        if (sales[i] > highestSale) {
            highestSale = sales[i];
            highestMonth = i;
        }
        if (sales[i] < lowestSale) {
            lowestSale = sales[i];
            lowestMonth = i;
        }
    }

    double averageSales = totalSales / MONTHS;

    cout << "\n--- Monthly Sales Summary ---\n";
    cout << "Total Annual Sales: " << totalSales << endl;
    cout << "Average Monthly Sales: " << averageSales << endl;
    cout << "Highest Sales Month: " << monthNames[highestMonth] 
         << " (" << highestSale << ")" << endl;
    cout << "Lowest Sales Month: " << monthNames[lowestMonth] 
         << " (" << lowestSale << ")" << endl;

    return 0;
}
