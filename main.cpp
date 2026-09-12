#include <ctime>
#include <iostream>
#include <ostream>
#include <random>
#include <bits/locale_classes.h>
using namespace std;
int main() {
    int Player_1 = 0 ;
    srand(time(0));
    // Tip: lancer un dé a 6 face autant de fois que tu veux
    // Tip: si tu depasse 20 le jeu est terminé et le score est bloqué
    while (Player_1 <= 19) {
        int score = rand() % 6 + 1;
        cout << score << endl;
        // Tip: si tu fais 1 tu perds tu reset a 0 et ton tour est terminé
        if (score == 1) {
            Player_1 = 0;
            break;
        }else Player_1 += score;
        string answer = to_string(Player_1);
        do {
            cout << "do you want to play again? [Y/N]: ";
            getline(cin, answer);
        }while (answer != "yes" && answer != "no");
        if (answer == "no") {
            break;
        }


        cout << Player_1 << endl;



    }
    return Player_1;
}





