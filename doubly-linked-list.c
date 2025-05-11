#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *prev;
    struct Node *next;
}
;
//create node
struct Node *createNode(int data) {
    struct Node *newNode = malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Not enough memory\n");
        exit(1);
    }
    newNode -> data = data;
    newNode -> prev = NULL;
    newNode -> next = NULL;
    return newNode;
}

void insertEnd(struct Node** head, int data) {
    struct Node* newNode = createNode(data);
    if(!*head) {
        *head = newNode;
        return;
    }
    struct Node* temp = *head;
    while(temp->next) temp = temp->next;
    temp->next = newNode;
    newNode -> prev = temp;
}

void deleteEnd(struct Node** head) {
    if(!*head) return;
    struct Node* temp = *head;
    if(!temp->next) {
        free(temp);
        *head = NULL;
        return;
    }
    while(temp->next) temp=temp->next;
    temp->prev->next = NULL;
    free(temp);
}

void printForward(struct Node* head) {
    while(head) {
        printf("%d <-> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

void printBackward(struct Node* head) {
    if(!head) return;
    while (head -> next) head = head-> next;
    while (head) {
        printf("%d <-> ", head->data);
        head = head->prev;
    }
    printf("NULL\n");
}


int main() {
    struct Node* head = NULL;
    insertEnd(&head, 10);
    insertEnd(&head, 25);
    insertEnd(&head, 25);
    printForward(head);
    printBackward(head);
    deleteEnd(&head);
    printForward(head);
    
}