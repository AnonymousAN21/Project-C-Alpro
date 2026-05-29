//player.h
#ifndef PLAYER_H
#define PLAYER_H
#include <stdbool.h>
typedef struct {
    /* player memiliki 4 attribut yang dimana attribut' nya sbg brikut:
    - player name untuk tampung player pe nama;
    - health untuk tampung player pe darah;
    - hunger untuk tampung player pe kondisi perut
    - point sejauh mana player bertahan.
    */
    char player_name[500];
    int health;
    int hunger;
    int point;

} Player;

/**
 * @brief Create new Player
 * this function is use to create new player
 */

void create_player(Player *p);

/**
  * @brief Add/Increase Player Health
  * this function will add health to the player
  *
  * @param p pointer to the specific player 
  * @param added_health number of health
  */
void increase_health(Player *p, int added_health);

/**
 *  @brief Add/Increase Player Hunger
 * 
 * this function will add Hunger to the player
 * 
 *  @param p pointer to the specific player
 *  @param added_hunger number of hunger
 */
void increase_hunger(Player *p, int added_hunger);

/**
 * @brief Decrease Player Health
 * 
 * this function will remove certain amount
 * health from the player.
 * 
 * @param p pointer to the specific player
 * @param decrease_point number of health that will get remove
 */
void decrease_health(Player *p, int decrease_point);

/**
 * @brief Decrease Player Hunger
 * 
 * this function will remove certain amount
 * hunger from the player
 * 
 * @param p pointer to the specific player
 * @param decrease_point number of hunger that will get remove
 */
void decrease_hunger(Player *p, int decrease_point);

/**
 * @brief Add Player Point
 * 
 * this function is use to add 1 score point
 * to the player with how long did the player 
 * survive
 * 
 * @param p pointer to the specific player
 */
void add_score(Player *p);

/**
 * @brief Check if the player alive
 * 
 * this function will return true / false
 * 
 * @param p pointer to the specific player
 */
bool is_alive(Player *p);

#endif