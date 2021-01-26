#include<iostream>
using namespace std;
int main(){
cout<<"*******************************"<<endl;

cout<<"  Decimal to binary converter  "<<endl;

cout<<"_______________________________"<<endl;
int val,qa,qb,qc,nval,cval,sval,fval;


cout<<"Enter value = ";
cin>>val; 
if (val<=3){
for(int x=1;x<=3;x=x+1){

nval= val%2;
val = val/2;
cout<<nval;

}
}
if (val>3 && val<8){
for(int x=1;x<=3;x=x+1){

nval= val%2;
val = val/2;
cout<<nval;

}


}
if (val>=8){
for(int x=1;x<=4;x=x+1){

nval= val%2;
val = val/2;
cout<<nval;

}

}

}