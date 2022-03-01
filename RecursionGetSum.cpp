#include<iostream>
using namespace std;
int isSum(int *arr,int size){
    if(size==0)
    return 0;
    if(size==1)
    return arr[0];
    else{
        int remainingPart=isSum(arr+1,size-1);
        int sum=arr[0]+remainingPart;
        return sum;
    }
}

int main(){
    int arr[5]={2,3,1,5,6};
    int size=5;
    int ans=isSum(arr,size);
    cout<<"The sum is "<<ans<<endl;

    return 0;
}
