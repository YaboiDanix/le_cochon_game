#include <ctime>
#include <iostream>
#include <ostream>
#include <random>
#include <bits/locale_classes.h>
using namespace std;
int main() {
    int Player_1 = 0 ;
    int Player_2 = 0 ;
    srand(time(0));
    // Tip: lancer un dé a 6 face autant de fois que tu veux
    for (int Player_1, Player_2 = 0 ;Player_1 < 20 || Player_2 < 20; Player_1 + 0 and Player_2 + 0) {
        // Tip: si tu depasse 20 le jeu est terminé et le score est bloqué
        while (Player_1 < 20) {
            int score = rand() % 6 + 1;
            cout << score << endl;
            // Tip: si tu fais 1 tu perds tu reset a 0 et ton tour est terminé
            if (score == 1) {
                Player_1 = 0;
                break;
            }else Player_1 += score;
            string answer = to_string(Player_1);
            cout << Player_1 << endl;
            do {
                cout << "do you want to play again Player 1?  [Y/N]: ";
                getline(cin, answer);
            }while (answer != "yes" && answer != "no");
            if (answer == "no") {
                break;
            }
            cout << Player_1 << endl;
        }

        while (Player_2 < 20) {
            cout << Player_2 << endl;
            int score = rand() % 6 + 1;
            cout << score << endl;
            if (score == 1) {
                Player_2 = 0;
                break;
            }else Player_2 += score;
            string answer = to_string(Player_2);
            cout << Player_2 << endl;
            do {
                cout << "do you want to play again Player 2? [Y/N]: ";
                getline(cin, answer);
            }while (answer != "yes" && answer != "no");
            if (answer == "no") {
                break;
            }

        }
        return Player_1 and Player_2;
    }
}




