#include <stdio.h>
#include "snode.h"
#include <string.h>
#include <stdlib.h>

typedef struct snode {
  //TODO: change str to dynamic allcoation
  void * data;
  struct snode *next;
  
}snode_t;

snode_t *snode_create(char *s) 
{   
    
    snode_t * space = (snode_t *) malloc (sizeof(snode_t));
   
    space -> data = (char *) malloc (strlen(s) * sizeof(char) + 1);
    strcpy(space -> data, s);
    space -> next = NULL;//TODO: implement snode_create, change the prototype to
 //match with header file
 //return node;
  return space;
}
void snode_destroy(snode_t * s) 
{
snode_t* snode = s;

 free(snode->data);
 free(s);
 //TODO: implement snode_destroy
 
}