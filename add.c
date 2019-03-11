#include "mp3.h"

//extern node_t *head;

node_t *NewNode(char *name, char *title, char *date, int run_Time){

  node_t *mp3 = (node_t *) malloc(sizeof(node_t));        // malloc space for MP3
/*  mp3->name = (char *) malloc(strlen(name) + 1);  // malloc space for name
  strcpy(mp3->name, name);                        // "assign" name via copy
  mp3->title = (char *) malloc(strlen(title) + 1); //malloc space for title
  strcpy(mp3->title, title);                      //"assign" title via copy
  mp3->date = (char *) malloc(strlen(date) + 1);
  strcpy(mp3->date, date);*/
  mp3->name = (char *)malloc(strlen(name)+1);
  strcpy(mp3->name,name);
  mp3->title = (char *)malloc(strlen(title)+1);
  strcpy(mp3->title, title);
  mp3->date = (char *)malloc(strlen(date)+1);
  strcpy(mp3->date, date);
  mp3->runTime = run_Time;                                // assign data value should this be run time or something else?
  mp3->next = NULL;
  mp3->prev = NULL;
  return (mp3);

  /*free(mp3);
  free(mp3->name);
  free(mp3->title);
  free(mp3->date);*/
  free(mp3->date);
  free(mp3->title);
  free(mp3->name);
  free(mp3);
}

void insert(char *name, char *title, char *date, int run_Time){
  node_t *temp;
  node_t *newMP3; 
  newMP3 = NewNode(name,title,date,run_Time); 
  temp = head;
  if (temp == NULL)
  {
    head = newMP3;               // add the first MP3;
  }
  else
  {
    //temp = head;
    while (temp->next != NULL){
      temp = temp->next;
    }
    temp->next = newMP3;         // append to the tail/end
    newMP3->prev = temp;
    newMP3->next = NULL;        //is this necessary
  }
/*  free(newMP3);
  free(newMP3->name);
  free(newMP3->title);
  free(newMP3->date);*/
/*
  free(newMP3->date);
  free(newMP3->title);
  free(newMP3->name);
  free(newMP3);*/
}

