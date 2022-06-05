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

int Gra::second_screen(sf::RenderWindow& oknoAplikacji)

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

                who_start = 3;
                goto here;

            }
            if (reaction.type == sf::Event::MouseButtonPressed && reaction.mouseButton.button == sf::Mouse::Left && Mx > 679 && Mx < 679 + 642 && My > 1220 && My <1220+117 )
            {

                who_start = 4;
                goto here;

            }
         
        }
    }

here:
    return who_start;
}

void Gra::play_game(sf::RenderWindow& oknoAplikacji, int maps, int who_start)
{
    Gra sprawdz_cordy;
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
                    cout << essa << " " << essa1 << endl;
                }
                
               
               
                if (turn == true && reaction.type == sf::Event::MouseButtonPressed && reaction.mouseButton.button == sf::Mouse::Left && tab_minimax[essa - 1][essa1 - 1] != 'x')
                {
                    tab_minimax[essa - 1][essa1 - 1] = 'o';
                    turn = false;
                    
                }
               

                if (turn == false && reaction.type == sf::Event::MouseButtonPressed && reaction.mouseButton.button == sf::Mouse::Left&& tab_minimax[essa-1][essa1-1]!='o')
                {
                    tab_minimax[essa - 1][essa1 - 1] = 'x';
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

