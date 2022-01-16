#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct student
{
    char name[100];
    int age;
    int year;
} student;

typedef struct node
{
    int data;
    struct node *next;
    struct node *prev;
} node;

node *head = NULL;
node *tail = NULL;



void createnode(node **newnode, int data)
{
    (*newnode) = (node *)malloc(sizeof(node));

    (*newnode)->data = data;
    (*newnode)->next = NULL;
    (*newnode)->prev = NULL;
}

void addnode(node **newnode, int data)
{
    if (head == NULL)
    {
        createnode(&head, data);
        tail = head;
    }
    else
    {
        createnode(&(*newnode), data);
        tail->next = (*newnode);
        (*newnode)->prev = tail;
        tail = (*newnode);
    }
}

void push(node *newnode)
{
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
    }
    else
    {
        head->prev = newnode;
        newnode->next = head;
        head = newnode;
    }
}

void insertafter(node *currnode, node *newnode)
{
    if (currnode->next == NULL)
    {
        newnode->prev = currnode;
        currnode->next = newnode;
        tail = newnode;
    }
    else
    {
        newnode->prev = currnode;
        newnode->next = currnode->next;
        currnode->next->prev = newnode;
        currnode->next = newnode;
    }
}

void deletenode(node* currnode)
{
    if(tail == currnode)
    {
        node* temp = currnode;
        tail = currnode->prev;
        tail->next = NULL;
        free(temp);

    }
    node* temp = currnode;
    currnode->prev->next = currnode->next;
    currnode->next->prev = currnode->prev;

    free(temp);
}

void print(node *start)
{
    if (start == NULL)
    {
        return;
    }
    else
    {
        printf("%d->", start->data);
        print(start->next);
    }
}

void emptyList()
{
    
    while(head != NULL)
    {
        node* temp = head;
        head = head->next;
        free(temp);
        
    }

}



int main()
{
    node *ob1;
    node *ob2;
    node *ob3;
    node *ob4;
    node *ob5;

    createnode(&ob1, 1);
    createnode(&ob2, 2);
    createnode(&ob3, 3);
    createnode(&ob4, 4);
    createnode(&ob5, 5);

    push(ob1);
    push(ob2);
    push(ob3);
    push(ob4);
    insertafter(ob4,ob5);

    

    deletenode(ob3);
    puts("");

    print(head);

    
    // how to delete end node
    // how to empty the list
}