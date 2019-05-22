#include "linkedlist.h"
#include <iostream>
#include "node.h"

LinkedList::LinkedList()
{
    this->head = nullptr;
    this->tail = nullptr;
    this->length = 0;
}

void LinkedList::add(int value)
{
    Node node(value);
    if (head)
    {
        this->tail->set_next(&node);
        this->tail = &node;
    }
    else
    {
        this->head = &node;
        this->tail = &node;
    }
}

std::string LinkedList::print()
{
    std::string output = "";
    Node *node = head;
    if (head)
    {
        do
        {
            output.append(std::to_string(node->get_data()) + " ");
            node = node->get_next();
            std::cout << "head " + std::to_string(node->get_data()) << std::endl;
            std::cout << "tail " + std::to_string(tail->get_data()) << std::endl;
            std::cout << "head " + std::to_string(head->get_data()) << std::endl;
        } while (node != tail);
    }
    else
    {
        output.append("its empty");
    }