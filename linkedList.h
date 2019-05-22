#pragma once
#include <string>
#include "node.h"

class LinkedList
{
private:
  Node *head;
  Node *tail;
  int length;

public:
  LinkedList();

public:
  void add(int value);

public:
  void reverse();

public:
  std::string print();
};
