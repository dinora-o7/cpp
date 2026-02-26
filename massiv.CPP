#include<iostream>
#include<map>
using namespace std;
  
  int main(){

       map <string, string> tarjima;
       
       tarjima["uy"] = "home";
       tarjima["sumka"] = "bag";
       tarjima["veloseped"] = "biki";

   for(auto p:tarjima){

    cout << p.first << "->" << p.second << endl;
   }

  }