//
// Created by luca on 30.3.2021.
//

#ifndef ALGORITHMS_LINKEDLIST_H
#define ALGORITHMS_LINKEDLIST_H

#include<iostream>
#include<stdlib.h>

struct Node {
    int item;
    Node* next;
    Node(int x, Node* t)
    {
        item = x;
        next = t;
    }
};

typedef Node *link;

void LinkedList(char* first_node, char* second_node)
{
    int i;
    int N = atoi(first_node);
    int M = atoi(second_node);

    link t = new Node(1, 0);
    t->next = t;
    link x = t;

    for(i = 2; i <= N; i++)
    {
        x = (x->next = new Node(i, t));
    }

    while(x != x->next)
    {
        for(i = 1; i < M; i++)
        {
            x = x->next;
        }

        x->next = x->next->next;
    }

    std::cout << x->item << std::endl;
}

int LenghtList(Node *head)
{
    Node *curr = head;
    int ctn = 0;
    for(curr = head; curr != NULL; curr = curr->next)
    {
        ctn++;
        curr = curr->next;
    }

    return ctn;
}

struct Node *InsertNodeToHead(struct Node *head, int element)
{
    struct Node * temp;
    temp = (struct Node*)malloc(sizeof(struct Node));
    temp->item = element;
    temp->next = NULL;

    if(head == NULL)
    {
        head = temp;
        head->next = NULL;
    }
    else
    {
        temp->next = head;
        head = temp;
    }
    return head;
}

struct Node *InsertToTail(struct Node *head, int element)
{
    struct Node *temp;

    temp = (struct Node*)malloc(sizeof(struct Node));
    temp->item = element;
    temp->next = NULL;

    struct Node *curr = head;

    if(curr == NULL)
    {
        head = temp;
    }
    else
    {
        while(curr->next != NULL)
        {
            curr = curr->next;
            curr->next = temp;
        }
    }
    return head;
}

struct Node *InsertAnyWhere(struct Node *head, struct Node *in, int position)
{
    struct Node *pred = head;

    if(position <= 1)
    {
        in->next = head;
        return in;
    }

    while(--position && in != NULL) {
        in = in->next;
    }

    if(in == NULL)
    {
        return nullptr;
    }

    in->next = pred->next;
    pred->next = in;
    return head;
}

void *DeletingOperation(struct Node **head, int where, int position=NULL)
{
    struct Node *temp = nullptr;
    struct Node *current = *head;
    struct Node *prev  = nullptr;
    struct Node *att = nullptr;
    int ctn = 0;

    switch (where) {
        //head
        case 1:
            if(*head != nullptr)
            {
                temp = *head;
                *head = temp->next;
                free(temp);
            }
            break;
        //last

        case 2:
            if(*head != nullptr)
            {
                while(current->next) {
                    temp = current;
                    current = current->next;
                }

                temp->next = nullptr;
                free(temp);
            }
            break;
        case 3:
        default:
            if(*head != NULL)
            {
                prev = *head;

                if(position == 1)
                {
                    *head = (*head)->next;
                    free(prev);
                }
                else
                {
                    while(prev != NULL && ctn < position)
                    {
                        ctn++;
                        att = prev;
                        prev  = prev->next;
                    }
                    if(prev != NULL)
                    {
                        att->next = prev->next;
                        free(prev);
                    }
                }
            }
            break;
    }
}

#endif //ALGORITHMS_LINKEDLIST_H
