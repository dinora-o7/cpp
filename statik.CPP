#include<iostream>
#include<cmath>
using namespace std;
class Kino{
private:
string nomi;
string f_nomi;
static int chip_raqam;
public:
void kirit(string  a,string b){    
nomi=a;
f_nomi=b;
}
static void setRaqam(int  c){
chip_raqam=c;
}
void chiqar(){
    cout<<nomi<<":"<<f_nomi<<":"<<chip_raqam << "-kino"<<endl;
}};
int Kino::chip_raqam=1000;
int main (){
int n;
string a,b;
cout<<"n=";
cin>>n;
  for(int i=0; i<n; i++){
    Kino chipta;
    
    cout << "Film nomi:";
    cin >> a;

    cout << "Kino nomi:";
    cin >> b;

    chipta.kirit(a,b);
    Kino::setRaqam(1000+i);

    chipta.chiqar();
  }

return 0;
} //120 