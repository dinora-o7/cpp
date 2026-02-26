#include <iostream>
using namespace std;

class Oquvchi {
private:
    static int sinf;      // statik a'zo
    double baho[11];      // 11 yil uchun baholar

public:
    // Konstruktor
    Oquvchi(int s, double b[]) {
        sinf = s;
        for (int i = 0; i < 11; i++) {
            baho[i] = b[i];
        }
    }

    // Har yilgi baholarni chiqarish
    void yillikBaholar() {
        for (int i = 0; i < 11; i++) {
            cout << i + 1 << "-yil: " << baho[i] << " ball" << endl;
        }
    }

    // Umumiy o'rtacha bahoni hisoblash
    double umumiyOrtacha() {
        double sum = 0;
        for (int i = 0; i < 11; i++) {
            sum += baho[i];
        }
        return sum / 11;
    }

    // Sinfni chiqarish
    static void sinfniChiqar() {
        cout << "O'quv sinfi: " << sinf << endl;
    }
};

// static a'zoni aniqlash
int Oquvchi::sinf;

int main() {
    double baholar[11];

    cout << "11 yil uchun o'rtacha baholarni kiriting:\n";
    for (int i = 0; i < 11; i++) {
        cout << i + 1 << "-yil: ";
        cin >> baholar[i];
    }

    Oquvchi o1(9, baholar);   // masalan, 9-sinf

    Oquvchi::sinfniChiqar();
    o1.yillikBaholar();

    cout << "Umumiy o'rtacha baho: "
         << o1.umumiyOrtacha() << endl;

    return 0;
}