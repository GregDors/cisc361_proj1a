#include "mp3.h"

//extern node_t *head;

void printFront()
{
  node_t *temp;
  int  i = 0;

  temp = head;
  while (temp != NULL) {
    printf("%d. %s-%s--%s--%d\n", ++i, temp->name, temp->title, temp->date, temp->runTime);
/*    free(temp->date);
    free(temp->title);
    free(temp->name);
    free(temp);*/
    temp = temp->next;
  }
}
