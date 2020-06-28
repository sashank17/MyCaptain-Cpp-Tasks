#include <iostream>

using namespace std;

bool prime(int x) {
    int c = 0;
    for (int i = 2; i < x; i++) {
        if ((x % i) == 0)
            c++;
    }
    return c == 0;
}

int sum(int x) {
    for (int i = 2; i < x-1; i++) {
        for (int j = i; j < x; j++) {
            if(i+j == x) {
                if(prime(i) && prime(j))
                    cout << x << " = " << i << " + " << j << endl;
            }
        }
    }

    return 0;
}


int main() {
    int n;
    cout << "Enter a positive integer: " << endl;
    cin >> n;
    sum(n);

    return 0;
}