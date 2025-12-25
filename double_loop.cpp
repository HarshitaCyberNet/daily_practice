#include<iostream>
using namespace std;
int main() {
    int n= 10;
    int count= 0;
    for ( int i=0; i<n; i++){
        for ( int j=0; j<n; j++){
            count++;
            cout<<"hello world! "<<i<<"Welcome to my world!"<<j<<endl;
        }
    }
    cout<<"the value of count is:"<< count << endl;
    return 0;
}