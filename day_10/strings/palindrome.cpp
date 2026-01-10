#include<iostream>
using namespace std;
int main(){
    string s = "madam";
    bool isPalindrome =true;
    int n =s.length();
    for(int i=0; i<n/2; i++){
        if(s[i]!=s[s.length()-1-i]){
            isPalindrome =false;
            cout<<"Not a palindrome"<<endl;
            break;
        }
    }
    if(isPalindrome)
    cout<<"palindrome";
    else
    cout<<"not a palindrome ";
    return 0;
}