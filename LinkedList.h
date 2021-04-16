//
// Created by luca on 30.3.2021.
//

#ifndef ALGORITHMS_LINKEDLIST_H
#define ALGORITHMS_LINKEDLIST_H

#include<iostream>
#include<stdlib.h>

struct node {
    int item;
    node* next;
    node(int x, node* t)
    {
        item = x;
        next = t;
    }
};

typedef node *link;

void LinkedList(char* first_node, char* second_node)
{
    int i;
    int N = atoi(first_node);
    int M = atoi(second_node);

    link t = new node(1, 0);
    t->next = t;
    link x = t;

    for(i = 2; i <= N; i++)
    {
        x = (x->next = new node(i, t));
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

#endif //ALGORITHMS_LINKEDLIST_H
