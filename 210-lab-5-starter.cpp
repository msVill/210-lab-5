#include <iostream>
using namespace std;

int swap(int &, int &); // function prototype.

int main() {
    int x = 5, 
        y = 10;
    cout << "x = " << x << "  | y = " << y << endl;

    cout << "Swapping...\n";
    int sum = swap(x, y);
    cout << "x = " << x << " | y = " << y << endl;
    cout << "sum = " << sum << endl;
    return 0;
}

int swap(int &a, int &b) { // we want to swap the variables using pointers.
    int temp = a;
    a = b;
    b = temp;
    return a + b;
}