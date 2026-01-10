#include<iostream>
using namespace std;
int main(){
    string s = "wartraining";
    int n = s.length();
    for (int i=0; i<n/2; i++){
        swap(s[i], s[n-1-i]);
    }
    cout<< "reversed string:"<< s << endl;
    return 0;
}