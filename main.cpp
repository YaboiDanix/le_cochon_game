#include <ctime>
#include <iostream>
#include <ostream>
#include <random>
#include <bits/locale_classes.h>

int main() {
    int Player_1 = 0 ;
    int Player_2 = 0 ;
    // Tip: lancer un dé a 6 face autant de fois que tu veux
    srand(time(0));
    int score = rand() % 6 + 1;
    std::cout << score << std::endl;
    return score;
}



// Tip: si tu fais 1 tu perds tu reset a 0 et ton tour est terminé

// Tip: si tu depasse 20 le jeu est terminé et le score est bloqué

