#include <iostream>
using namespace std;
int main(){
    int arr[]= {3,54,6,32,54,64,9};
    int n= sizeof(arr)/sizeof(arr[0]);
    int target;
    cout<<"enter the element to be searched:";
    cin>>target;
    bool found= false;
    for(int i=0; i<n; i++){
        if(arr[i]==target){
            found= true;
            cout<<"element found at index:"<< i <<" "<<endl;
            break;
        }
    } if(found==true){
        cout<<"element is found"<<endl;
    }
    else{
        cout<<"element not found"<<endl;
    }
}
