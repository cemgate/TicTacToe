#pragma once
#include "Gra.h"


int Gra::first_screen(sf::RenderWindow& oknoAplikacji)
{
	int maps=0;
    sf::Event reaction;

    sf::Texture  tbutton3, tbutton4, tbutton5, tbutton6, tbutton7, tbutton8, tbutton9, tbutton10, tfirst_screen;

    tbutton3.loadFromFile("b3.png");
    tbutton4.loadFromFile("b4.png");
    tbutton5.loadFromFile("b5.png");
    tbutton6.loadFromFile("b6.png");
    tbutton7.loadFromFile("b7.png");
    tbutton8.loadFromFile("b8.png");
    tbutton9.loadFromFile("b9.png");
    tbutton10.loadFromFile("b10.png");
    tfirst_screen.loadFromFile("poziom.png");

    sf::Sprite button3, button4, button5, button6, button7, button8, button9, button10, first_screen;
	
    button3.setTexture(tbutton3);
    button4.setTexture(tbutton4);
    button5.setTexture(tbutton5);
    button6.setTexture(tbutton6);
    button7.setTexture(tbutton7);
    button8.setTexture(tbutton8);
    button9.setTexture(tbutton9);
    button10.setTexture(tbutton10);
    first_screen.setTexture(tfirst_screen);

   

    while (oknoAplikacji.isOpen())
    {
        oknoAplikacji.clear(sf::Color::White);

        
       

        int Mx = sf::Mouse::getPosition(oknoAplikacji).x;
        int My = sf::Mouse::getPosition(oknoAplikacji).y;

        button3.setPosition(679, 420);
        button4.setPosition(679, 420 + 125 + 25);
        button5.setPosition(679, 420 + 250 + 50);
        button6.setPosition(679, 420 + 375 + 75);
        button7.setPosition(679, 420 + 500 + 100);
        button8.setPosition(679, 420 + 625 + 125);
        button9.setPosition(679, 420 + 750 + 150);
        button10.setPosition(679, 420 + 875 + 175);

        oknoAplikacji.draw(first_screen);
        oknoAplikacji.draw(button3);
        oknoAplikacji.draw(button4);
        oknoAplikacji.draw(button5);
        oknoAplikacji.draw(button6);
        oknoAplikacji.draw(button7);
        oknoAplikacji.draw(button8);
        oknoAplikacji.draw(button9);
        oknoAplikacji.draw(button10);
        oknoAplikacji.display();

        while (oknoAplikacji.pollEvent(reaction))
        {
            if (reaction.type == sf::Event::Closed)
                oknoAplikacji.close();

            if (reaction.type == sf::Event::KeyPressed && reaction.key.code == sf::Keyboard::Escape)
                oknoAplikacji.close();

            if (reaction.type == sf::Event::MouseButtonPressed && reaction.mouseButton.button == sf::Mouse::Middle)
                oknoAplikacji.close();



            if (reaction.type == sf::Event::MouseButtonPressed && reaction.mouseButton.button == sf::Mouse::Left && Mx > 679 && Mx < 679 + 642 && My >420 && My < 420 + 116)
            {
                
                maps = 3;
                goto here;

            }
            if (reaction.type == sf::Event::MouseButtonPressed && reaction.mouseButton.button == sf::Mouse::Left && Mx > 679 && Mx < 679 + 642 && My > 420 + 125 + 25 && My < 420 + 125 + 25 + 116)
            {
                
                maps = 4;
                goto here;

            }
            if (reaction.type == sf::Event::MouseButtonPressed && reaction.mouseButton.button == sf::Mouse::Left && Mx > 679 && Mx < 679 + 642 && My >420 + 250 + 50 && My < 420 + 250 + 50 + 116)
            {
                
                maps = 5;
                goto here;

            }
            if (reaction.type == sf::Event::MouseButtonPressed && reaction.mouseButton.button == sf::Mouse::Left && Mx > 679 && Mx < 679 + 642 && My >420 + 375 + 75 && My < 420 + 375 + 75 + 116)
            {
                
                maps = 6;
                goto here;

            }
            if (reaction.type == sf::Event::MouseButtonPressed && reaction.mouseButton.button == sf::Mouse::Left && Mx > 679 && Mx < 679 + 642 && My >420 + 500 + 100 && My < 420 + 500 + 100 + 116)
            {
                
                maps = 7;
                goto here;

            }
            if (reaction.type == sf::Event::MouseButtonPressed && reaction.mouseButton.button == sf::Mouse::Left && Mx > 679 && Mx < 679 + 642 && My > 420 + 625 + 125 && My < 420 + 625 + 125 + 116)
            {
               
                maps = 8;
                goto here;

            }

            if (reaction.type == sf::Event::MouseButtonPressed && reaction.mouseButton.button == sf::Mouse::Left && Mx > 679 && Mx < 679 + 642 && My > 420 + 750 + 150 && My < 420 + 750 + 150 + 116)
            {
                maps = 9;
                goto here;

            }

            if (reaction.type == sf::Event::MouseButtonPressed && reaction.mouseButton.button == sf::Mouse::Left && Mx > 679 && Mx < 679 + 642 && My > 420 + 875 + 175 && My < 420 + 875 + 175 + 116)
            {
                maps = 10;
                goto here;

            }
        }
    }



    here:
    return maps;
}

