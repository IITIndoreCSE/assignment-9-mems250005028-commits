#include <iostream>
#include <string>
using namespace std;

struct SalesRecord {
    string month;
    float amount;
};

int main() {
    SalesRecord sales[12];
    
    for (int i = 0; i < 12; i++) {
        cout << "Month " << (i + 1) << " Name: ";
        cin >> sales[i].month;
        cout << "Sales Amount: ";
        cin >> sales[i].amount;
    }

    int maxIndex = 0, minIndex = 0;
    for (int i = 1; i < 12; i++) {
        if (sales[i].amount > sales[maxIndex].amount) {
            maxIndex = i;
        }
        if (sales[i].amount < sales[minIndex].amount) {
            minIndex = i;
        }
    }

    cout << "Month with maximum sales: " << sales[maxIndex].month
         << " with amount " << sales[maxIndex].amount << endl;
    cout << "Month with minimum sales: " << sales[minIndex].month
         << " with amount " << sales[minIndex].amount << endl;

    return 0;
}

