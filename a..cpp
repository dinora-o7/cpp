

#include<iostream>
using namespace std;
class  Book{
  private:
  string Nomi;
  string Yozuvchi;
  int Narxi;
  int Yili;

  public:
  Book(){
    Nomi=" ";
    Yozuvchi=" ";
    Narxi=0;
    Yili=0;
  }
  Book(string a, string b, int c ,int d){
     Nomi =a;
     Yozuvchi=b;
     Narxi=c;
     Yili=d;
  }
  void setKirit(string a, string b, int c, int d){
    Nomi=a;
    Yozuvchi=b;
    Narxi=c;
    Yili=d;
  }
void getChiqar(){
  cout<<"Nomi:"<<Nomi<<endl;
  cout<<"Yozuvchi:"<<Yozuvchi<<endl;
  cout<<"Narxi:"<<Narxi<<endl;
  cout<<"Yili:"<<Yili<<endl;
  if(Yili>=1900 && Yili<2000){
    cout<<"XX asr"<<endl;
  }
else if(Yili>=2000 && Yili<2100){
cout<<"XXI asr"<<endl;
}
else if(Yili<1900){
  cout<<"Eski kitob"<<endl;
}
else if(Yili>2000){
  cout<<"Kelajakdagi kitob"<<endl;
}
else {
  cout<<"Bunday yil ymavjud emas"<<endl;
}
}

~Book(){
  cout<<"Destruktor chaqirildi"<<endl;
}
};

int main(){
string a,b;
int c,d;
cout<<"Nomi:";getline(cin,a);
cout<<"Yozuvchisi:";getline(cin,b);
cout<<"Narxi:"; cin>>c;
cout<<"Yili:"; cin>>d;
cout<<endl;

Book obyekt(a,b,c,d);
obyekt.getChiqar();
  
return 0;
}