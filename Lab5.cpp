#include <iostream>
using namespace std;

int main() {
    // Constants for fares
    const double FULL_FARE = 2.90;
    const double HALF_FARE = 1.45;
    const double JUMPER_FARE = 0.00;

    int totalSwipes;
    double totalRevenue = 0.0;

    // Ask user for number of swipes
    cout << "Enter number of MetroCard swipes for the day: " << endl;
    cin >> totalSwipes;

    // Loop through each swipe
    for (int swipe = 1; swipe <= totalSwipes; swipe++) {

        // Jumper: every 3rd swipe
        if (swipe % 3 == 0) {
            totalRevenue += JUMPER_FARE;
        }
        // Half fare: every 5th swipe (not a jumper)
        else if (swipe % 5 == 0) {
            totalRevenue += HALF_FARE;
        }
        // Full fare
        else {
            totalRevenue += FULL_FARE;
        }
    }

    // Output results
    cout << "\nTotal swipes today: " << totalSwipes << endl;
    cout << "Total revenue collected: $" << totalRevenue << endl;

    return 0;
}
