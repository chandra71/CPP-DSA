#include <iostream>
using namespace std;

void printName(int i, int n) {
    if (i > n)  // Base condition to stop recursion
        return;
    
    cout << "Chandu" << endl;
    printName(i + 1, n);  // Recursive call with incremented i
}

int main() {
    int n;
    cin >> n;  // Taking input for how many times to print
    printName(1, n);  // Calling the function with i = 1
    return 0;
}
