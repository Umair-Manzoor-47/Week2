#include<iostream>
using namespace std;
int main(){
int number;
cout << "Enter number to find table of it till 10 ->";
cin>>number;
   for(int i=1 ; i<=10; i++){
       cout<<number<<"*"<<i<<"="<<number*i<<endl;
   }
}