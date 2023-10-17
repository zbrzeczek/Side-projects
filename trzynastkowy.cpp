#include <iostream>

using namespace std;

class trzynastkowe{
    public:
        string liczbaTrzynastkowa;

        int trzynastkoweToDziesietne(){
            int base = 1;
            int dziesietna = 0;
            int length = liczbaTrzynastkowa.size();

            for (int i = length-1; i>=0; i--){
                if (liczbaTrzynastkowa[i] >= '0' && liczbaTrzynastkowa[i] <= '9'){
                    dziesietna += (liczbaTrzynastkowa[i] - '0') * base;
                }
                else if (liczbaTrzynastkowa[i] == 'A'){
                    dziesietna += 10 * base;
                }
                else if (liczbaTrzynastkowa[i] == 'B'){
                    dziesietna += 11 * base;
                }
                else if (liczbaTrzynastkowa[i] == 'C'){
                    dziesietna += 12 * base; 
                }
                base *= 13;
            }
            return dziesietna;
        }

};

int main(){
    int x;
    string a, b;
    cin >> a >> b;
    trzynastkowe liczba1;
    trzynastkowe liczba2;
    liczba1.liczbaTrzynastkowa = a;
    liczba2.liczbaTrzynastkowa = b;
    cout << liczba1.trzynastkoweToDziesietne() + liczba2.trzynastkoweToDziesietne();
    cin >> x;
    return 0;
}