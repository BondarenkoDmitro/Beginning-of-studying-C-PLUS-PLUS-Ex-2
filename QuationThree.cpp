#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double a, b, c;
    double maxY = pow(a, 3) - (2 * a) + 5;
    cout << "Початкове значення відрізка (a):" << endl;
    cin >> a;
    cout << "Кінцеве значення відрізка (b):" << endl;
    cin >> b;
    cout << "Значення кроку (c):" << endl;
    cin >> c;
    for (int i = a + c; i <= b; i = i + c) {
        double y = pow(i, 3) - (2 * i) + 5;
        if (y > maxY) {
            maxY = y;
        }
    }
    cout << endl << "Максимальне значення функції: " << maxY << endl;
}