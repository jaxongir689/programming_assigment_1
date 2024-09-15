#include <iostream>

using namespace std;
int main() {
    double x, y, a;;
    cout << "Sardor's heigh in cm: ";
    cin >> x;
    cout  << "Mike's heigh in ft: ";
    cin >> y;
    a = y*30.48;
    cout << (a>x);
    return 0;
}