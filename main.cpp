#include <iostream>
#include "Bull.h"
#include "linkedList.h"

using namespace std;

int main()
{
  Bull boris(125, 2250, "Alfa");
  cout << boris.to_string() << endl;

  LinkedList list;
  list.add(20);
  list.add(45);
  cout << list.print() << endl;
  return 0;
}