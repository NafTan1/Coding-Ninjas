#include <bits/stdc++.h>
class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

class Queue
{
public:
    Node *head = NULL;
    Node *tail = NULL;
    int sz = 0;
    Queue()
    {
        // Implement the Constructor
    }

    /*----------------- Public Functions of Queue -----------------*/

    bool isEmpty()
    {
        // Implement the isEmpty() function
        return sz == 0;
    }

    void enqueue(int data)
    {
        // Implement the enqueue() function
        sz++;
        Node *newNode = new Node(data);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }

        tail->next = newNode;
        tail = newNode;
    }

    int dequeue()
    {
        // Implement the dequeue() function
        if (sz == 0)
            return -1;
        sz--;
        Node *deleteNode = head;
        int x = head->data;
        head = head->next;

        delete deleteNode;
        return x;
    }

    int front()
    {
        // Implement the front() function
        if (sz == 0)
            return -1;
        return head->data;
    }
};