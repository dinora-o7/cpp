//4-misol
#include<iostream>
#include<vector>
using namespace std;

int main()
{

 vector<int>v = {1,2,3,4,5,6};
  
  cout << "Teskari tartibda : " << endl;

       for(int i=v.size()-1; i>=0; i--)
       {
            cout << v[i] << " " ;
       }
      cout << endl;
vector<int> juft, toq;
       for(int i=0; i<v.size(); i++)
       {
          if(v[i]%2==0)
          {
           juft.push_back(v[i]);
          }
          else
          {
            toq.push_back(v[i]);
          }
       }

cout << "Juft:";
    for(int i=0; i<juft.size(); i++)
    {
        cout << juft[i] << " ";
    }
     cout << endl;
cout << "Toq:";
    for(int i=0; i<toq.size(); i++)
    {
        cout << toq[i] << " ";
    }  

return 0;
}