#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double x, sum, pi = 3.14;
    int n;
    cout << "Введіть x: ";
    cin >> x;
    cout << "Введіть n: ";
    cin >> n;
    for (int k = 1; k <= n; k++) {
        sum += pow(x, k) * sin(k * pi / 3) / k;
    }
    cout << "Сума " << n << " членів ряду = " << sum << endl;
}