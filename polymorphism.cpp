#include<iostream>
using namespace std;
class A{
  public:
  void sayHello(){
      cout<<"Hello Akshay"<<endl;
  }

  int sayHello(int n){
      cout<<"Hello Akshay"<<endl;
      return n;
  }
  void sayHello(string name){
      cout<<"Hello Akshay"<<name <<endl;
  }
};
class B{
    public:
    int a;
    int b;
    public:
    int add(){
        return a+b;
    }
    void operator+ (B &obj){
        int value1=this->a;
        int value2=obj.a;
        cout<<"output"<<value2-value1<<endl;
    }
    void operator() (){
        cout<<"Main bracket hoon"<< this->  a<<endl;
    }
};
class Animal{
    public:
    void speak(){
        cout<<"Speaking"<<endl;
    }
};
class Dog:public Animal{
    public:
    void speak(){
        cout<<"Barking"<<endl;
    }
};
int main(){
Dog obj;
obj.speak();



// B obj1,obj2;
// obj1.a=4;
// obj2.a=7;
// obj1+obj2;
// obj1();
//obj.sayHello();
return 0;
}
