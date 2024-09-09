/****************************************************************

    Following is the class structure of the Node class:

        class Node
        {
        public:
            int data;
            Node *next;
            Node()
            {
                this->data = 0;
                next = NULL;
            }
            Node(int data)
            {
                this->data = data;
                this->next = NULL;
            }
            Node(int data, Node* next)
            {
                this->data = data;
                this->next = next;
            }
        };


*****************************************************************/

class Stack
{

public:
    Node *head = NULL;
    int sz = 0;
    Stack()
    {
        // Write your code here
    }

    int getSize()
    {
        return sz;
    }

    bool isEmpty()
    {
        return sz == 0;
    }

    void push(int data)
    {
        // Write your code here
        sz++;
        Node *newNode = new Node(data);
        if (head == NULL)
        {
            head = newNode;
            return;
        }
        newNode->next = head;
        head = newNode;
    }

    void pop()
    {
        // Write your code here
        if (head == NULL)
        {
            return;
        }
        sz--;
        Node *tmp = head;
        head = head->next;
        tmp->next = NULL;
        free(tmp);
    }

    int getTop()
    {
        // Write your code here
        if (head == NULL)
            return -1;
        return head->data;
    }
};