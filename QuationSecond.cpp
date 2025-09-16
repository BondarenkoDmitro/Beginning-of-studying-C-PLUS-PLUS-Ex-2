#include <iostream>

using namespace std;

int main() {
    int M, N;
    double totalSum = 0;
    cout << "Введите число M:" << endl;
    cin >> M;
    cout << "Введите число N:" << endl;
    cin >> N;
    for (int m = 1; m <= M; m++) {
        for (int n = 1; n <= N; n++) {
            cout << m << " " << n << endl;
            totalSum += 1.0 / (m * n);
        }
    }
    cout << "Результат двойной суммы: " << totalSum << endl;
}