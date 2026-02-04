#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Node
{
    int data;
    Node *next;
    Node(int val)
    {
        data = val;
        next = NuLL;
    }
};

calss LL
{
    Node *head;
    Node *tail;

public:
    LL()
    {
        head = tail = NULL;
    }

    void push_back(int val)
    {
        Node *newNode = new Node(int val);
        Node newNode(val);
    }
};
int main()
{

    return 0;
}