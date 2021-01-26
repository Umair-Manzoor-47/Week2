#include<iostream>
using namespace std;
int main(){
cout<<"enter your number ->";
int number;
cin>>number;
int factorial=1;
    for(int i=1 ; i<=number; i++){
        factorial=factorial*i;
        cout<<factorial<<endl;
    }
}