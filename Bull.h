#pragma once
#include <string>

class Bull
{
private:
  unsigned int weight;
  unsigned int liftCapacity;
  std::string name;

public:
  Bull(unsigned int weight, unsigned int liftCapacity, std::string name);
  std::string to_string();
};
