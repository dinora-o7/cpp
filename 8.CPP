//8-misol
#include<iostream>
#include<vector>
using namespace std;

int main()
{
    double yigindi=0,ortacha;


    vector<int>v={2,3,4,5,6,9,7,8};
         
         for(int i=0; i<v.size(); i++)
           {
                 yigindi+=v[i];
           }
      ortacha=yigindi/v.size();

      for(int i=0; i<v.size(); i++)
           {
               if(v[i]>ortacha)
               {
                cout << v[i] <<" ";
               }
           }


    return 0;
}