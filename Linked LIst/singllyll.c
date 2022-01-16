#include<stdio.h>
#include<stdlib.h>

typedef struct Node_struct
{
    int data;
    struct Node_struct* next;

    
}Node;



void createnode(Node* newnode,int data)
{
    newnode->data=data;
    newnode->next=NULL;

}

void addNodeafter(Node* thisNode,Node* newNode)
{
    if(thisNode->next==NULL)
    {
        thisNode->next=newNode;
    }
    else
    {
        newNode->next=thisNode->next;
        thisNode->next=newNode;
    }
}

void printNodes(Node* Head)
{
    Node* tempnode = NULL;
    tempnode = Head;
    while (tempnode!=NULL)
    {
        printf("%d,",tempnode->data);
        tempnode = tempnode->next;
    }
    
    

}
void sort_list(Node* head,int size)
{
    Node* s = head;
    Node* end = NULL;
    
    for(int i=0;i<size;i++)
    {
        s = head;
        while(s->next != end)
        {
            if(s->data>s->next->data)
            {
                int temp = s->data;
                s->data = s->next->data;
                s->next->data = temp;
            }
            s = s->next;
            
        }
        end = s;
    }

    
}
int size(Node* head)
{
    int count = 0;
    Node* temp = head;
    while(temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}
Node* merging(Node* head1,Node* head2)
{
    Node* i = head1;
    Node* j = head2;
    Node* start  = NULL;
    if(i->data<j->data)
    {
        start = i;
        i = i->next;
    }
    else
    {
        start = j;
        j = j->next;
    }
    Node* temp = start;
    while(i != NULL&&j !=NULL)
    {
        if(i->data<j->data)
        {
            temp->next = i;
            i = i->next;
            temp = temp->next;
        }
        else
        {
            temp->next = j;
            j= j->next;
            temp = temp->next;

        }
        
    }
    if(i != NULL)
    {
        temp->next = i;
    }
    else{
        temp->next = j;
    }

    return start;

}

Node* reverse(Node* head)
{
    Node* reofnode = head->next;
    Node* lastnode = head;
    lastnode->next = NULL;
    while(reofnode->next!=NULL)
    {
        Node* temp = reofnode->next;
        reofnode->next = lastnode;
        lastnode = reofnode;
        reofnode = temp;
    }
    reofnode->next = lastnode;
    return reofnode;

}


int main()
{
    Node* Head = NULL;
    Node* ob1 = NULL;
    Node* ob2 = NULL;
    Node* tail = NULL;

    //Creating head and tail

    Head = (Node*)malloc(sizeof(Node));
    createnode(Head,3);
    tail = (Node*)malloc(sizeof(Node));
    createnode(tail,32);
    addNodeafter(Head,tail);

    ob1 = (Node*)malloc(sizeof(Node));
    createnode(ob1,6);
    addNodeafter(Head,ob1);


    ob2 = (Node*)malloc(sizeof(Node));
    createnode(ob2,7);
    addNodeafter(ob1,ob2);
    printNodes(Head);
    printf("\n");


    printf("\n size:%d\n",size(Head));


    

    

    




    Node* Head2 = NULL;
    Node* ob11 = NULL;
    Node* ob22 = NULL;
    Node* tail2 = NULL;

    Head2 = (Node*)malloc(sizeof(Node));
    createnode(Head2,0);
    tail2 = (Node*)malloc(sizeof(Node));
    createnode(tail2,19);
    addNodeafter(Head2,tail2);

    ob11 = (Node*)malloc(sizeof(Node));
    createnode(ob11,4);
    addNodeafter(Head2,ob11);


    ob22 = (Node*)malloc(sizeof(Node));
    createnode(ob22,7);
    addNodeafter(ob11,ob22);


    
    puts("");

    printNodes(reverse(Head));







    

}

