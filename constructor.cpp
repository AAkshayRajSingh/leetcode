#include<iostream>
using namespace std;
class Hero{
    private:
    int health;
    public:
    Hero(){
        cout<<"simple constructor called"<<endl;
        name=new char[100];
    }
    char *name;
    char level;
    Hero(int health)
    {
        cout<<"this ->"<<this<<endl;
        this->health=health;
    }
    Hero(int health,char level){
        this->health=health;
        this->level=level;
    
    }
//     Hero(Hero &temp){
// char &temp=new char[strlen(temp.name)+1];
// strcpy(ch,temp.name);
// this->name=ch;


//         cout<<"Copy constructor called "<<endl;
//         this->health=temp.health;
//         this->level=temp.level;
//     }
    
    void print(){
        cout<<endl;

        cout<<"[Name "<<this->name<<" , ";

        cout<<"Health "<<this->health<<" , ";

        cout<<"level "<<this->level<<" ,";
        cout<<endl;
    }
    int getHealth(){
       return health;
    }
    char getlevel(){
        return level;
    }
    void setHealth(int h){
        health=h;
    }
    void setLevel(char ch){
        level=ch;
    }
    void setName(char name[]){
        strcpy(this->name,name);
    }
    //Destructor
    ~Hero(){
   cout<<"Destructor bhai"<<endl;
    }
};
int main(){
    Hero a;
    Hero *b=new Hero();
//   Hero hero1;
//   hero1.setHealth(12);
//   hero1.setLevel('S');
//   char name[7]="Akshay";
//   hero1.setName(name);
//    //hero1.print();
//    Hero hero2(hero1);
//   // hero2.print();
//    hero1.name[0]='P';
//    hero1.print();
//    hero2.print();
//    hero1=hero2;
//       //use default copy constructor

//     Hero suresh(70,'C');
//     suresh.print();
//     Hero R(suresh);
//     R.print();
    // Hero ritesh(suresh);
    // ritesh.health=suresh.health;
    // ritesh.level=suresh.level;
    // // cout<<"hi"<<endl;
    //   Hero ramesh(10);
    //   ramesh.print();
    //   //cout<<"addres of ramesh"<<&ramesh<<endl;
    //   Hero *h=new Hero(11);
    //   h->print();
    //   Hero temp(22,'B');
    //   temp.print();
    // // Hero a;
    // a.setLevel('A');
    // a.setHealth(70);
    // cout<<"the level is :"<<a.level<<endl;
    // cout<<"the health is :"<<a.getHealth()<<endl;
    // //dynamically
    // Hero *b =new Hero;
    // b->setLevel('B');
    // b->setHealth(100);
    // cout<<"The level is : "<<(*b).level<<endl;
    // cout<<"The Healt is : "<<(*b).getHealth()<<endl;

// Hero ramesh;
// cout<<"Size of ramesh: "<<sizeof(ramesh)<<endl;
// getter
// cout<<"Ramesh health is : "<<ramesh.getHealth()<<endl;
// setter
// ramesh.setHealth(70);
// ramesh.health=70;
// ramesh.level='A';
// cout<<"health is : "<<ramesh.getHealth()<<endl;
// cout<<"level is : "<<ramesh.level<<endl;

    return 0;
}
