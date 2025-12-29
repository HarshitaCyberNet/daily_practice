#include<iostream>
#include<string>
using namespace std;
string reverseString(string s){ 
    int start= 0;
    int end = s.length()-1;
    while(start<end){
        swap(s[start], s[end]);
        start++;
        end--;
    }
    return s;
}
bool isPalindrome(string s){
    int start=0, end=s.length()-1;
    while(start<end){
        if(s[start]!=s[end]){
            return false;
        }
        start++;
        end--;
    }
    return true;
}
int countVowels(string s){
    int count=0;
    for(char c:s){
        c=tolower(c);
        if(c=='a'|| c=='e' || c=='i'|| c=='o'|| c=='u')
        count++;
    }
    return count;
}
int main(){
    string input;
    cout<<"enter a string:";
    getline(cin,input);
    cout<<"reversed string:"<<reverseString(input)<<endl;
    if((isPalindrome(input))){
        cout<<"the string is a palindrome"<<endl;
    }
    else{
        cout<<"the string is not a palindrome"<<endl;
    }
    cout<<"number of vowels in the string:"<<countVowels(input)<<endl;
    return 0;
}