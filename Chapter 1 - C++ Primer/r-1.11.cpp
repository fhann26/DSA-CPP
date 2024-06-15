/* Source code for Chapter 1 exercise: Reinforcement 1.11*/

#include <iostream>
#include <string>

class Flower
{
    private:
    std::string fname;
    int fpetal;
    float fprice;

    public:
    // This is constructor for the flower class
    Flower() = default;
    // These are setter functions to set the name, the number of petals, and price of flower class
    void setFlowerName(std::string flowerName)
    {
        fname = flowerName;
    }
    void setFlowerPetalNumber(int petalNumber)
    {
        fpetal = petalNumber;
    }
    void setFlowerPrice(float flowerPrice)
    {
        fprice = flowerPrice;
    }
    // These are getter functions to get the name, the number of petals, and price of flower class
    std::string getFlowerName()
    {
        return fname;
    }
    int getFlowerPetalNumber()
    {
        return fpetal;
    }
    float getFlowerPrice()
    {
        return fprice;
    }
};