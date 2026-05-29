// inventory.h

#ifndef INVENTORY_H
#define INVENTORY_H
#include <stdbool.h>

// ini maximal barang yang boleh ada di inventory
#define MAX_INVENTORY_SLOTS 20

typedef struct {
    char nama_barang[200];

    //jadi nanti bebas mau pake item count atau quality atau bahkan dua dua.
    int item_count; // ini untuk cek total item
    double item_quality; // ini untuk cek kualitas item

    // ini properties tambahan
    // kayak apakah bisa dimakan? atau apakah bisa for tambah darah
    bool is_eatable;
    bool is_heal;
} Item;

typedef struct {
    Item item[MAX_INVENTORY_SLOTS];

    // ini for mo hitung total item di inventory
    int total_item;
    
} Inventory;


/**
 * @brief Add new Item to inventory
 * 
 * this function will get use for add
 * item into the player inventory
 * 
 * @param I Pointer to Inventory
 * @param item Item to add
 */
void add_item(Inventory *I, Item item);

/**
 * @brief Remove Item from inventory
 * 
 * this function will remove item form
 * the player inventory
 * 
 * @param I Pointer to Inventory
 * @param item Pointer to Specific Item in inventory
 */
void remove_item(Inventory *I, Item *item);

/**
 * @brief Modify Item from Inventory
 * 
 * this function will modified item from
 * the player inventory
 * 
 * @param I Pointer to Inventory
 * @param item Pointer to Specific Item in inventory
 */
void modify_item(Inventory *I, Item *item);

/**
 * @brief Search for an Item by name
 * * @param I Pointer to Inventory
 * @param target_name Name of the item to search for
 * @return Pointer to the item if found, NULL if not found
 */
Item* search_item(Inventory *I, char* target_name);

/**
 * @brief Get all items
 * * @param inv Pointer to Inventory
 */
Item* get_all_items(Inventory *inv);

#endif