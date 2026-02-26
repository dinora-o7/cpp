//3-misol
#include<iostream>
#include<vector>
using namespace std;

int main()
{
vector<int>v = {1,-3,2,5,-7};

cout << "Manfiy elementlar indekslari: ";

  for(int i=0; i<v.size(); i++)
  {
       if(v[i]<0)

       {
          cout << i <<"; ";
       }
  }
return 0;
}