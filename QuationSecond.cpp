#include <iostream>

using namespace std;

int main() {
    double M, N, totalSum;
    cout << "Введите число M:" << endl;
    cin >> M;
    cout << "Введите число N:" << endl;
    cin >> N;
    for (int m = 1; m <= M; m++) {
        for (int n = 1; n <= N; n++) {
            totalSum += 1.0 / (m * n);
        }
    }
    cout << "Результат: " << totalSum << endl;
}