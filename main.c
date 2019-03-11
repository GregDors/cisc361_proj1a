#include "mp3.h"
#define  BUFFERSIZE 128

node_t *head;
//node_t *temp; should I create this inside of the main method or outside
node_t *NewNode(char *name, char *title, char *date, int run_Time);
void printFront();
void printRev();
void insert(char *name, char *title, char *date, int run_Time);
void deleteArtist(char *name);
void deleteNode(node_t *del);
void freeList();
int main()
{
  int i;
  int len;
  char buffer[BUFFERSIZE], c;
  //char *name = NULL;
  head = NULL;
  node_t *temp;
  node_t *last = NULL;

  do {
    printf("(1) - Add\n(2) - Delete\n(3) - Print Beginning to End\n(4) - Print End to Beginning\n(5) - Exit\nSelect one: ");
    scanf("%d",&i);
      switch(i)
      {
        case 1:
	//char name[BUFFERSIZE]; 
        printf("Enter an artist name: ");
	char artist[BUFFERSIZE];
	scanf("%s",artist);
	printf("name: %s\n", artist);
	//char title[BUFFERSIZE];
        printf("Enter the song title: ");
        char title[BUFFERSIZE];
	scanf("%s",title);
        printf("title: %s\n", title);

	//char date[BUFFERSIZE];
        printf("Enter the song date: ");
        char date[BUFFERSIZE];
	scanf("%s",date);
        printf("date: %s\n", date);

        printf("Enter the song time in seconds: ");
        int time;
        scanf("%d%c", &time, &c);

        char *artistptr = (char *) malloc(BUFFERSIZE);
        strcpy(artistptr, artist);
        char *titleptr = (char *) malloc(BUFFERSIZE);
        strcpy(titleptr, title);
        char *dateptr = (char *) malloc(BUFFERSIZE);
        strcpy(dateptr, date);

        insert(artistptr,titleptr,dateptr,time);

	free(dateptr);
	free(titleptr);
	free(artistptr);
        break;
        case 2: 
	printf("Enter the name of the artist you wish to delete: ");
	char name[BUFFERSIZE];
        scanf("%s", name);
       deleteArtist(name);

      break;
      case 3: printFront();
      break;
      case 4: printRev();
      break;
      return 0;
      default:
	printf("See You Later Space Cowboy\n");
      
      break;
    }
}while((i != 5) && (i < 6));
freeList();
return 0;

}