bool Gra::second_screen(sf::RenderWindow& oknoAplikacji)

{
    int who_start = 0;
    sf::Event reaction;

    sf::Texture  tcomputer, tyou, tturn;

    tcomputer.loadFromFile("bcomputer.png");
    tyou.loadFromFile("byou.png");
    tturn.loadFromFile("turn.png");
   

    sf::Sprite  computer, you, turn;

    computer.setTexture(tcomputer);
    you.setTexture(tyou);
    turn.setTexture(tturn);

    while (oknoAplikacji.isOpen())
    {
        oknoAplikacji.clear(sf::Color::White);




        int Mx = sf::Mouse::getPosition(oknoAplikacji).x;
        int My = sf::Mouse::getPosition(oknoAplikacji).y;

        computer.setPosition(679, 620);
        you.setPosition(679, 1220);
     

        oknoAplikacji.draw(turn);
        oknoAplikacji.draw(computer);
        oknoAplikacji.draw(you);
        
        oknoAplikacji.display();

        while (oknoAplikacji.pollEvent(reaction))
        {
            if (reaction.type == sf::Event::Closed)
                oknoAplikacji.close();

            if (reaction.type == sf::Event::KeyPressed && reaction.key.code == sf::Keyboard::Escape)
                oknoAplikacji.close();

            if (reaction.type == sf::Event::MouseButtonPressed && reaction.mouseButton.button == sf::Mouse::Middle)
                oknoAplikacji.close();



            if (reaction.type == sf::Event::MouseButtonPressed && reaction.mouseButton.button == sf::Mouse::Left && Mx > 679 && Mx < 679 + 642 && My >620 && My < 620+117)
            {

                return true;
               

            }
            if (reaction.type == sf::Event::MouseButtonPressed && reaction.mouseButton.button == sf::Mouse::Left && Mx > 679 && Mx < 679 + 642 && My > 1220 && My <1220+117 )
            {

                return false;
               

            }
         
        }
    }


}

