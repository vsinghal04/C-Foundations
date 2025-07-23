#include<iostream>
using namespace std;
int main(){

    int D,a,b,c;
    cout << "Enter coefficients a, b, c: ";
    cin >> a >> b >> c; 
    D= b*b-4*a*c; //discriminant formula
    cout<< "Discriminant (D) = "<< D << endl;   
    if(D > 0) {
        cout << "Roots are real and different." << endl;
    } else if (D == 0) {
        cout << "Roots are real and the same." << endl;
    } else {
        cout << "Roots are complex and different." << endl;
    }
    return 0;
}