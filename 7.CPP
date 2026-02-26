//7-misol
#
include<iostream>
#include<vector>
using namespace std;

int main()
{
      vector<int>v={2,5,7,5,8,9,0};

         for(int i=0; i<v.size(); i++)       
            {
                if(i%2==0)
                {
                    cout << v[i] <<endl;
                }
            }
      
    return 0;
}