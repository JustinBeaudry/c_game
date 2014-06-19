#ifndef __CARD_H__
#define __CARD_H__

#include <string>

//===============================
//  Forward declared dependencies
//===============================  
// class CardEffect;
// class CreatureAbility;
class CardType;

//===========
// Card Class
//===========
class Card {
  public:
    std::string name;
    int cost;
    //CardEffect* effect;
    CardType* type;         // Neutral, Red, Blue, Green, Yellow
    //CreatureAbility* ability; // Defense, Support, Territory, First Attack
    int mhp; // Max Hit Points
    int hp;  // Hit Points
    int st;  // Strength
};
//Creature, Scroll, Weapon, Armor, Accessory

