#include<iostream>
using namespace std;
class A{
    public:
    void func(){
        cout<<"Iam A"<<endl;
    }
};
class B{
    public:
    void func(){
        cout<<"Iam B"<<endl;
    }
};
class C:public A,public B{
   
};

int main(){
  C obj;
  obj.B::func();

    return 0;
}
