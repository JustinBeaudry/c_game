#ifndef __CARD_H__
#define __CARD_H__

#include <string>

//===============================
//  Forward declared dependencies
//===============================  
class CardEffect;
class CreatureAbility;

//===========
// Card Class
//===========

class Card {
  public:
    std::string name;
    int cost;
}

//==================
// Creature SubClass
//==================

class Creature : public Card {
  public:
    std::string type;         // Neutral, Red, Blue, Green, Yellow
    CreatureAbility* ability; // Defense, Support, Territory, First Attack
    int mhp; // Max Hit Points
    int hp;  // Hit Points
    int st;  // Strength
}

//================
// Scroll SubClass
//================

class Scroll : public Card {
  public:
    CardEffect* effect;
}

//================
// Weapon SubClass
//================

class Weapon : public Card {
  public:
    CardEffect* effect;
}

//===============
// Armor SubClass
//===============

class Armor : public Card {
  public:
    CardEffect* effect;
}

//===================
// Accessory SubClass
//===================

class Accessory : public Card {
  public:
    CardEffect* effect;
}
