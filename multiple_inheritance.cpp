/*

Using Multiple Inheritance to Model a Platypus That Is Part Mammal,
Part Bird, and Part Reptile

*/

#include <iostream>

using namespace std;

class Mammal
{
public:
    void FeedBabyMilk()
    {
        cout<<"Mammal: Baby says glug!"<<endl;
    }
};

class Reptile
{
public:
    void SpitVenom()
    {
        cout<<"Reptile: Shoo enemy! Spits venom!"<<endl;
    }
};

class Bird
{
public:
    void LayEggs()
    {
        cout<<"Bird: Laid my eggs, am lighter now!"<<endl;
    }
};

class Platypus: public Mammal,  public Bird, public Reptile
{
public:
    void Swim()
    {
        cout<<"Platypus: Voila, I can swim!"<<endl;
    }

};


int main()
{
    Platypus r;
    r.LayEggs();
    r.FeedBabyMilk();
    r.SpitVenom();
    r.Swim();
    return 0;
}

/*
Bird: Laid my eggs, am lighter now!
Mammal: Baby says glug!
Reptile: Shoo enemy! Spits venom!
Platypus: Voila, I can swim!
*/
