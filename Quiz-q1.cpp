#include <iostream>
using namespace std;

int main() {
    int N;
    int fee;
    int fullDayCount = 0;
    int totalRevenue = 0;

    cout << "Enter number of children: ";
    cin >> N;

    for (int i = 1; i <= N; i++) {
        cout << "Enter fee for child " << i << ": ";
        cin >> fee;

        totalRevenue += fee;

        if (fee > 600) {
            cout << "Full Day Pass" << endl;
            fullDayCount++;
        } else {
            cout << "Half Day Pass" << endl;
        }
    }

    cout << "\nTotal Revenue: " << totalRevenue << endl;
    cout << "Number of Full Day Passes: " << fullDayCount << endl;

    return 0;
}