int Gra::third_screen(sf::RenderWindow& oknoAplikacji, int maps)
{
    int liczba_znakow = 0;


    sf::Event reaction;

    sf::Texture  tbutton3, tbutton4, tbutton5, tbutton6, tbutton7, tbutton8, tbutton9, tbutton10, tfirst_screen;

    tbutton3.loadFromFile("przy3.png");
    tbutton4.loadFromFile("przy4.png");
    tbutton5.loadFromFile("przy5.png");
    tbutton6.loadFromFile("przy6.png");
    tbutton7.loadFromFile("przy7.png");
    tbutton8.loadFromFile("przy8.png");
    tbutton9.loadFromFile("przy9.png");
    tbutton10.loadFromFile("przy10.png");
    tfirst_screen.loadFromFile("RUCHY.png");

    sf::Sprite button3, button4, button5, button6, button7, button8, button9, button10, first_screen;

    button3.setTexture(tbutton3);
    button4.setTexture(tbutton4);
    button5.setTexture(tbutton5);
    button6.setTexture(tbutton6);
    button7.setTexture(tbutton7);
    button8.setTexture(tbutton8);
    button9.setTexture(tbutton9);
    button10.setTexture(tbutton10);
    first_screen.setTexture(tfirst_screen);

    sf::Sprite tab_sprite[] = { button3, button4, button5, button6, button7, button8, button9, button10 };


    while (oknoAplikacji.isOpen())
    {
        oknoAplikacji.clear(sf::Color::White);




        int Mx = sf::Mouse::getPosition(oknoAplikacji).x;
        int My = sf::Mouse::getPosition(oknoAplikacji).y;
        
        tab_sprite[0].setPosition(679, 420);
        tab_sprite[1].setPosition(679, 420 + 125 + 25);
        tab_sprite[2].setPosition(679, 420 + 250 + 50);
        tab_sprite[3].setPosition(679, 420 + 375 + 75);
        tab_sprite[4].setPosition(679, 420 + 500 + 100);
        tab_sprite[5].setPosition(679, 420 + 625 + 125);
        tab_sprite[6].setPosition(679, 420 + 750 + 150);
        tab_sprite[7].setPosition(679, 420 + 875 + 175);

        oknoAplikacji.draw(first_screen);
        for (int i = 0; i < maps-2; i++)
        {
            oknoAplikacji.draw(tab_sprite[i]);
            
        }
        oknoAplikacji.display();
        
        while (oknoAplikacji.pollEvent(reaction))
        {
            if (reaction.type == sf::Event::Closed)
                oknoAplikacji.close();

            if (reaction.type == sf::Event::KeyPressed && reaction.key.code == sf::Keyboard::Escape)
                oknoAplikacji.close();

            if (reaction.type == sf::Event::MouseButtonPressed && reaction.mouseButton.button == sf::Mouse::Middle)
                oknoAplikacji.close();



            if (reaction.type == sf::Event::MouseButtonPressed && reaction.mouseButton.button == sf::Mouse::Left && Mx > 679 && Mx < 679 + 642 && My >420 && My < 420 + 116)
            {

                liczba_znakow = 3;
                goto here;

            }
            if (reaction.type == sf::Event::MouseButtonPressed && reaction.mouseButton.button == sf::Mouse::Left && Mx > 679 && Mx < 679 + 642 && My > 420 + 125 + 25 && My < 420 + 125 + 25 + 116)
            {

                liczba_znakow = 4;
                goto here;

            }
            if (reaction.type == sf::Event::MouseButtonPressed && reaction.mouseButton.button == sf::Mouse::Left && Mx > 679 && Mx < 679 + 642 && My >420 + 250 + 50 && My < 420 + 250 + 50 + 116)
            {

                liczba_znakow = 5;
                goto here;

            }
            if (reaction.type == sf::Event::MouseButtonPressed && reaction.mouseButton.button == sf::Mouse::Left && Mx > 679 && Mx < 679 + 642 && My >420 + 375 + 75 && My < 420 + 375 + 75 + 116)
            {

                liczba_znakow = 6;
                goto here;

            }
            if (reaction.type == sf::Event::MouseButtonPressed && reaction.mouseButton.button == sf::Mouse::Left && Mx > 679 && Mx < 679 + 642 && My >420 + 500 + 100 && My < 420 + 500 + 100 + 116)
            {

                liczba_znakow = 7;
                goto here;

            }
            if (reaction.type == sf::Event::MouseButtonPressed && reaction.mouseButton.button == sf::Mouse::Left && Mx > 679 && Mx < 679 + 642 && My > 420 + 625 + 125 && My < 420 + 625 + 125 + 116)
            {

                liczba_znakow = 8;
                goto here;

            }

            if (reaction.type == sf::Event::MouseButtonPressed && reaction.mouseButton.button == sf::Mouse::Left && Mx > 679 && Mx < 679 + 642 && My > 420 + 750 + 150 && My < 420 + 750 + 150 + 116)
            {
                liczba_znakow = 9;
                goto here;

            }

            if (reaction.type == sf::Event::MouseButtonPressed && reaction.mouseButton.button == sf::Mouse::Left && Mx > 679 && Mx < 679 + 642 && My > 420 + 875 + 175 && My < 420 + 875 + 175 + 116)
            {
                liczba_znakow = 10;
                goto here;

            }
        }
    }


here:
    return liczba_znakow;
}

