#include <iostream>

using namespace std;
int main() {
    int N, a, b;
    // N = all number of students
    // a =reminder of last group
    // b = last group
    cout << "Enter the number of students: ";
    cin >> N;
    b = N%50;
    a = 50-b;
    if (b==0) {
        cout << "the number of remaining computers:0" << endl;
    } else {
        cout << "the number of remaining computers:" << a << endl;
    }
    return 0;
}