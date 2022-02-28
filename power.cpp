#include<iostream>
using namespace std;
int power(int n){
    if(n==0)
      return 1;
    //Recursive relation
    return 2*power(n-1);
}
int main(){
int n;
cin>>n;
int ans=power(n);
cout<<"power is : "<<ans<<endl;

return 0;
}
