#include<iostream>
using namespace std;
int main(){
    int arr[]={1,23,4,5,5,3,24,56,3};
    int n= sizeof(arr)/sizeof(int);
    for (int i=0;i<n/2;i++){
        int temp=arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1]=temp;
    }
    cout<<"reversed array is:"<<endl;
    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}