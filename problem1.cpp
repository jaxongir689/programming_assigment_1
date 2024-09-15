#include <iostream>

using namespace std;
int main() {
    int a, b, c;
    cout << "a: ";
    cin >> a;
    cout << "b: ";
    cin >> b;
    cout << "c: ";
    cin >> c;

    cout << (a-b-c) << endl;
    cout << (b*c-a) << endl;
    cout << (2*b-c+5*a) << endl;
    return 0;
}