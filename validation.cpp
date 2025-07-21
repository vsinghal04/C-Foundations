#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter a and b: ";
    cin>>a>>b;
    if(b==0){
        cout<<"Division by zero. Not defined";
    }
    else{
        c=a/b;
        cout<<"Division ans= "<<c;
    }

}
