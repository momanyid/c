#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

//create a node

struct Node* createNode(int value) {
    struct Node* newNode = malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;
    return newNode;
}

void insertAtBeginning(struct Node** head, int value) {
    struct Node* newNode = createNode(value);
    newNode->next = *head;
    *head = newNode;
}

void insertAtEnd(struct Node ** head, int value) {
    struct Node* newNode = createNode(value);
    if(*head==NULL) {
        *head=newNode;
        return;
    }
    struct Node* temp=*head;
    while(temp->next != NULL) {
        temp = temp->next;
    }
    temp->next=newNode;
}

void printlist(struct Node* head) {
    while(head != NULL) {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

void deleteFromBeginning(struct Node** head) {
    if(*head == NULL) return;
    struct Node* temp = *head;
    *head = temp->next;
    free(temp);
}

void deleteFromEnd(struct Node** head) {
    if(!*head) return;

    if(!(*head)->next) {
        free(*head);
        *head=NULL;
        return;
    }
    
    struct Node* temp=*head;
    while(temp->next->next) temp = temp->next;
    free(temp->next);
    temp->next = NULL;

}


int main() {
    struct Node* head = NULL;

    insertAtBeginning(&head, 10);
    insertAtBeginning(&head, 15);
    insertAtEnd(&head, 30);
    printlist(head);

    insertAtBeginning(&head, 35);
    printlist(head);

    deleteFromBeginning(&head);
    printlist(head);
    
    deleteFromEnd(&head);
    printlist(head);

    return 0;
}