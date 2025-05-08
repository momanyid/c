#include <stdio.h>
#include <stdlib.h>

// Define the structure for tree node
struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

//Create a new node
struct Node* createNode(int data) {
    struct Node* node = (struct Node*) malloc(sizeof(struct Node));
    node->data = data;
    node->left = node->right = NULL;
    return node;
}

//Inorder traversal: Left, Root, Right
void inorder(struct Node* root) {
    if (root == NULL) return;
    inorder(root->left);
    printf("%d ", root->data);
    inorder(root->right);
}

//Preorder traversal: Root, Left, Right
void preorder(struct Node* root) {
    if (root == NULL) return;
    printf("%d ", root->data);
    preorder(root->left);
    preorder(root->right);
}

//Postorder traversal: Left, Right, Root
void postorder(struct Node* root) {
    if (root == NULL) return;
    postorder(root->left);
    postorder(root->right);
    printf("%d ", root->data);
}

//BFS using Queue
void levelOrder(struct Node* root) {
    if (root == NULL) return;
    
    struct Node** queue = (struct Node**)malloc(sizeof(struct Node*) * 100);
    int front = 0, rear = 0;

    queue[rear++] = root;

    while (front < rear) {
        struct Node* current = queue[front++];
        printf("%d ", current->data);

        if (current->left != NULL) queue[rear++] = current->left;
        if (current->right != NULL) queue[rear++] = current->right;
    }

    free(queue);
}


int main() {
    struct Node* root = createNode(10);
    root->left = createNode(5);
    root->right = createNode(15);
    root->left->left = createNode(3);
    root->left->right = createNode(7);
    root->right->left = createNode(13);
    root->right->right = createNode(18);

    printf("Inorder: ");
    inorder(root);
    printf("\n");

    printf("Preorder: ");
    preorder(root);
    printf("\n");

    printf("Postorder: ");
    postorder(root);
    printf("\n");

    printf("Level Order: ");
    levelOrder(root);
    printf("\n");

    return 0;
}
