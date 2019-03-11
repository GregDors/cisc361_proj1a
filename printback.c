#include "mp3.h"

//extern node_t *head;

void printRev(){
	node_t *temp;
	temp = head;
	if (temp == NULL){
		return;
	}
	while (temp->next != NULL){
		temp = temp->next;
	}
	printf("List in Reverse \n");
	while(temp != NULL){
		printf("%s-%s--%s--%d\n", temp->name, temp->title, temp->date, temp->runTime);
/*		free(temp->date);
		free(temp->title);
		free(temp->name);
		free(temp);*/
		temp = temp->prev;
	}
}
