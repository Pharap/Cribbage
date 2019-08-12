#pragma once

#include <Arduboy2.h>

class Score { 
    
  public:

    Score();

    uint8_t getHand(uint8_t index);
    uint8_t getScore();

    void setHand(uint8_t index, uint8_t card);
    void setScore(uint8_t score);

    void reset();

  private:

    uint8_t hand[5];
    uint8_t score;

};