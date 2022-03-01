#include<iostream>
using namespace std;
void print(int *arr,int s,int e){
    for(int i=s;i<=e;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}

bool binarySearch(int *arr,int s,int e,int k){
cout<<endl;
print(arr,s,e);

    if(s>e)
    return false;
    int mid=s+(e-s)/2;
    if(arr[mid]==k)
    return true;
    if(arr[mid]<k)
    {
        return binarySearch(arr,mid+1,e,k);
    }
   else
    {
        return binarySearch(arr,mid-1,s,k);
    }
}
int main(){
    int arr[6]={2,4,6,10,14};
    int size=6;
    int key;
    cin>>key;
    bool ans=binarySearch(arr,0,5,key);
    if(ans)
    cout<<"answer is found :"<<ans<<endl;
    else
    cout<<"answer is not found :"<<ans<<endl;
    return 0;
}
