#include <iostream>

using namespace std;

class Fish
{
    public:
        bool FreshWaterFish;

        void Swim()
        {
            cout<<((FreshWaterFish)?"Swims in lake":"Swims in sea")<<endl;
        }
};


class Tuna: public Fish
{
    public:
        Tuna()
        {
            FreshWaterFish = false;
        }
};

class Carp: public Fish
{
    public:
        Carp()
        {
            FreshWaterFish = true;
        }
};

int main()
{
    Carp myLunch;
    Tuna myDinner;

    cout << "Getting my food to swim" << endl;

    cout << "Lunch: ";

    myLunch.Swim();

    cout << "Dinner: ";
    myDinner.Swim();

    return 0;

}

*//////////////

Getting my food to swim
Lunch: Swim in lake
Dinner: Swim in sea

*/////////////
