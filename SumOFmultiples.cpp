#include<iostream>
using namespace std;
int main(){
int fir,se,limit,out,suma=0,sumb=0,sumc=0,t;
cout<<"Enter 1st number = ";
cin>>fir;
cout<<"Enter 2nd Number  = ";
cin>>se;
cout<<"Enter Number till find Multiples  = ";
cin>>limit;
cout<<"multiples of 1st numbers are ="<<endl;
for(int r=1; r<=limit ; r=r+1){
out = fir * r; 
cout<<out<<endl;
suma=suma + out;
}
cout<<"Multiples for 2nd number are = "<<endl;
for(int c=1; c<=limit ; c=c+1){
t = se * c; 
cout<<t<<endl;
sumb=sumb + t;}
sumc=suma+sumb;
cout<<"Sum of Multiples = "<<sumc<<endl;
}