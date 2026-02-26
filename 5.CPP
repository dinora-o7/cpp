//5-misol
#include<iostream>
#include<vector>
using namespace std;

int main()
{
  vector<int>v1={1,2,3};
  vector<int>v2={4,5,6,7};

      for(int i=0; i<v2.size(); i++)
      {
        v1.push_back(v2[i]);
      }

cout << "Birlashtirilgan viktor:";
      for(int i=0; i<v1.size(); i++)
      {
       cout << v1[i] <<" ";
      }
      
    return 0;
}