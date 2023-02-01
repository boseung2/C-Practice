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

void SLL_RemoveNode(Node** Head, Node* Remove) {
  if(*Head == Remove) {
    *Head = Remove->NextNode;
  }
  else {
    Node* Current = *Head;

    while(Current != NULL && Current->NextNode != Remove) {
       Current = Current->NextNode;
    }

    if(Current != NULL) {
      Current->NextNode = Remove->NextNode;
    }
  }
}

void SLL_InsertAfter(Node* Current, Node* NewNode) {
  NewNode->NextNode = Current->NextNode;
  Current->NextNode = NewNode;
}

int main() {
  Node* List = NULL;
  Node* MyNode = NULL;

  SLL_AppendNode(&List, SLL_CreateNode(117));
  SLL_AppendNode(&List, SLL_CreateNode(119));
  SLL_AppendNode(&List, SLL_CreateNode(212));

  MyNode = SLL_GetNodeAt(List, 1);
  printf("%d\n", MyNode->data);

  SLL_RemoveNode(&List, MyNode);
  SLL_DestroyNode(MyNode);

  MyNode = SLL_GetNodeAt(List, 1);
  printf("%d\n", MyNode->data);

  SLL_InsertAfter(MyNode, SLL_CreateNode(311));

  MyNode = SLL_GetNodeAt(List, 2);
  printf("%d\n", MyNode->data);
}

// sizeof(Node) : 16
// sizeof(Node*) : 8
// printf("%ld\n", sizeof(Node));
// printf("%ld\n", sizeof(Node*));