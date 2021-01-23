#pragma once
#include <iostream>

class Jedi;
class Sith;

class Player{
private:
    std::string name;
    float speed; 

public:
    Player(std::string n, int h, float s, int x, int y, int id);
    int health;
    int pos_x, pos_y;

    virtual void move(int x, int y);
    virtual void attack(int d, Sith& p)=0 {};
    virtual void attack(int d, Jedi& p)=0 {};

    std::string get_name();
    float get_speed();
    void set_name(std::string n);
    void set_speed(float s);

protected:
    int id;
};

class Jedi : public Player {
public:
    Jedi(std::string n="Unknown Jedi Knight", int h=500, float s=10, int x=0, int y=0, int id=1);
    void attack(int d, Sith& p) override;
    void attack(int d, Jedi& p) override;
};


class Sith : public Player {
public: 
    Sith(std::string n="Unknown Sith Lord", int h=600, float s=7, int x=0, int y=0, int id=2);
    void attack(int d, Jedi& p) override;
    void attack(int d, Sith& p) override;
};