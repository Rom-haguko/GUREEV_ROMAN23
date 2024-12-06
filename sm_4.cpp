#include <iostream>
using namespace  std;



int main()
{
    setlocale(LC_ALL, "ru");
    int len;
    cout << "Введите длину последовательности: ";
    cin >> len;
    if (len <= 0) {
        cout << "Длина последовательности должна быть положительным числом." << endl;
        return 1;
    }
    const int ln = len;
    int* arr = new int[ln];
    int el_arr;
    for (int i = 0;i < ln; i++) {
        cout << "Введите " << i + 1 << " элемент массива: ";
        cin >> el_arr;
        *(arr + i) = el_arr;
    }
    int len_max = 0;
    int len_change = 0;
    for (int i = 0; i < ln; i++) {
        if (*(arr + i) == 0) {
            len_change++;
        }
        else {
            if (len_max < len_change) {
                len_max = len_change;
            }
            len_change = 0;
        }
    }
    cout << "Самая длинная длина подряд идущих нулей: " << len_max << endl;
    delete[]arr;
    return 0;

}
