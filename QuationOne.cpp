#include <iostream>

using namespace std;

int main() {
    int sum = 0;
    int n, m, end;
    int start = 0;
    cout << "Введите размер последовательности:" << endl;
    cin >> n;
    cout << "Введите число с каторым будет сравнивать:" << endl;
    cin >> m;
    cout << "Введите максимальное число с каторым будет сравнивать число: " << m << endl;
    cin >> end;
    for (int i = 1; i <= n; i++) {
        int randomArray = rand() % (end - start) + start;
        cout << randomArray << endl;
        if (randomArray >= m) {
            sum = sum + randomArray;
        }
    }
    cout << "Сумма чисел которые больше чем ваше число для сравнения:" << endl << sum;
}