#include "mp3.h"

//extern node_t *head;
void deleteNode(node_t *del){

 /* base case */
    if (head == NULL || del == NULL) 
        return; 
  
    /* If node to be deleted is head node */
    if ((strcmp(head->name,del->name) == 0) && (strcmp(head->title,del->title) == 0) && (strcmp(head->date,del->date) == 0) && (head->runTime == del->runTime))
        head = del->next; 
  
    /* Change next only if node to be deleted 
       is NOT the last node */
    if (del->next != NULL) 
        del->next->prev = del->prev; 
  
    /* Change prev only if node to be deleted  
       is NOT the first node */
    if (del->prev != NULL) 
        del->prev->next = del->next; 
  
    /* Finally, free the memory occupied by del*/
    free(del->date);
    free(del->title);
    free(del->name);
    free(del); 

}
//struct node_t *deleteArtist(char *name){
void deleteArtist(char *name){
/*node_t *temp;
temp = head;
node_t *previous = NULL;*/
 if (head == NULL){
          printf("List is Empty\n");
	  //return;
        }
	node_t *temp = head;
	node_t *next2;
        //temp = head;
        //temp->prev == NULL;
        while (temp != NULL){

          if(strcmp(temp->name, name) == 0){
            next2 = temp->next;
	    deleteNode(temp);
	    temp = next2;
          } else{
	    temp = temp->next;
           //temp->prev = temp;
	   // previous = temp;
            //temp = temp->next;
          }
        }
/*	free(temp->date);
	free(temp->title);
	free(temp->name);
	free(temp);
	free(next2->date);
	free(next2->title);
	free(next2->name);
	free(next2);*/
/*
        if(temp == head) {
          head = head->next;
        } else{
         temp->prev->next = temp->next;
       }

       if (temp == last) {
        last = temp->prev;
      } else{
        temp->next->prev = temp->prev;
      }
  */    
//      return temp;
      //return (char *)names;
  }
