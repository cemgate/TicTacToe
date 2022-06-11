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

void Gra::play_game(sf::RenderWindow& oknoAplikacji, int maps, bool who_start, int liczba_znakow)

{
    bool sprawdzam;
    int sprawdzamsiema;
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
        while (oknoAplikacji.pollEvent(reaction)/* && sprawdz_cordy.who_win(liczba_znakow, maps, tab_minimax) != 10 && sprawdz_cordy.who_win(liczba_znakow, maps, tab_minimax) != -10*/)
           
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
               
                
                if (turn == true  && reaction.type == sf::Event::MouseButtonPressed && reaction.mouseButton.button == sf::Mouse::Left && tab_minimax[essa - 1][essa1 - 1] != 'o')
                {
                     tab_minimax[essa - 1][essa1 - 1] = 'x';
                    // pair<int, pair<int, int>> ai_move = minimax_optimization(tab_minimax, maps, AI_MARKER, START_DEPTH, LOSS, WIN, liczba_znakow);

                     //cout << ai_move.second.first << " " << ai_move.second.second << endl;
                   // tab_minimax[ai_move.second.first][ai_move.second.second] = AI_MARKER;
                     turn = false;  
                }

               
               
              
               
                if (turn == false/* && reaction.type == sf::Event::MouseButtonPressed && reaction.mouseButton.button == sf::Mouse::Left&& tab_minimax[essa-1][essa1-1]!='x'*/)
                {
                    //tab_minimax[essa - 1][essa1 - 1] = 'o';
                   pair<int, pair<int, int>> ai_move = minimax_optimization(tab_minimax, maps, AI_MARKER, START_DEPTH, LOSS, WIN, liczba_znakow);

                    cout << ai_move.second.first << " " << ai_move.second.second << endl;
                    tab_minimax[ai_move.second.first][ai_move.second.second] = AI_MARKER;
                    turn = true;
                   
                }
                
               
               

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

// dziala ta funkcja
bool Gra::board_full(int maps ,char** tabminimax)
{
    for (int i = 0; i < maps; i++)
        for (int j = 0; j < maps; j++)
            if (tabminimax[i][j] == ' ')
                return false;
    return true;
}
// dziala ta funkcja
int Gra::win_col(int liczba_znakow, int maps, char** tabminimax)
{
    int is_win = 0;
    int counter = 1;
    int final_row, final_col;
    for (int row = 0; row < maps; row++)
    {
        counter = 1;
        for (int col = 0; col < maps - 1; col++)
        {
           
            if (tabminimax[row][col] == tabminimax[row][col + 1] && tabminimax[row][col] != ' ' && tabminimax[row][col + 1] != ' ')
            {
                counter++;
                //cout << counter << endl;
                if (counter == liczba_znakow && tabminimax[row][col]== PLAYER_MARKER)
                {
                    final_row = row;
                    final_col = col;
                    counter = 1;
                    is_win = 1;
                    return is_win;
                }
                if (counter == liczba_znakow && tabminimax[row][col] == AI_MARKER)
                {
                    final_row = row;
                    final_col = col;
                    counter = 1;
                    is_win = -1;
                    return is_win;
                }
            }
            else
            {
                counter = 1;
            }
        }   
    }
    return is_win;
}
// dziala ta funkcja
int Gra::win_row(int liczba_znakow, int maps, char** tabminimax)
{
    int is_win = 0;
    int counter;
    int final_row, final_col;
    for (int col = 0; col < maps; col++)
    {
        counter = 1;
        for (int row = 0; row < maps-1 ; row++)
        {
            
            if (tabminimax[row][col] == tabminimax[row + 1][col] && tabminimax[row][col] != ' ' && tabminimax[row + 1][col] != ' ')
            {
                counter++;
                //cout << counter << endl;
                if (counter == liczba_znakow && tabminimax[row][col]==PLAYER_MARKER)
                {
                    final_row = row;
                    final_col = col;
                    counter = 1;
                    is_win = 1;
                    return is_win;
                }
                if (counter == liczba_znakow && tabminimax[row][col] == AI_MARKER)
                {
                    final_row = row;
                    final_col = col;
                    counter = 1;
                    is_win = -1;
                    return is_win;
                }
            }
            else
            {
                counter = 1;
            }
        }
    }
    return is_win;
}
// dziala ta funkcja
int Gra::win_diagonalLeft(int liczba_znakow, int maps, char** tabminimax)
{
    int counter = 1;
    int final_row, final_col;
    int is_win = false;
    
    for (int row = 0; row <= maps - liczba_znakow; row++)
    {
        for (int col = 0; col <= maps - liczba_znakow; col++)
        {
            counter = 1;
            for (int siema = 0; siema < liczba_znakow - 1; siema++)
            {
                if (tabminimax[row + siema][col + siema] == tabminimax[row + siema + 1][col + siema + 1] && tabminimax[row + siema][col + siema] != ' ')
                {
                    counter++;
                    //cout << counter << endl;
                    if (counter == liczba_znakow && tabminimax[row + siema][col + siema]==PLAYER_MARKER)
                    {
                        final_row = row + siema;
                        final_col = col + siema;
                        is_win = 1;
                        counter = 1;
                        return is_win;
                    }
                    if (counter == liczba_znakow && tabminimax[row + siema][col + siema] == AI_MARKER)
                    {
                        final_row = row + siema;
                        final_col = col + siema;
                        is_win = -1;
                        counter = 1;
                        return is_win;
                    }
                }
                else
                {
                    counter = 1;
                }
            }
        }    
    }
    return is_win;
}
// dziala ta funkcja
int Gra::win_diagonalRight(int liczba_znakow, int maps, char** tabminimax)
{
    int counter = 1;
    int final_row, final_col;
    int is_win = false;

    for (int row = maps - 1; row >= maps - (maps - liczba_znakow) - 1; row--)
    {
        for (int col = 0; col <= maps - liczba_znakow; col++)
        {
            for (int siema = 0; siema < liczba_znakow - 1; siema++)
            {
                if (tabminimax[row - siema][col + siema] == tabminimax[row - siema - 1][col + siema + 1] && tabminimax[row - siema][col + siema] != ' ')
                {
                    counter++;
                    //cout << counter << endl;
                    if (counter == liczba_znakow && tabminimax[row - siema][col + siema]==PLAYER_MARKER)
                    {
                        final_row = row - siema;
                        final_col = col + siema;
                        is_win = 1;
                        counter = 1;
                        return is_win;
                    }
                    if (counter == liczba_znakow && tabminimax[row - siema][col + siema] == AI_MARKER)
                    {
                        final_row = row - siema;
                        final_col = col + siema;
                        is_win = -1;
                        counter = 1;
                        return is_win;
                    }
                }
                else
                {
                    counter = 1;
                }
            }
        }
    }
    return is_win;
}
// dziala ta funkcja
bool Gra::game_is_won(int liczba_znakow, int maps, char** tabminimax, char WHOS_TURN)
{
    Gra tmp;
    bool game_won = false;
    if (WHOS_TURN == PLAYER_MARKER && (tmp.win_col(liczba_znakow, maps, tabminimax) == 1 || tmp.win_row(liczba_znakow, maps, tabminimax) == 1 || tmp.win_diagonalLeft(liczba_znakow, maps, tabminimax) == 1 || tmp.win_diagonalRight(liczba_znakow, maps, tabminimax) == 1))
    {
        game_won = true;

    }
    if (WHOS_TURN == PLAYER_MARKER && (tmp.win_col(liczba_znakow, maps, tabminimax) == -1 || tmp.win_row(liczba_znakow, maps, tabminimax) == -1 || tmp.win_diagonalLeft(liczba_znakow, maps, tabminimax) == -1 || tmp.win_diagonalRight(liczba_znakow, maps, tabminimax) == -1))
    {
        game_won = false;
    }
    if (WHOS_TURN == AI_MARKER && (tmp.win_col(liczba_znakow, maps, tabminimax) == 1 || tmp.win_row(liczba_znakow, maps, tabminimax) == 1 || tmp.win_diagonalLeft(liczba_znakow, maps, tabminimax) == 1 || tmp.win_diagonalRight(liczba_znakow, maps, tabminimax) == 1))
    {
        game_won = false;

    }
    if (WHOS_TURN == AI_MARKER && (tmp.win_col(liczba_znakow, maps, tabminimax) == -1 || tmp.win_row(liczba_znakow, maps, tabminimax) == -1 || tmp.win_diagonalLeft(liczba_znakow, maps, tabminimax) == -1 || tmp.win_diagonalRight(liczba_znakow, maps, tabminimax) == -1))
    {
        game_won = true;
    }
    return game_won;
}



// Get all available legal moves (spaces that are not occupied)
vector<pair<int, int>> Gra::get_legal_moves(char** tabminimax, int maps)
{
    vector<pair<int, int>> legal_moves;
    for (int i = 0; i < maps; i++)
    {
        for (int j = 0; j < maps; j++)
        {
           
            if (tabminimax[i][j] != AI_MARKER && tabminimax[i][j] != PLAYER_MARKER)
            {
                legal_moves.push_back(std::make_pair(i, j));
            }
        }
    }

    return legal_moves;
}


// Check if a position is occupied
bool Gra::position_occupied(char** tabminimax, int maps, pair<int, int> pos)
{
    Gra tmp;
    vector<pair<int, int>> legal_moves = tmp.get_legal_moves(tabminimax, maps);

    for (int i = 0; i < legal_moves.size(); i++)
    {
        if (pos.first == legal_moves[i].first && pos.second == legal_moves[i].second)
        {
            return false;
        }
    }

    return true;
}


// pozycje okupowane przez danego gracza/komputer
vector<pair<int, int>> Gra::get_occupied_positions(char** tabminimax, int maps, char marker)
{
    vector<pair<int, int>> occupied_positions;

    for (int i = 0; i < maps; i++)
    {
        for (int j = 0; j < maps; j++)
        {
            if (marker == tabminimax[i][j])
            {
                occupied_positions.push_back(make_pair(i, j));
            }
        }
    }

    return occupied_positions;
}

char Gra::get_opponent_marker(char marker)
{
    char opponent_marker;
    if (marker == PLAYER_MARKER)
    {
        opponent_marker = AI_MARKER;
    }
    else
    {
        opponent_marker = PLAYER_MARKER;
    }

    return opponent_marker;
}

//Zwraca dana wartosc planszy
int Gra::get_board_state(char** tabminimax, int maps, char marker, int liczba_znakow)
{
    Gra tmp;
    char opponent_marker = tmp.get_opponent_marker(marker);

   

    bool is_won = game_is_won(liczba_znakow, maps, tabminimax,marker);

    if (is_won)
    {
        return WIN;
    }

    
    bool is_lost = game_is_won(liczba_znakow, maps, tabminimax, opponent_marker);

    if (is_lost)
    {
        return LOSS;
    }

    bool is_full = tmp.board_full(maps, tabminimax);
    if (is_full)
    {
        return DRAW;
    }

    return DRAW;

}



// Apply the minimax game optimization algorithm
pair<int, pair<int, int>> Gra::minimax_optimization(char** tabminimax, int maps, char marker, int depth, int alpha, int beta, int liczba_znakow)
{
    Gra tmp;
    // Initialize best move
    pair<int, int> best_move = make_pair(-1, -1);
    int best_score = (marker == AI_MARKER) ? LOSS : WIN;

    // If we hit a terminal state (leaf node), return the best score and move
    if (tmp.board_full(maps, tabminimax) || DRAW != tmp.get_board_state(tabminimax, maps, AI_MARKER, liczba_znakow))
    { 
        
        best_score = get_board_state(tabminimax, maps, AI_MARKER, liczba_znakow);
        //cout << "sprawdz score" << best_score<< endl;
        return make_pair(best_score, best_move);
    }

    vector<pair<int, int>> legal_moves = get_legal_moves(tabminimax, maps);

    for (int i = 0; i < legal_moves.size(); i++)
    {
        pair<int, int> curr_move = legal_moves[i];
        tabminimax[curr_move.first][curr_move.second] = marker;
       
        // Maximizing player's turn
        if (marker == AI_MARKER  && depth<MAX_DEPTH)
        {
            int score = minimax_optimization(tabminimax, maps, PLAYER_MARKER, depth + 1, alpha, beta, liczba_znakow).first;
            
            // Get the best scoring move
            if (best_score < score)
            {
                best_score = score - depth * 10;
                best_move = curr_move;

                // Check if this branch's best move is worse than the best
                // option of a previously search branch. If it is, skip it
                alpha = max(alpha, best_score);
                tabminimax[curr_move.first][curr_move.second] = EMPTY_SPACE;
                if (beta <= alpha)
                {
                    break;
                }
            }
           
        } // Minimizing opponent's turn
        if (marker == PLAYER_MARKER && depth<MAX_DEPTH)
        {
            int score = minimax_optimization(tabminimax, maps, AI_MARKER, depth + 1, alpha, beta, liczba_znakow).first;

            if (best_score > score)
            {
                best_score = score + depth * 10;
                best_move = curr_move;

                // Check if this branch's best move is worse than the best
                // option of a previously search branch. If it is, skip it
                beta = std::min(beta, best_score);
                tabminimax[curr_move.first][curr_move.second] = EMPTY_SPACE;
                if (beta <= alpha)
                {
                    break;
                }
            }
           
        }
        //cout << curr_move.first << " " << curr_move.second << endl;
        tabminimax[curr_move.first][curr_move.second] = EMPTY_SPACE; // Undo move

    }
    // cout << "dwa" << endl;
    return make_pair(best_score, best_move);
}


