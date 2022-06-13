#include"Gra.h"

int main()
{
    sf::RenderWindow oknoAplikacji;
    oknoAplikacji.create(sf::VideoMode(2000, 2000, 32), "TICTACTOE");
    
        Gra test;
        int siema1, siema2, siema3;
       
       siema1= test.first_screen(oknoAplikacji);
       
       siema2 = test.second_screen(oknoAplikacji);
       
       siema3 = test.third_screen(oknoAplikacji, siema1);

       test.play_game(oknoAplikacji, siema1, siema2, siema3);
       
} 