#include<stdio.h>
#include<stdlib.h>

typedef int ElementType;

typedef struct tagNode {
  ElementType data;
  struct tagNode* NextNode;
} Node;

Node* SLL_CreateNode(ElementType NewData) {
  Node* NewNode = (Node*)malloc(sizeof(Node));

  NewNode->data = NewData;
  NewNode->NextNode = NULL;

  return NewNode;
}

void free(void *memblock);

void SLLDestroyNode(Node* Node) {
  free(Node);
}

int main() {
  
}