#include <stdio.h>
#include "IntNode.h"

/* TODO: Write recursive PrintLinkedList() function here. */
void PrintLinkedList(IntNode_struct* head)
{
    if(head==NULL)
    {
        return;
    }
    else{
        IntNode_PrintData(head);
        IntNode_struct* temp = head->next;
        PrintLinkedList(temp);
    }
}


// Create a new node
IntNode_struct* CreateNode(int value) {
   IntNode_struct* newNode = (IntNode_struct*)malloc(sizeof(IntNode_struct));
   newNode->dataVal = value;
   newNode->nextNodePtr = NULL;

   return newNode;
}

int main(void) {
   int size;
   int value;
   
   scanf("%d", &size);
   scanf("%d", &value);
   IntNode_struct* headNode = CreateNode(value); // Make head node as the first node
   IntNode_struct* lastNode = headNode;     // Node to add after
   IntNode_struct* newNode = NULL;          // Node to create

   // Insert the second and the rest of the nodes
   for (int n = 0; n < size - 1; ++n) {
      scanf("%d", &value);
      newNode = CreateNode(value);
      IntNode_InsertAfter(lastNode, newNode);
      lastNode = newNode;
   }

   // Call PrintLinkedList with node after head node
   PrintLinkedList(headNode);
   return 0;
}