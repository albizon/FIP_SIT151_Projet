#include <stdio.h>
#include <stdlib.h>

#include "linkedlist.h"

/* Initialisation of the list
 * */
list_ptr list_new(void)
{
	list_ptr list;
  return list;
}

/* Add a new cel to a list. 
 *  store the sprite_t to the new cel
 * */
list_ptr list_add(sprite_t sprite, list_ptr list)
{
	list_ptr listTmp = list;
	while(list->next!=NULL)
		listTmp = list->next;
	s_list_node_t *newCell = (s_list_node_t*) malloc(s_list_node_t);
	if(newCell == NULL) return NULL;
	newCell->data = sprite;
	newCell->next = NULL;
	listTmp->next = newCell;
  return list;
}

/* Return the length of a list
 * */
int list_length(list_ptr l)
{
  return 0;
}

/* Reverse the order of a list
 * */
void list_reverse(list_ptr * l)
{
}

/* Copy a list to another one. 
 *  Return the new list
 * */
list_ptr list_clone(list_ptr list)
{
  return NULL;
}

/* Return true if the list is empty
 * */
bool list_is_empty(list_ptr l)
{
  return true;
}

/* Search the first cel of the list & 
 *  return the associated sprite 
 * */
sprite_t list_head_sprite(list_ptr l)
{
  return NULL;
}

/* Return the next cel in list or NULL
 * */
list_ptr list_next(list_ptr l)
{
  return NULL;
}

/* Search the last cel of a list 
 *  Remove the cel from the list
 *  Return the associated sprite
 * */
sprite_t list_pop_sprite(list_ptr * l)
{
  return NULL;
}

/* Remove the given cel in a list
 * */
void list_remove(list_ptr elt, list_ptr *l)
{
}

/* Wipe out a list. 
 *  Don't forget to sprite_free() for each sprite
 * */
void list_free(list_ptr l)
{
}
