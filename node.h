#pragma once

class Node
{

private:
       int data;
       Node *next = nullptr;

public:
       Node(int data);
       void set_next(Node *node);
       Node *get_next(void);
       int get_data(void);
};