#include <iostream>

using namespace std;

int main(){
    int x;
    int G[4] = {0,0,0,0}; 
    int poprzedni[4] = {1, 0, 0, 0};
    bool start[4] = {false, false, false, false};
    cin >> x;
    bool game;
    char input;
    int liczba, gracz = 0;

    if(x>0) game = true;
    else game = false;

    while (game == true) {
        cin >> input;
        if(input == 'P'){
            for (int i =0;i<4;i++){
                cout << G[i] << " ";
            }
        }
        else if (input == 'M'){
            cin >> liczba;
            //sprawdza czy nadaje sie na start
            if (liczba == 6 && poprzedni[gracz] == 1){
                start[gracz] = true;
            }
            //jezeli gracz juz wystartowal
            else if (start[gracz] == true){
                G[gracz] += liczba;
                if (G[gracz] >= x){
                    cout << "gracz " << gracz+1 << " wygral!";
                    game = false;
                }
            }
            //jezeli nie wystartowal i nie nadaje sie 
            else {
                poprzedni[gracz] = liczba;
            }

            //gracz 4 ostatni pozniej znow 1
            if(gracz == 3) gracz = 0;
            else gracz++;
        }
        else cout << "Zly input" << endl;
    }

    return 0;
}