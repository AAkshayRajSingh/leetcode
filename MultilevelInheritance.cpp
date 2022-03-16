#include<iostream>
using namespace std;
class Animal{
    public:
    int age;
    int weight;

    public:
    void speak(){
        cout<<"Speaking"<<endl;
    }
};
class Dog:public Animal{

};
class Lab:public Dog{


};

int main(){
   Lab l;
   l.speak();
    return 0;
}
