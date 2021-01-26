#include<iostream>
using namespace std;
int main(){
 int day, age;
     cout<<"Enter Age = ";
     cin>>age;
     cout<<"Enter day = ";
     cin>> day; 
   if(day==1){
       
       cout<<"The museum is closed."<<endl;
    
    }
   else if((day == 2) || (day == 4)){

        cout<<"You get half price discount!"<<endl;
    
    }
   else if(((age>=13) && (age<=20)) && (day == 3)){

        cout<<"You get half price discount!"<<endl;

    }
   else{
       
        cout<<"You pay full price."<<endl;
 
    }         


}