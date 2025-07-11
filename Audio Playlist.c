#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct Node{
    char song[50];
    struct Node* next;
};
struct Node* head=NULL;
/*struct Node* create(char song[]){
    struct Node* newNode=(struct Node*)malloc(sizeof(struct Node));
    strcpy(newNode->song,song);
    newNode->next=NULL;
    return newNode;
}*/
void add(char song[]){
    struct Node* newNode=(struct Node*)malloc(sizeof(struct Node));
    strcpy(newNode->song,song);
    newNode->next=head;
    head=newNode;
}
void display(){
    struct Node* temp=head;
    while(temp!=NULL){
        printf("%s",temp->song);
        temp=temp->next;
    }
    printf("NULL");
}
int main(){
    int choice;
    char songname[100];
    printf("Enter a choice:");
    scanf("%d",&choice);
    printf("Enter song name:\n");
    for(int i=0;i<=choice;i++){
        fgets(songname,sizeof(songname),stdin);
        add(songname);
    }
    printf("Songs in your Plalist:\n");
    display();
}
