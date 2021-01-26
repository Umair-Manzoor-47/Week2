#include<iostream>
using namespace std;
int main(){
cout<<"****************************************"<<endl;
cout<<"		Fibonacci Sequence             "<<endl;
cout<<"________________________________________"<<endl;
int num,numa,numb,next,suma,sumb=0,sumc=0;
cout<<"Enter 1st number = ";
cin>>num;
cout<<"Enter 2nd number = ";
cin>>numa;

for(int x=num;x<=15;x=x+1){
int sum=num+numa;
 num=numa;
numa=sum;
cout<<sum<<endl;
 
}