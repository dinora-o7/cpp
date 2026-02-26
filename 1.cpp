#include<iostream>
using namespace std;
int main()
{
 int a,s,c=0;
 cin >> a;
 while (a>0) {
    c++;
    s+=a%10;
     a=a/10;
 }
 cout << s <<" "<< c;
 return 0;
}                                   //  ^
//raqamlari yig'indisi va sonini topish |