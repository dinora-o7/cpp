
//6-misol
#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int>v={3,6,9,2};
      for(int i=0; i<v.size(); i++)
      {
        v[i]--;
      }
    
      for(int i=0; i<v.size(); i++)
      {
        cout << v[i] << " ";
      }
      
    return 0;
}