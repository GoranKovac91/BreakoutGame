#include<iostream>
#include<SFML/Graphics.hpp>
#include "Game.h"
#include"Ball.h";
#include <vector>;
#include <time.h>;
int Ball::lives = 3;
int TransparentBrick::health = 20;
int BasicBrick::health = 10;
//breakout game 
//klasa paddle ,klasa game logic(collsion detection,time

int main()
{
    // init game engine
    Game game;
   // Paddle paddle; 
    while (game.isRunning())
    {
        game.Render();
        game.Update();
       
    }
   
    
   
    return 0;
}