#include"Gra.h"
/*
int main()
{
    sf::Texture przycisk3, przycisk4, przycisk5, przycisk6, przycisk7, przycisk8, przycisk9, przycisk10, plansza, przyciskty, przyciskcomputer, planszaty, p3, p4, p5, p6, p7, p8, p9, p10, ored;

    przycisk3.loadFromFile("b3.png");
    przycisk4.loadFromFile("b4.png");
    przycisk5.loadFromFile("b5.png");
    przycisk6.loadFromFile("b6.png");
    przycisk7.loadFromFile("b7.png");
    przycisk8.loadFromFile("b8.png");
    przycisk9.loadFromFile("b9.png");
    przycisk10.loadFromFile("b10.png");
    plansza.loadFromFile("poziom.png");
    przyciskty.loadFromFile("byou.png");
    przyciskcomputer.loadFromFile("bcomputer.png");
    planszaty.loadFromFile("turn.png");
    p3.loadFromFile("3x3.png");
    p4.loadFromFile("4x4.png");
    p5.loadFromFile("5x5.png");
    p6.loadFromFile("6x6.png");
    p7.loadFromFile("7x7.png");
    p8.loadFromFile("8x8.png");
    p9.loadFromFile("9x9.png");
    p10.loadFromFile("10x10.png");
    ored.loadFromFile("ored.png");


    
    sf::Sprite button3, button4, button5, button6, button7, button8, button9, button10, realplansza, buttonyou, buttoncomputer, realplanszaturn, t3, t4, t5, t6, t7, t8, t9, t10, o;

    
    button3.setTexture(przycisk3);
    button4.setTexture(przycisk4);
    button5.setTexture(przycisk5);
    button6.setTexture(przycisk6);
    button7.setTexture(przycisk7);
    button8.setTexture(przycisk8);
    button9.setTexture(przycisk9);
    button10.setTexture(przycisk10);
    realplansza.setTexture(plansza);



    buttonyou.setTexture(przyciskty);
    buttoncomputer.setTexture(przyciskcomputer);
    realplanszaturn.setTexture(planszaty);

    t3.setTexture(p3);
    t4.setTexture(p4);
    t5.setTexture(p5);
    t6.setTexture(p6);
    t7.setTexture(p7);
    t8.setTexture(p8);
    t9.setTexture(p9);
    t10.setTexture(p10);

    o.setTexture(ored);


    sf::RenderWindow oknoAplikacji(sf::VideoMode(2000, 2000, 32), "wypierdalaj");
    
    while (oknoAplikacji.isOpen())
    {
        float Mx, My;
        sf::Event zdarzenie;
        while (oknoAplikacji.pollEvent(zdarzenie))
        {
            

              if (zdarzenie.type == sf::Event::MouseButtonReleased && zdarzenie.mouseButton.button == sf::Mouse::Left && Mx > 365 && Mx < 365 + 130 && My > 375 && My < 375 + 130)
             {
                 o.setPosition(765, 375);
                 oknoAplikacji.draw(o);

             }

            if (zdarzenie.type == sf::Event::Closed)
                oknoAplikacji.close();

            if (zdarzenie.type == sf::Event::KeyPressed && zdarzenie.key.code == sf::Keyboard::Escape)
                oknoAplikacji.close();

            if (zdarzenie.type == sf::Event::MouseButtonPressed && zdarzenie.mouseButton.button == sf::Mouse::Middle)
                oknoAplikacji.close();

        }
        Mx = sf::Mouse::getPosition(oknoAplikacji).x;
        My = sf::Mouse::getPosition(oknoAplikacji).y;
       
        // Ustawienia przyciskow z wyborem poziomow

        button3.setPosition(679, 420); 
        button4.setPosition(679, 420+125+25);
        button5.setPosition(679, 420+250+50);
        button6.setPosition(679, 420+375+75);
        button7.setPosition(679, 420+500+100);
        button8.setPosition(679, 420+625+125);
        button9.setPosition(679, 420+750+150);
        button10.setPosition(679, 420+875+175);


        //ustawienia przycislkow Ty albo Komputer

        buttonyou.setPosition(679, 620);
        buttoncomputer.setPosition(679, 1220);


        // tutaj jakies pomocnicze do x i o ale mam to w pliku zapisane
        o.setScale(0.3, 0.3); // skala dla mapy 10x10
        o.setPosition(365,375); // poczatkowa pozycja 
        o.setPosition(365+130,375+130); // przesuniecie o jedna kratke w prawo i w dol  

        oknoAplikacji.clear(sf::Color::White);
        
        //to jest przyklad jak malowac xksy i o
        static bool siema;
        if (zdarzenie.type == sf::Event::MouseButtonPressed && zdarzenie.mouseButton.button == sf::Mouse::Left && Mx > 365 && Mx < 365 + 130 && My > 375 && My < 375 + 130)
            siema=true;
       
        if (siema == true)
        {
            oknoAplikacji.draw(o);
        }
        
        oknoAplikacji.draw(buttoncomputer);
        oknoAplikacji.draw(buttonyou);

        oknoAplikacji.draw(realplansza);
        oknoAplikacji.draw(button3);
        oknoAplikacji.draw(button4);
        oknoAplikacji.draw(button5);
        oknoAplikacji.draw(button6);
        oknoAplikacji.draw(button7);
        oknoAplikacji.draw(button8);
        oknoAplikacji.draw(button9);
        oknoAplikacji.draw(button10);
        oknoAplikacji.display();
    }
    return 0;
} */


int main()
{
    sf::RenderWindow oknoAplikacji;
    oknoAplikacji.create(sf::VideoMode(2000, 2000, 32), "wypierdalaj");
    
        Gra test;
        int siema1, siema2;
       
       siema1= test.first_screen(oknoAplikacji);
       
       siema2 = test.second_screen(oknoAplikacji);
       
       test.play_game(oknoAplikacji, siema1, siema2);
       
} 