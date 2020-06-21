#include <iostream>
using namespace std;

int main(){
    int age;
    string name;
    string ind;
    cout << "Enter your name" << endl;
    cin >> name;
    cout << "Are you an indian citizen? (yes/no)" << endl;
    cin >> ind;
    if (ind == "yes") {
        cout << "Being an Indian Citizen you are eligible to vote" << endl;
        cout << "Enter your age" << endl;
        cin >> age;
        if (age >= 18)
            cout << "Congo! you can vote" << endl;
        else {
            cout << "Sorry, you are underage and cannot vote" << endl;
            cout << "Wait for " << (18-age) << " years to vote" << endl;
        }
    }
    else
        cout << "You are not eligible to vote" << endl;
}