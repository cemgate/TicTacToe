#pragma once
#include <SFML/Graphics.hpp>
#include <cmath>
#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Gra
{
public:
	
    vector<int> cordx3 = { 375,375 + 450,375 + 900, 375+900+450 };
	vector<int> cordy3 = { 420,420 + 450,420 + 900 , 420 + 900 +450};

	vector<int> cordx4 = {375, 375+325, 375+2*325, 375+3*325, 375+4*325};
	vector<int> cordy4 = {420, 420+315, 420+2*315, 420+3*315, 420+4*315};

	vector<int> cordx5= {375, 375+260, 375+2*260, 375+3*260, 375+4*260, 375+5*260};
	vector<int> cordy5 = {420, 420+260, 420+2*260, 420+3*260, 420+4*260, 420+5*260};

	vector<int> cordx6= {365, 365+220, 365+2*220, 365+3*220,  365+4*220, 365+5*220, 365+6*220};
	vector<int> cordy6 = {390, 390+220, 390+2*220, 390+3*220, 390+4*220, 390+5*220, 390+6*220};

	vector<int> cordx7 = {380, 380+185, 380+2*185, 380+3*185, 380+4*185, 380+5*185, 380+6*185, 380+7*185};
	vector<int> cordy7 = {390, 390+185, 390+2*185, 390+3*185, 390+4*185, 390+5*185, 390+6*185, 390+7*185};

	vector<int> cordx8 = {350, 350+164, 350+2*164, 350+3*164, 350+4*164, 350+5*164, 350+6*164, 350+7*164, 350+8*164};
	vector<int> cordy8 = {420, 420+162, 420+2*162, 420+3*162, 420+4*162, 420+5*162, 420+6*162, 420+7*162, 420+8*162};

	vector<int> cordx9 = {370, 370+145, 370+2*145, 370+3*145, 370+4*145, 370+5*145, 370+6*145, 370+7*145, 370+8*145, 370+9*145};
	vector<int> cordy9 = {380, 380 + 145, 380 + 2 * 145, 380 + 3 * 145, 380 + 4 * 145, 380 + 5 * 145, 380 + 6 * 145, 380 + 7 * 145, 380 + 8 * 145, 380 + 9 * 145 };

	vector<int> cordx10 = {365, 365+130, 365+2*130, 365+3*130, 365+4*130, 365+5*130, 365+6*130, 365+7*130, 365+8*130, 365+9*130, 365+10*130};
	vector<int> cordy10 = { 375, 375 + 130, 375 + 2 * 130, 375 + 3 * 130, 375 + 4 * 130, 375 + 5 * 130, 375 + 6 * 130, 375 + 7 * 130, 375 + 8 * 130, 375 + 9 * 130, 375 + 10 * 130 };
	
	vector<vector<int>> cordx = { cordx3, cordx4, cordx5, cordx6, cordx7, cordx8, cordx9, cordx10 };
	vector<vector<int>> cordy = { cordy3, cordy4, cordy5, cordy6, cordy7, cordy8, cordy9, cordy10 };

	vector<float> scale = { 1, 0.8, 0.6,0.5, 0.4, 0.4,0.32,0.3 };
	
	
	
	int first_screen(sf::RenderWindow& oknoAplikacji);
	int second_screen(sf::RenderWindow& oknoAplikacji);
	void play_game(sf::RenderWindow& oknoAplikacji, int maps, int who_start);
	


};

