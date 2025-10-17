#include <iostream>
using namespace std;

struct Point {
    float x, y;
};

int main() {
    Point points[7];
    int count = 0;

    cout << "Enter coordinates for 7 points (x, y):" << endl;
    for (int i = 0; i < 7; i++) {
        cout << "Point " << i + 1 << " - x: ";
        cin >> points[i].x;
        cout << "Point " << i + 1 << " - y: ";
        cin >> points[i].y;
    }

    for (int i = 0; i < 7; i++) {
        if (points[i].x > 0 && points[i].y > 0)
            count++;
    }

    cout << "Number of points in the first quadrant: " << count << endl;
    return 0;
}

