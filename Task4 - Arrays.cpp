#include <iostream>
using namespace std;

int main() {
    int arr[5];
    cout << "Enter elements: " << endl;
    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }
    cout << "You Entered: " << endl;
    int *p;
    p = arr;
    for (int j = 0; j < 5; j++) {
        cout << *p << endl;
        p++;
    }
    return 0;
}