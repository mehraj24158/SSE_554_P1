#include "gtest/gtest.h"
#include "../player.hpp"

TEST(constructors, Default){
    Jedi yoda("yoda");
    Sith vader("Darth Vader");
    ASSERT_EQ(500, yoda.health);
    ASSERT_EQ(600, vader.health);
};

TEST(attack, jedi_sith){
    Jedi yoda("yoda");
    Jedi kenobi("kenobi");
    Sith vader("Darth Vader");
    Sith maul("Darth Maul");

    ASSERT_EQ(500, kenobi.health);
    yoda.attack(100, kenobi);
    ASSERT_EQ(500, kenobi.health);

    ASSERT_EQ(600, vader.health);
    yoda.attack(100, vader);
    ASSERT_EQ(500, vader.health);

    maul.attack(50, vader);
    ASSERT_EQ(450, vader.health);

    ASSERT_EQ(500, kenobi.health);
    maul.attack(100, kenobi);
    ASSERT_EQ(400, kenobi.health);
}

TEST(move, jedi_sith){
    Jedi kenobi("kenobi");
    Sith vader("Darth Vader");

    ASSERT_EQ(0, kenobi.pos_x);
    ASSERT_EQ(0, kenobi.pos_y);

    ASSERT_EQ(0, vader.pos_x);
    ASSERT_EQ(0, vader.pos_y);

    kenobi.move(5, 5);
    ASSERT_EQ(5, kenobi.pos_x);
    ASSERT_EQ(5, kenobi.pos_y);

    vader.move(5, 5);
    ASSERT_EQ(5, vader.pos_x);
    ASSERT_EQ(5, vader.pos_y);
}