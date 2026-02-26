#include<iostream>
using namespace std;
class Unversitet
{
private:
     string nomi;
     string joyi;
     int yili;
     int talabalar;

     public:
        void setNomi(string nomi)
        {
            this->nomi = nomi;
        }
        string getNomi()
        {
            return nomi;
        }
        
        void setJoyi(string joyi)
        {
            this->joyi = joyi;
        }

        string getJoyi()
        {
            return joyi;
        }

        void setYili(int yili)
        {
                this->yili = yili;
        }
        
        int getYili()
        {
            return yili;
        }

        void setTalabalar(int talabalar)
        {
            this->talabalar = talabalar;
        }

        int getTalabalar()
        {
            return talabalar;
        }

void chiqar()
 {