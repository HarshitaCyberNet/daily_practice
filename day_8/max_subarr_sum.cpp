#include<iostream>
using namespace std;
int main(){
    int arr[]={-2,1,-3,4,-1,2};
    int n=6;
    int maxSum= arr[0];
    for(int i=0; i<n;i++){
        int currSum=0;
        for(int j=i; j<n; j++){
            currSum += arr[j];
            maxSum= max(maxSum, currSum);
        }
    }
    cout<<"maximum subarray sum is:"<<maxSum<<endl;
    return 0;
}