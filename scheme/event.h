// event.h

#ifndef EVENT_H
#define EVENT_H

#define MAX_ACTION 10
#define MAX_CHAR 500
typedef struct{
    char event_name[MAX_CHAR]; // ini dpe nama event usahan unik/event
    char story_context[MAX_CHAR * 5]; // ini for dpe cerita
    char action[MAX_ACTION][MAX_CHAR];
    double chance; // probabilitas untuk event ini muncul 
} Event;

/**
 * @brief Add new Event
 * 
 * this function is use for to add
 * new type of event
 * 
 * @param e Pointer ke Event
 */
void create_event(Event *e);

/**
 * @brief Random Event
 * 
 * this function will return random event
 * for the player to get
 */
Event* get_random_event();

/**
 * @brief Get Specific Event
 * 
 * this function will return
 * specific event
 */
Event* get_event(char* event_name);

#endif