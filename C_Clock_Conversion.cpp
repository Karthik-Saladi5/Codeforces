#include <bits/stdc++.h>
using namespace std;

void convertTime(int hour, int minute) {
    string period;
    if (hour < 12) {
        period = "AM";
        if (hour == 0) {
            hour = 12;
        }
    }
    else {
        period = "PM";
        if (hour != 12) {
            hour -= 12;
        }
    }
    cout << setw(2) << setfill('0') << hour << ":" << setw(2) << setfill('0') << minute << " " << period << endl;
}
int main() {
    int tc; cin >> tc;
    cin.ignore();
    while (tc--) {
         string time;
        getline(cin, time); // Read the entire line
        stringstream ss(time); // Create a stringstream from the line
        int hour, minute;
        char colon;
        ss >> hour >> colon >> minute; // Extract hour and minute from stringstream
        convertTime(hour, minute);
    }
}