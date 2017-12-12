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
	s_list_node_t *newCell = (s_list_node_t*) malloc(sizeof(s_list_node_t));
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
	if(l == NULL)
		return 0;
	uint32_t length = 1;
	while(l->next!=NULL)
	{
		l=l->next;
		length++;
	}
	return length;
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
	list_ptr copy =  NULL;
	uint32_t length = list_length(list);
	memcpy(copy, list, length*(sizeof(s_sprite_t)+sizeof(list_ptr)));
	return copy;
}

/* Return true if the list is empty
 * */
bool list_is_empty(list_ptr l)
{
	if(l==NULL)
		return TRUE;
	else
		return FALSE;
}

/* Search the first cel of the list & 
 *  return the associated sprite 
 * */
sprite_t list_head_sprite(list_ptr l)
{
	sprite_t head;
	head=l->data;
  return head;
}

/* Return the next cel in list or NULL
 * */
list_ptr list_next(list_ptr l)
{
    list_ptr lnext=l;
    if (lnext->next!=NULL)
    {
        lnext=l->next;
        return lnext;
    }
    else
        return NULL;
}

/* Search the last cel of a list 
 *  Remove the cel from the list
 *  Return the associated sprite
 * */
sprite_t list_pop_sprite(list_ptr * l)
{
	  sprite_t dlast;
	   list_ptr current=*l;
	  if(current->next==NULL){
		  *l=NULL;
		  dlast=current->data;
	  }
	  else{
		  while (current->next->next!=NULL)  {
				current=current->next;
			}
		  dlast=current->next->data;
		  current->next=NULL;
	}
	  return dlast;
}

/* Remove the given cel in a list
 * */
void list_remove(list_ptr elt, list_ptr *l)
{
	list_ptr tmp=*l;
	if(*l==elt){
		*l=elt->next;
	}
	else{
		while(tmp->next!=elt){
			tmp=tmp->next;
		}
		tmp->next=tmp->next->next;
}
}

/* Wipe out a list. 
 *  Don't forget to sprite_free() for each sprite
 * */
void list_free(list_ptr l)
{
	list_ptr tmp=l;
	while(tmp!=NULL){
		sprite_free(tmp->data);
		tmp=tmp->next;
	}
	// l=NULL;
}
