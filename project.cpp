#include <iostream>

using namespace std;

class zespolona{
    private:
        int im;
        int re;

    public:
        zespolona(int im1, int re1){ 
            im = im1; 
            re = re1;
        }

        zespolona addIm(zespolona &zespolona2) {
            return zespolona(im + zespolona2.im, re + zespolona2.re);
        }

        void display(){
            cout << re << "+" << im << "i";
        }
};

int main(){
    int x, re1, re2, im1, im2;

    cout << "podaj czesc rzeczywista liczby 1" << endl;
    cin >> re1;
    cout << "podaj czesc rzeczywista liczby 2" << endl;
    cin >> re2;
    cout << "podaj czesc zespolona liczby 1" << endl;
    cin >> im1;
    cout << "podaj czesc zespolona liczby 2" << endl;
    cin >> im2;


    zespolona zes1(im1, re1);
    zespolona zes2(im2, re2);
    zespolona zes3 = zes1.addIm(zes2);
    zes3.display();
    cin >> x;
    return 0;
}