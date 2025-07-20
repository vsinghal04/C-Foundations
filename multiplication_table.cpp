#include<iostream>
using namespace std;
int main(){
  int n,i,a;
  cout<<"Enter the table of:";
  cin>>n;
  for(i=1;i<11;i++){
    a=n*i;
    cout<<n<<" X "<<i<<" = "<<a<<endl;
  }
  return 0;
}
