#include <iostream>
#include <vector>
using namespace std;
int main(){
 vector<float>DI,j,t;
 int n,a;
 cout<<"N butun sonini kiriting ";
 cin>>n;
   for(int i=1;i<n;i++){
    cin>>a;
    DI.push_back(a);
    }
    for(int k:DI){
        if(k%2==0)
    j.push_back(k);
    else if(k%2==1)
    t.push_back(k);
     }
   cout<<"Toqlari:"<<endl;
     for(int k:t)
     cout<<k<<" "<<endl;
     cout<<"Juftrlari :"<<endl;
      for(int k:j)
    cout<<k<<" ";
return 0;
}

