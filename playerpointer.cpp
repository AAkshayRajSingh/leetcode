#include<iostream>
using namespace std;
int main(){
  /*  int i=5;
    //int *p=&i;
    int *p=0;
    p=&i;
  cout <<p<<endl;
  cout<<*p<<endl;
//cout<<"value is : "<<*p<<endl;
*/
int num=5;
int a=num;
a++;
cout<<num<<endl;
cout<<a<<endl;
int*p=&num;
cout<<"before"<<num<<endl;
(*p)++;
cout<<"after"<<num<<endl;
int *q=p;
cout<<p<<" - "<<q<<endl;
cout<<*p<<" - "<<*q<<endl;
//cout incre
int i=3;
int *t=&œi;
*t=*t+1;
cout<<*t<<endl;
t=t+1;

return 0;
}
