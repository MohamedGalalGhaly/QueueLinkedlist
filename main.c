#include <stdio.h>
#include <stdlib.h>

typedef struct NODE
{
    int data;
    struct Node *link;
}Node;

void Enqueue(int num);
void Dqueue();
void print();

Node *head = NULL;
Node *end = NULL;

int main()
{
    Enqueue(8);
    Enqueue(5);
    Enqueue(3);
    Enqueue(2);

    print();

    Dqueue();
    Dqueue();
    Dqueue();
    //Dqueue();

    print();

    return 0;
}

void Enqueue(int num)

{
    Node *newNode = (Node*) malloc(sizeof(Node));

    if (head == NULL && end == NULL)
    {
        head = end = newNode;
        newNode->data = num;
        newNode->link = NULL;
    }

    else
    {
        end->link = newNode;

        newNode->data = num;
        newNode->link = NULL;

        end = newNode;
    }
}

void Dqueue ()
{
    Node *temp = head;
    if (head == NULL)
    {
        return;
    }

    if (head == end)
    {
        head = end = NULL;
    }
    else
    {
        head = head->link;

    }

    free(temp);
}

void print ()

{
    if (head == NULL && end == NULL)
        return;

    else
    {
        Node *temp = head;
        while (temp != end)
        {
            printf("%i\n", temp->data);
            temp = temp->link;
        }

        printf("%i\n", end->data);

    }
}












