#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int main() 
{
   int guess01, guess02, guess03, guess04, guess05;
   srand(time(0));    
   int number = (rand() % 100) + 1;
   cout << number << endl; 
   cout << " Guess the number -> ";
   cin>> guess01;
   if(guess01==number){
       cout<< " ----------------You Won!---------------";
   }
   if(guess01 >= (number + 10)){
       cout << " NUMBER is Lower! "<<endl; 
   }
  if(guess01 <= (number - 10)){
       cout << " NUMBER is Higher! "<<endl; 
   }
  if(guess01 >= (number + 4) && guess01 < (number + 10)){
       cout << "Your're close NUMBER is a little bit Lower! "<<endl; 
   }
  if(guess01 <= (number - 4) && guess01 > (number - 10)){
       cout << "Your're close NUMBER is a little bit Higher! "<<endl; 
   }
  if(guess01 != number){
      cout << " Make second Guess -> "<<endl;
      cin >> guess02;
        if(guess02 >= (number + 10)){
            cout << " NUMBER is Lower! "<<endl; 
        }
        if(guess02 <= (number - 10)){
            cout << " NUMBER is Higher! "<<endl; 
        }
        if(guess02 >= (number + 4) && guess02 < (number + 10)){
            cout << "Your're close NUMBER is a little bit Lower! "<<endl; 
        }
        if(guess02 <= (number - 4) && guess02 > (number - 10)){
            cout << "Your're close NUMBER is a little bit Higher! "<<endl; 
        }
        if(guess02==number){
            cout<< " ----------------You Won!----------------";
        }
    }
     if((guess01 != number) && (guess02 != number)){
      cout << " Make third Guess -> "<<endl;
      cin >> guess03;
        if(guess03 >= (number + 10)){
            cout << " NUMBER is Lower! "<<endl; 
        }
        if(guess03 <= (number - 10)){
            cout << " NUMBER is Higher! " <<endl; 
        }
        if(guess03 >= (number + 4) && guess03 < (number + 10)){
            cout << "Your're close NUMBER is a little bit Lower! "<<endl; 
        }
        if(guess03 <= (number - 4) && guess03 > (number - 10)){
            cout << "Your're close NUMBER is a little bit Higher! "<<endl; 
        }
        if(guess03==number){
            cout<< " ----------------You Won!----------------";
        }
    }
    if((guess01 != number) && (guess02 != number) && (guess03 != number)){
      cout << " Make fourth Guess -> ";
      cin >> guess04;
        if(guess04 >= (number + 10)){
            cout << " NUMBER is Lower! "<<endl; 
        }
        if(guess04 <= (number - 10)){
            cout << " NUMBER is Higher! "<<endl; 
        }
        if(guess04 >= (number + 4) && guess04 < (number + 10)){
            cout << "Your're close NUMBER is a little bit Lower! "<<endl; 
        }
        if(guess04 <= (number - 4) && guess04 > (number - 10)){
            cout << "Your're close NUMBER is a little bit Higher! "<<endl; 
        }
        if(guess04==number){
            cout<< " ----------------You Won!----------------"<<endl;
        }
    }
    if((guess01 != number) && (guess02 != number) && (guess03 != number) && (guess04 != number)){
      cout << " Make Last Guess -> ";
      cin >> guess05;
        if(guess05==number){
            cout<< " ----------------You Won!----------------"<<endl;
        }
        else{
            cout << "------YOU LOST----------";
        }
    }


}