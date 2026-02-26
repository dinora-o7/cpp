//2-misol
#include <iostream>
#include <vector>
using namespace std;

int main(){
 vector<int>v1;
    v1.push_back(45);
     v1.push_back(74);
      v1.push_back(96);

vector<int>v2; //yangi vektor
  //ko'chirish
  for(int i=0; i<v1.size(); i++){
    v2.push_back(v1[i]);
  }
  //natijani chiqarish
  cout << "Yangi vektor:" <<endl;
  for(int i=0; i<v2.size(); i++){
  cout << v2[i] << " ";
  cout << endl;
  }

return 0;
}
