#include<iostream>
using namespace std;

int main(){
    cout<<"Enter the number"<<endl;
    int a, b, n=2 ;
    cin>>a;
    while(a>n){
        if(a%n == 0){
            cout<<a<<" is not a prime number";
        }
        else{
            cout<<a<<" is a prime number";
        }
        n++;
    }


    return 0;
}