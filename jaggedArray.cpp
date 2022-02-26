#include<iostream>
using namespace std;
int main(){
int rows;
cout<<"enter the numbers :"<<endl;
cin>>rows;
int *number=new int[rows];
int **arr=new int*[rows];
for(int i=0;i<rows;i++){
    cout<<"Enter no of col's in the rows: "<<i<<" : "<<endl;
    cin>>number[i];
    arr[i]=new int[number[i]];
}
    for(int i=0;i<rows;i++){
        for(int j=0;j<number[i];j++){
      cout<<"Rows"<<i<<"Enter the value :"<<i*number[i]+j<<" :";
      cin>>arr[i][j];
        }
    }
    for(int i=0;i<rows;i++){
        for(int j=0;j<number[i];j++){
      cout<<arr[i][j];
      cout<<"\n";
        }
    }
    return 0;
}
