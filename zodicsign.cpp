#include<iostream>
using namespace std;
int main(){
int days,month;
    cout<<"enter your day of birth ->";
    cin>>days;
    cout<<"enter your month of birth ->"<<endl;
    cin>>month;
    if(((days>=22) && (month==12)) ||  ((days<=20) && (month==1))){cout<<"capricon"<<endl;}
    if(((days>=21) && (month==1))  ||  ((days<=19) && (month==2))){cout<<"aquarius"<<endl;}
    if(((days>=20) && (month==2))  ||  ((days<=20) && (month==3))){cout<<"pisces"<<endl;}
    if(((days>=21) && (month==3))  ||  ((days<=20) && (month==4))){cout<<"aries"<<endl;}
    if(((days>=20) && (month==4))  ||  ((days<=20) && (month==5))){cout<<"taurus"<<endl;}
    if(((days>=23) && (month==5))  ||  ((days<=21) && (month==6))){cout<<"gemini"<<endl;}
    if(((days>=22) && (month==6))  ||  ((days<=23) && (month==7))){cout<<"cancer"<<endl;}
    if(((days>=24) && (month==7))  ||  ((days<=23) && (month==8))){cout<<"leo"<<endl;}
    if(((days>=24) && (month==8))  ||  ((days<=22) && (month==9))){cout<<"virgo"<<endl;}
    if(((days>=23) && (month==9))  ||  ((days<=22) && (month==10))){cout<<"libra"<<endl;}
    if(((days>=23) && (month==10)) ||  ((days<=22) && (month==11))){cout<<"scorpio"<<endl;}
    if(((days>=23) && (month==11)) ||  ((days<=20) && (month==12))){cout<<"sagitanus"<<endl;}
    return 0;
    }