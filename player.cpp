#include "player.hpp"

// Player Methods

Player::Player(std::string n, int h, float s, int x, int y, int id): name(n), health(h), speed(s), pos_x(x), pos_y(y), id(id)
{}

std::string Player::get_name(){
    return name;
}

float Player::get_speed(){
    return speed;
}

void Player::set_name(std::string n){
    this->name = n;
}

void Player::set_speed(float s){
    this->speed = s;
}

void Player::move(int x, int y){
    this->pos_x = x;
    this->pos_y = y;
}

//Jedi Methods
Jedi::Jedi(std::string n, int h, float s, int x, int y, int id) : Player{n, h, s, x, y, id}
{}

void Jedi::attack(int d, Sith& p){
    p.health -= d;
}

void Jedi::attack(int d, Jedi& p){;}

//Sith Methods
Sith::Sith(std::string n, int h, float s, int x, int y, int id) : Player{n, h, s, x, y, id}
{}

void Sith::attack(int d, Jedi& p){
    p.health -= d;
}

void Sith::attack(int d, Sith& p){
    p.health -= d;
}