#include<iostream>
using namespace std;
class Tub{
    public:
    static bool Hisobla(int s){
        if(s<=1){
            return false;
         } 
        for(int i=2; i*i<s; i++){
    if(s%i==0){
        return false;
        }
    }
        return true;
     }
};
int main(){
    int s;
    cout << "s="; 
    cin >> s;
       if( Tub::Hisobla(s)){
      cout << "tub son";
    }else{
        cout << "tub emas";
    }
    
    return 0;
}
