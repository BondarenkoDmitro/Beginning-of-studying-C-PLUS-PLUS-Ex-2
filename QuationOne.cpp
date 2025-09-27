#include <iostream>

using namespace std;

int main() {
    int n, a, m, sum;
    cout << "Кількість членів послідовності N:" << endl;
    cin >> n;
    cout << "Дійсне число M: " << endl;
    cin >> m;
    cout << "Набір дійсних членів послідовності A але до " << n << "шт:" << endl;
    for (int i = 1; i <= n; i++) {
        cout << i << ". ";
        cin >> a;
        if (a > m) {
            sum += a;
        }
    }
    cout << "Сумма членів послідовності, розташованих після числа M: " <<  sum << endl;
}