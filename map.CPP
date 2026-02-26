#include<iostream>
#include<map>
using namespace std;
  
  int main(){
    int c=0;
    string javob;
       map <string, string> tarjima;

       tarjima["uy"] = "home";  
       tarjima["sumka"] = "bag";   
       tarjima["velosiped"] = "biki";

   for(auto p:tarjima){

    cout << p.first << "ingiliz tilida kirit:";
        cin >> javob;
          
        if(javob == p.second)
        {
           c+=3;
        }
        else
        {
           c-=1;
        }
   }
   for(auto p:tarjima){
         cout << p.first << "to'g'ri javob:" << p.second << endl;
   }
         cout << "umumiy ball:" << c << endl;
  }