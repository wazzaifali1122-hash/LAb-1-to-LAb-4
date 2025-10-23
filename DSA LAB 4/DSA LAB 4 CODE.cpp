#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of antique items: ";
    cin >> n;

    int serial[100];
    for (int i = 0; i < n; i++) {
        cout << "Enter serial number of item " << i + 1 << ": ";
        cin >> serial[i];
    }

    int search;
    cout << "Enter serial number to find: ";
    cin >> search;

    int found = -1;
    for (int i = 0; i < n; i++) {
        if (serial[i] == search) {
            found = i;
            break;
        }
    }

    if (found != -1)
        cout << "Pocket watch found at position " << found + 1;
    else
        cout << "Pocket watch not found.";
    }

