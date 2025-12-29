#include<iostream>
using namespace std;
int main(){
    int arr[]= {4,56,23,129,34,98};
    int n = sizeof(arr)/sizeof(arr[0]);
    int max = arr[0];
    for (int i= 1; i<n; i++){
        if(arr[i]>max){
            max = arr[i];
        } 
    }
    cout << "the maximum element in the array is:" << max << endl;
    return 0;
}