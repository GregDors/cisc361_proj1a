#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

typedef struct node
{
  char *name;
  char *title;
  char *date; //choose how I want to store this
  int runTime;
  struct node *next;
  struct node *prev;
} node_t;


node_t *head;
node_t *last;
node_t *NewNode(char *name, char *title, char *date, int run_Time);
void printFront();
void printRev();
void insert(char *name, char *title, char *date, int run_Time);
void deleteArtist(char *name);
void deleteNode(node_t *del);
void freeList();
