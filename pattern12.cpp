#include <iostream>
using namespace std;

int main() {
    int start, rows;
    
    cout << "Enter the starting number: ";
    cin >> start;
    
    cout << "Enter the number of rows: ";
    cin >> rows;

    for (int i = 0; i < rows; i++) {
        int num = start + i;
        for (int j = 0; j <= i; j++) {
            cout << num;
        }
        cout << endl;
    }

    return 0;
}

Output:
    4
    55
    666
    7777
    88888
    999999
