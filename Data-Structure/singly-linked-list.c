#include<stdio.h>
#include<stdlib.h>

typedef int ElementType;

typedef struct tagNode {
  ElementType data;
  struct tagNode* NextNode;
} Node;

Node* SLL_CreateNode(ElementType NewData) {
  printf("%ld\n", sizeof(Node)); // 16
  printf("%ld\n", sizeof(Node*)); // 8

  Node* NewNode = (Node*)malloc(sizeof(Node));

  NewNode->data = NewData;
  NewNode->NextNode = NULL;

  return NewNode;
}

void SLLDestroyNode(Node* Node) {
  free(Node);
}

int main() {
  Node* MyNode = SLL_CreateNode(117);
}