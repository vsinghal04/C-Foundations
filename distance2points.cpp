#include<iostream>
#include<cmath>
using namespace std;
int main(){
    cout<<"Enter two points (x1, y1) and (x2, y2): ";
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    int distance = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
    cout << "Distance between points (" << x1 << ", " << y1 << ") and (" << x2 << ", " << y2 << ") is: " << distance << endl;
}