void Gra::play_game(sf::RenderWindow& oknoAplikacji, int maps, int who_start, int liczba_znakow)
{
    Gra sprawdz_cordy, minimax;
    int essa = 1;
    int essa1 = 1;
    bool turn = true;
    char** tab_minimax = new char*[maps];

    for (int i = 0; i < maps; i++)
    {
        tab_minimax[i] = new char[maps];
    }

    for (int counter = 0; counter < maps; counter++)
    {
        for (int counter2 = 0; counter2 < maps; counter2++)
        {
            tab_minimax[counter][counter2] = ' ';
        }
    }
    
 
    vector<string> map = { "3x3.png","4x4.png", "5x5.png", "6x6.png", "7x7.png", "8x8.png", "9x9.png", "10x10.png"};

    sf::Event reaction;

    sf::Texture tboard, to, tx;
    sf::Sprite board, o, x;


    tboard.loadFromFile(map[(double)maps - 3]);
    to.loadFromFile("ored.png");
    tx.loadFromFile("xblue.png");


    board.setTexture(tboard);
    o.setTexture(to);
    x.setTexture(tx);

    while (oknoAplikacji.isOpen())
    {
        int Mx = sf::Mouse::getPosition(oknoAplikacji).x;
        int My = sf::Mouse::getPosition(oknoAplikacji).y;
        oknoAplikacji.clear(sf::Color::White);
        while (oknoAplikacji.pollEvent(reaction))
           
        {
           
            o.setScale(sprawdz_cordy.scale[maps - 3], sprawdz_cordy.scale[maps - 3]);
            x.setScale(sprawdz_cordy.scale[maps - 3], sprawdz_cordy.scale[maps - 3]);
                if ((Mx > sprawdz_cordy.cordx[maps-3][0] && Mx < sprawdz_cordy.cordx[maps - 3][maps]) && (My> sprawdz_cordy.cordy[maps - 3][0] && My < sprawdz_cordy.cordy[maps - 3][maps]))
                {
                    if (Mx < sprawdz_cordy.cordx[maps - 3][essa])
                    {
                        essa--;
                    }
                    if (My < sprawdz_cordy.cordy[maps - 3][essa1])
                    {
                        essa1--;
                    }
                    if (Mx > sprawdz_cordy.cordx[maps - 3][essa])
                    {
                        essa++;
                    }
                    if (My > sprawdz_cordy.cordy[maps - 3][essa1])
                    {
                        essa1++;
                    }      
                }
               

                if (turn == true && reaction.type == sf::Event::MouseButtonPressed && reaction.mouseButton.button == sf::Mouse::Left && tab_minimax[essa - 1][essa1 - 1] != 'x')
                {
                     tab_minimax[essa - 1][essa1 - 1] = 'o';
                   // minimax = sprawdz_cordy.find_best_move(tab_minimax, maps, liczba_znakow);
                   // tab_minimax[minimax.row][minimax.col] = 'o';
                    turn = false;
                    
                }
               
                
                if (turn == false/* && reaction.type == sf::Event::MouseButtonPressed && reaction.mouseButton.button == sf::Mouse::Left&& tab_minimax[essa-1][essa1-1]!='o'*/)
                {
                    //tab_minimax[essa - 1][essa1 - 1] = 'x';
                   minimax = sprawdz_cordy.find_best_move(tab_minimax, maps, liczba_znakow);
                   tab_minimax[minimax.row][minimax.col] = 'x';
                    turn = true;
                   
                }
                int sprawdz;

                sprawdz = sprawdz_cordy.who_win(liczba_znakow,maps, tab_minimax);
                //cout << sprawdz << endl;

                oknoAplikacji.draw(board);
                for (int i = 0; i < maps; i++)
                {
                    for (int j = 0; j < maps; j++)
                    {
                        if (tab_minimax[i][j] == 'o' )
                        {
                            
                            o.setPosition(sprawdz_cordy.cordx[maps - 3][i], sprawdz_cordy.cordy[maps - 3][j]);
                           
                            oknoAplikacji.draw(o);
                        }
                        if (tab_minimax[i][j] == 'x')
                        {

                            x.setPosition(sprawdz_cordy.cordx[maps - 3][i], sprawdz_cordy.cordy[maps - 3][j]);

                            oknoAplikacji.draw(x);
                        }

                    }
                }
                oknoAplikacji.display();
               
            if (reaction.type == sf::Event::Closed)
            {
                
                oknoAplikacji.close();
            }

            if (reaction.type == sf::Event::KeyPressed && reaction.key.code == sf::Keyboard::Escape)
                oknoAplikacji.close();

            if (reaction.type == sf::Event::MouseButtonPressed && reaction.mouseButton.button == sf::Mouse::Middle)
                oknoAplikacji.close();
        }     
    }
}

