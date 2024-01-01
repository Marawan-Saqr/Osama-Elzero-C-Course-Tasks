#include <iostream>
using namespace std;

// Function to calculate the total profit
int pricing(int totalPhones, int usedPhones, int newPhonePrice, double taxRate) {
    const int priceDifference = 200;

    // Calculate the revenue from new phones and used phones
    int newPhonesRevenue = (totalPhones - usedPhones) * newPhonePrice;
    int usedPhonesRevenue = usedPhones * (newPhonePrice - priceDifference);

    // Calculate the total revenue before taxes
    int totalRevenue = newPhonesRevenue + usedPhonesRevenue;

    // Calculate the total taxes
    double taxes = (taxRate / 100) * totalRevenue;

    // Calculate the total profit after taxes
    int totalProfit = totalRevenue - taxes;

    return totalProfit;
}

int main() {
    cout << pricing(50, 10, 800, 20) << "\n"; // 30400
    return 0;
}
