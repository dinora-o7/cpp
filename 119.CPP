#include<iostream>
#include<cmath>
using namespace std;
class Mashina{
private:
string nomi;
string raqami;
static int a_raqam;
static char a_belgi;
public:
void kirit(string  a){    
nomi=a;
raqami=string(1,a_belgi)+to_string(a_raqam) ;  
           a_raqam++;
    if(a_raqam>999){
        a_raqam=100;
        a_belgi++;}
}
void chiqar(){
    cout<<nomi<<"-"<<raqami<<endl;
}};
int Mashina::a_raqam=100;
char Mashina::a_belgi='A';
int main (){
int n;
string nomi;
cout<<"n=";
cin>>n;
Mashina m;
for(int i=0; i<=n;i++){
    cout<<i+1<<"nom:";
    cin>>nomi;
    m.kirit(nomi);
    m.chiqar();
}
return 0;
}
// 119 