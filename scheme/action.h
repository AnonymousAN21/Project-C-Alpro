// action.h

#ifndef ACTION_H
#define ACTION_H
#include "inventory.h"

/**
 * @brief Impact on the Player Hunger
 * 
 * this function will give consequences 
 * to the player hunger bar
 * 
 * @param probabilities Probability this consequences will happen
 * @param consequence_rate The Impact of this consequences
 */
void hunger_consequence(double probabilites, double consequence_rate);

/**
 * @brief Impact on the Player Health
 * 
 * this function will give consequences 
 * to the player health bar
 * 
 * @param probabilities Probability this consequences will happen
 * @param consequence_rate The Impact of this consequences
 */
void health_consequence(double probabilites, double consequence_rate);

/**
 * @brief Impact on the Player Item
 * 
 * this function will give consequences 
 * to the player Item wether it goin to remove
 * decrease the quality or anything
 * 
 * @param I Pointer to player Inventory
 * @param probabilities Probability this consequences will happen
 * @param consequence_rate The Impact of this consequences
 */
void inventory_consequence(Inventory *I, double probabilites, double consequence_rate);

#endif