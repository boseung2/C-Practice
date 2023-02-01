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

void SLL_DestroyNode(Node* Node) {
  free(Node);
}

void SLL_AppendNode(Node** Head, Node* NewNode) {
  // Head가 없다면 NewNode를 Head로 지정한다.
  if((*Head) == NULL) {
    *Head = NewNode;
  }
  // Head가 있다면 Tail의 NextNode를 NewNode로 지정한다.
  else {
    Node* Tail = (*Head);

    while(Tail->NextNode != NULL) {
      Tail = Tail->NextNode;
    }    

    Tail->NextNode = NewNode;
  }
}

Node* SLL_GetNodeAt(Node* Head, int Location) {
  Node* Current = Head;
  
  while(Current != NULL && (--Location) >= 0) {
    Current = Current->NextNode;
  }

  return Current;
}

int main() {
  Node* List = NULL;

  SLL_AppendNode(&List, SLL_CreateNode(117));
  SLL_AppendNode(&List, SLL_CreateNode(119));
}

// sizeof(Node) : 16
// sizeof(Node*) : 8
// printf("%ld\n", sizeof(Node));
// printf("%ld\n", sizeof(Node*));