bool Gra::moves_to_end(int maps ,char** tabminimax)
{
    for (int i = 0; i < maps; i++)
        for (int j = 0; j < maps; j++)
            if (tabminimax[i][j] == ' ')
                return true;
    return false;
}

int Gra::who_win(int liczba_znakow,int maps, char** tabminimax)
{
    int counter = 1;
    int sprawdzjakixkolumna = 0, sprawdzjakiykolumna = 0, sprawdzjakixrzad = 0, sprawdzjakiyrzad = 0;
    
    //sprawdzanie kolumn
    for (int row = 0; row < maps; row++)
    {
        for (int col = 0; col < maps - 1; col++)
        {
            if (tabminimax[row][col] == tabminimax[row][col + 1] && tabminimax[row][col]!=' ' && tabminimax[row][col + 1]!=' ')
            {
              counter++;
              
              if (counter == liczba_znakow)
              {
                  sprawdzjakixkolumna = row;
                  sprawdzjakiykolumna = col;
                  break;
              }
            }
            else
            {
                counter = 1;
                
            }
        }
        {
            if (tabminimax[sprawdzjakixkolumna][sprawdzjakiykolumna] == 'x' && counter==liczba_znakow)
                return +10;
            else if (tabminimax[sprawdzjakixkolumna][sprawdzjakiykolumna] == 'o' && counter==liczba_znakow)
                return -10;
        }
    }

    // sprawdzwanie rzedow
    for (int col = 0; col < maps; col++)
    {
        for (int row = 0; row < maps - 1; row++)
        {
            if (tabminimax[row][col] == tabminimax[row+1][col] && tabminimax[row][col]!=' ' && tabminimax[row+1][col]!= ' ' )
            {
                counter++;
                //cout << counter << endl;
                if (counter == liczba_znakow)
                {
                    sprawdzjakixrzad = row;
                    sprawdzjakiyrzad = col;
                    break;
                }
            }
            else
            {
                counter = 1;
            }
        }
        {
            if (tabminimax[sprawdzjakixrzad][sprawdzjakiyrzad] == 'x' && counter == liczba_znakow)
                return +10;

            else if (tabminimax[sprawdzjakixrzad][sprawdzjakiyrzad] == 'o' && counter == liczba_znakow)
                return -10;
        }
    }


     // diagonalnie od lewej do prawej
     for (int row = 0; row <= maps-liczba_znakow; row++)
     {
         for (int col = 0; col <= maps - liczba_znakow; col++)
         {
             for (int siema = 0; siema <liczba_znakow-1; siema++)
             {
                 if (tabminimax[row + siema][col + siema] == tabminimax[row + siema + 1][col + siema + 1] && tabminimax[row+siema][col+siema] != ' ')
                 {
                     counter++;
                     //cout << counter << endl;
                     if (counter == liczba_znakow)
                     {
                         sprawdzjakixrzad = row + siema;
                         sprawdzjakiyrzad = col + siema;
                         goto here;
                         break;
                     }
                 }
                 else
                 {
                     counter = 1;
                 }
             }
         }
         {
             here:
             if (tabminimax[sprawdzjakixrzad][sprawdzjakiyrzad] == 'x' && counter == liczba_znakow)
                 return +10;

             else if (tabminimax[sprawdzjakixrzad][sprawdzjakiyrzad] == 'o' && counter == liczba_znakow)
                 return -10;
         }
     }
     
     //diagonalnie od prawej do lewej
     for (int row = maps-1; row >= maps - (maps - liczba_znakow)-1; row--)
     {
         for (int col = 0; col <= maps - liczba_znakow; col++)
         {
             for (int siema = 0; siema < liczba_znakow - 1; siema++)
             {
                 if (tabminimax[row - siema][col + siema] == tabminimax[row - siema - 1][col + siema + 1] && tabminimax[row - siema][col + siema] != ' ')
                 {
                     counter++;
                     //cout << counter << endl;
                     if (counter == liczba_znakow)
                     {
                         sprawdzjakixrzad = row - siema;
                         sprawdzjakiyrzad = col + siema;
                         goto here2;
                         break;
                     }
                 }
                 else
                 {
                     counter = 1;
                 }
             }
         }
         {
         here2:
             if (tabminimax[sprawdzjakixrzad][sprawdzjakiyrzad] == 'x' && counter == liczba_znakow)
                 return +10;

             else if (tabminimax[sprawdzjakixrzad][sprawdzjakiyrzad] == 'o' && counter == liczba_znakow)
                 return -10;
         }
     }



    /* tutaj sie zaczyna komentarz
    //sprawdzanie diagonalnie od lewej do prawej (dla chlopakow)
for (int row = 0; row <= maps - liczba_znakow; row++)
{ 
    for (int col = 0; col <= maps - liczba_znakow; col++)
    {
        while (tabminimax[row][col] == tabminimax[row + 1][col + 1] && row <= maps -  1 && col <= maps - 1 && tabminimax[row][col]!=' ' )
        {
            counter++;
            row++;
            col++;
            //cout << counter << endl;
            if (counter == liczba_znakow)
            {
                break;
           }
        }
        if (counter == liczba_znakow)
        {
            sprawdzjakixrzad = row;
            sprawdzjakiyrzad = col;
            goto here;
            break;
        }
        else
        {
            counter = 1;
        }
    }
    {
        here:
        if (tabminimax[sprawdzjakixrzad][sprawdzjakiyrzad] == 'x' && counter == liczba_znakow)
            return +10;

        else if (tabminimax[sprawdzjakixrzad][sprawdzjakiyrzad] == 'o' && counter == liczba_znakow)
            return -10;
    }
}


//diagonalnie od prawej do lewej
for (int row = maps - 1; row >= liczba_znakow - 1; row--)
{
    for (int col = 0; col <= maps - liczba_znakow; col++)
    {
        while (tabminimax[row][col] == tabminimax[row - 1][col + 1] && row > 0 && col <= maps - 1 && tabminimax[row][col] != ' ')
        {
            counter++;
            row--;
            col++;
            //cout << counter << endl;
            if (counter == liczba_znakow)
            {
                break;
            }
        }
        if (counter == liczba_znakow)
        {
            sprawdzjakixrzad = row;
            sprawdzjakiyrzad = col;
            goto es;
            break;
        }
        else
        {
            counter = 1;
        }
    }
    {
    es:
        if (tabminimax[sprawdzjakixrzad][sprawdzjakiyrzad] == 'x' && counter == liczba_znakow)
            return +10;

        else if (tabminimax[sprawdzjakixrzad][sprawdzjakiyrzad] == 'o' && counter == liczba_znakow)
            return -10;
    }

}



*/

    return 0;
}

