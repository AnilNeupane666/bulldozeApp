#include "Bull.h"

Bull::Bull(unsigned int weight, unsigned int liftCapacity, std::string name)
{
    this->weight = weight;
    this->liftCapacity = liftCapacity;
    this->name = name;
}

std::string Bull::to_string()
{
    return "Name : " + name + " weight: " + std::to_string(weight) + " liftCapacity: " + std::to_string(liftCapacity);
}