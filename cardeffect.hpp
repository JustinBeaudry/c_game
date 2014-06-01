#ifndef __CARD_EFFECTS_H__
#define __CARD_EFFECTS_H__

class CardEffect {
  public:
    // ints to return results or status (true, false) based upon whether an
    // operation has failed. This could be helpful for edge cases.
    virtual int hp();
    virtual int st();
    virtual int death();
    virtual int destroy();
    virtual int penetration();
    virtual int critical();
    virtual int status();      // sleep, 
    virtual int ignore();
    virtual int recycle();     // recycle a card back to in_hand, library;
    virtual int reduce();      // reduce damage, etc.
    virtual int reflect();     // reflect an attack 
    virtual int transform();
    virtual int bonus();
}

#endif