int Gra::minimax(char** tabminimax, int maps, int depth, int second_screen, int liczba_znakow) 
{
    int score = who_win(liczba_znakow, maps, tabminimax);

    // If Maximizer has won the game return his/her
    // evaluated score
    if (score == 10)
        return score;

    // If Minimizer has won the game return his/her
    // evaluated score
    if (score == -10)
        return score;

    // If there are no more moves and no winner then
    // it is a tie
    if (moves_to_end(maps,tabminimax) == false)
        return 0;

    // If this maximizer's move
    if (second_screen)
    {
        int best = -1000;

        // Traverse all cells
        for (int i = 0; i < maps; i++)
        {
            for (int j = 0; j < maps; j++)
            {
                // Check if cell is empty
                if (tabminimax[i][j] == ' ')
                {
                    // Make the move
                    tabminimax[i][j] = 'x';

                    // Call minimax recursively and choose
                    // the maximum value
                    best = max(best, minimax(tabminimax, maps,depth + 1, !second_screen, liczba_znakow));

                    // Undo the move
                    tabminimax[i][j] = ' ';
                }
            }
        }
        return best;
    }

    // If this minimizer's move
    else
    {
        int best = 1000;

        // Traverse all cells
        for (int i = 0; i < maps; i++)
        {
            for (int j = 0; j < maps; j++)
            {
                // Check if cell is empty
                if (tabminimax[i][j] == ' ')
                {
                    // Make the move
                    tabminimax[i][j] = 'o';

                    // Call minimax recursively and choose
                    // the minimum value
                    best = min(best,
                        minimax(tabminimax, maps,depth + 1, !second_screen, liczba_znakow));

                    // Undo the move
                    tabminimax[i][j] = ' ';
                }
            }
        }
        return best;
    }
}


Gra Gra::find_best_move(char** tabminimax, int maps, int liczba_znakow)
{
    int bestVal = -1000;
    Gra bestMove;
    bestMove.row = -1;
    bestMove.col = -1;

    // Traverse all cells, evaluate minimax function for
    // all empty cells. And return the cell with optimal
    // value.
    for (int i = 0; i < maps; i++)
    {
        for (int j = 0; j < maps; j++)
        {
            // Check if cell is empty
            if (tabminimax[i][j] == ' ')
            {
                // Make the move
                tabminimax[i][j] = 'x';

                // compute evaluation function for this
                // move.
                int moveVal = minimax(tabminimax, maps , 0, false, liczba_znakow);

                // Undo the move
                tabminimax[i][j] = ' ';

                // If the value of the current move is
                // more than the best value, then update
                // best/
                if (moveVal > bestVal)
                {
                    bestMove.row = i;
                    bestMove.col = j;
                    bestVal = moveVal;
                }
            }
        }
    }  
    cout << bestMove.row << "   "  << bestMove.col <<  endl;
    return bestMove;
}
