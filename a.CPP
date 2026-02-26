//113-misol
#include<iostream>
#include<string>
using namespace std;
class Xodim{
private:
string nomi;
static int bosqich;
public:
void kirit(string n){    
nomi=n;

}
static void setBosqich(int b){
    bosqich=b;
}
void chiqar(){
    cout<<nomi<<"\t\t"<<bosqich<<endl;
}
};
int Xodim::bosqich=0;
int main (){
int b,m;
string n;
cout<<"m=";
cin>>m;
Xodim xodimlar[100];
for(int i=0; i<m;i++){
    cout<<i+1<<"- nomi: ";
    cin>>n;
cout<<1+i<<"-bosqichi:";
cin>>b;
Xodim::setBosqich(b);
 xodimlar[i].kirit(n);
}
cout<<"nomi:"<<"\t\t"<<"bosqich:"<<endl;
for(int i=0;i<m;i++){
    xodimlar[i].chiqar();
}
return 0;
}