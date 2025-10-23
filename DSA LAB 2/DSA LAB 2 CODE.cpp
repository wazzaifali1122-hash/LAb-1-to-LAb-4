#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> marksStack;
    int n, value;

    cout << "How many marks do you want to enter? ";
    // Let's assume the user enters 4
    if (!(cin >> n)) return 1; 

    cout << "Enter the marks:\n";
    // Let's assume the user enters: 10, 25, 30, 15
    for (int i = 0; i < n; i++) {
        if (!(cin >> value)) return 1;
        marksStack.push(value);
    }
    // Stack status (bottom to top): [10, 25, 30, 15] 

    int highest = -1;  

    cout << "\nEven values popped from the stack (LIFO):\n";
    // The loop pops: 15, 30, 25, 10
    while (!marksStack.empty()) {
        int topValue = marksStack.top();
        marksStack.pop();

        if (topValue > highest) {
            highest = topValue;
        }

        if (topValue % 2 == 0) {
            cout << topValue << " ";
        }
    }

    cout << "\n\nHighest marks: " << highest << endl;

    return 0;
}

