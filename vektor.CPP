//1-misol
#include <iostream>
#include <vector>
using namespace std;

int main(){

    

     vector<int>a;

  a.push_back(45);
   a.push_back(74);
    a.push_back(96);
     a.push_back(14);
      a.push_back(83);

for(int i=0; i<a.size(); i++){
    cout << a[i] << " ";
    cout << endl;
}
return 0;
}
