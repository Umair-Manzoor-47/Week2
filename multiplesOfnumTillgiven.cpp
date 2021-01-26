#include<iostream>
using namespace std;
int main(){
int fir,se,limit,out;
cout<<"Enter 1st number to find Multiples = ";
cin>>fir;
cout<<"Enter 2nd Number to find Multiples  = ";
cin>>se;
cout<<"Enter Number till find Multiples  = ";
cin>>limit;
cout<<"multiples of 1st numbers are ="<<endl;
for(int r=1; r<=limit ; r=r+1){
out = fir * r; 
cout<<out<<endl;
}
cout<<"multiples of 2nd numbers are ="<<endl;
for(int r=1; r<=limit ; r=r+1){
out = se * r; 
cout<<out<<endl;
 }
}