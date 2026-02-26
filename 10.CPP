//10-misol
#include<iostream>
#include<vector>
using namespace std;

int main()
{
 vector<int>v={-1,2,3,-4,5,-6,-7,8,9};
 vector<int>musbat,manfiy;
 
     for(int i=0; i<v.size(); i++)
         {
            if(v[i]>0)
            {
                musbat.push_back(v[i]);
            }
            else
            {
                manfiy.push_back(v[i]);
            }
         }

        cout << "Musbat:";
     for(int i=0; i<musbat.size(); i++)
        {
            cout << musbat[i] <<" ";
        }
        cout << endl;

        cout << "Mafiy:";
     for(int i=0; i<manfiy.size(); i++)  
        {
            cout << manfiy[i];
        }


    return 0;
}