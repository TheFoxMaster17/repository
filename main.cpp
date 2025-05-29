#include <iostream>
using namespace std;

int main() {
    unsigned int n;
    int tab[31];
    int i = 0;

    cout << "wpisz liczbe: ";
    cin >> n;

    if (n == 0) {
        cout << 0 << endl;
        return 0;
    }
    while (n != 0) {
        tab[i++] = n % 2;
        n = n / 2;
    }
    cout << "liczba binarnie: ";
    for (int j = i - 1; j >= 0; j--) {
        cout << tab[j];
    }
    cout << endl;

    return 0;
}

