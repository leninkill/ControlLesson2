#include <iostream>

using namespace std;

void changeLetter(char *arr, int length) {
    char start_letter, end_letter;
    cout << "Какую букву вы хотите поменять?" << endl;
    cin >> start_letter;
    cout << "На какую букву вы хотите поменять?" << endl;
    cin >> end_letter;
    for (int i = 0; i < length; i++) {
        if (arr[i] == start_letter) {
            arr[i] = end_letter;
        }
        cout << arr[i];
    }
}

void reverseArray (char *arr, int length) {
    for (int i = length - 1; i >= 0; i--) {
        cout << arr[i];
    }

    cout << endl;
}

int main() {
    system("chcp 1251>nul");

    const int SIZE = 80;

    char buffer[SIZE];
    for (int i = 0; i < SIZE; i++)
        buffer[i] = NULL;

    cout << "Введите строку: ";

    cin.get(buffer, SIZE);
    changeLetter(buffer, SIZE);

    cout << endl;

    reverseArray(buffer, SIZE);

    return 0;
}