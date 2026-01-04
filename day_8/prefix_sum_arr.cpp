#include<iostream>
using namespace std;
int main(){
    int arr[]={2,4,6,8,10,12};
    int n= sizeof(arr)/sizeof(int);
    int prefix[n];
    prefix[0]=arr[0];
    for(int i=1;i<n;i++){
        prefix[i]=prefix[i-1]+arr[i];
    }
    int l=1 , r=4;
    int sum= prefix[r]-prefix[l-1];
    cout<<"range sum:"<<sum<<endl;
    return 0;
}