#include <ctime>
#include <iostream>
#include <ostream>
#include <random>
#include <bits/locale_classes.h>

int main() {
    int Player_1 = 0 ;
    srand(time(0));
    // Tip: lancer un dé a 6 face autant de fois que tu veux
    // Tip: si tu depasse 20 le jeu est terminé et le score est bloqué
    while (Player_1 <= 20) {
        int score = rand() % 6 + 1;
        std::cout << score << std::endl;
        // Tip: si tu fais 1 tu perds tu reset a 0 et ton tour est terminé
        if (score == 1) {
            Player_1 = 0;
            break;
        }else Player_1 += score;
        std::cout << Player_1 << std::endl;



    }
    return Player_1;
}





