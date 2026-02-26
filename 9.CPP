//9-misol
#include<iostream>
#include<vector>
using namespace std;

int main()
{
       int x=4;
    vector<int>v={2,3,4,5,6,9,7,8};
        
        for(int i=0; i<v.size(); i++)
           {
               if(v[i]==x)
             {
               cout << i << endl;
             } 
           }
           
    return 0;
}