/*
File Name: main.cpp
Description: It's a deck of cards babyyyy!
Authors: Ankur Solanky, Luke Schron, Roger Aragon, Matthew Farnham
Date Created: Thu Nov 15 19:12:57 PST 2018
*/
#ifndef "DECK_H"
#define "DECK_H"
#include "card.h"
#include<iostream>
#include<ctime>
#include<vector>
#include<string>

using namespace std;

class Deck
{
    Public:
    Deck();
    void shuffle();
    dealCard();

    Private:
    Card deck[SIZE];
    int currentCard();
    
};
#endif
