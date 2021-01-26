#include<iostream>
using namespace std;
int main(){
int val,nval,sval=0;

cout<<"Enter 1st number = ";
cin>>val;
cout<<"Enter number of multiples = ";
cin>>nval;
if(val %2==0){
     for(int x=val;x<=nval;x=x+2){
          sval=x+sval;
    }

    cout<<"Sum is = "<<sval; 
   }

  else{cout<<"It is odd"<<endl;

   }
}