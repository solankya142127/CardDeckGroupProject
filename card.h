/**
 * @author      : lukeschron (lukeschron@galaxy)
 * @file        : card
 * @created     : Thursday Nov 15, 2018 18:58:47 PST
 */

#ifndef CARD_H

#define CARD_H

#include <string>

class Card
{
    int m_suit;
    int m_pip;

public:
    Card(int suit, int pip);
    int get_suit();
    int get_pip();
<<<<<<< HEAD
    void return_card();
=======
    void print_card();
>>>>>>> fe1286f0ea72cf39344a97d6fcc51ec78afac21f

};



#endif /* end of include guard CARD_H */

