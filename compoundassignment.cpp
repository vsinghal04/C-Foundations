#include<iostream>
using namespace std;
int main(){
    int a, b;
    cout<< "Enter two integers: ";
    cin >> a >> b;
    cout << "Initial values: a = " << a << ", b = " << b << endl;

    // Compound assignment operators
    a += b; // equivalent to a = a + b
    cout << "After a += b: a = " << a << endl;

    a -= b; // equivalent to a = a - b
    cout << "After a -= b: a = " << a << endl;

    a *= b; // equivalent to a = a * b
    cout << "After a *= b: a = " << a << endl;

    a /= b; // equivalent to a = a / b
    cout << "After a /= b: a = " << a << endl;

    return 0;
}       