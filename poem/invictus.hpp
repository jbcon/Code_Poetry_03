#include <string>
#include <vector>
#include <cmath>

using namespace std;

class Head{
public:
    bool isUnbowed(){return true;}
    bool isBloody(){return true;}
};


class Person{
public:
    bool winced(){return false;}
    bool cried(string how){return false;}

    bool masterOf(string ofWhat){}
    bool captainOf(string ofWhat){}

    Head head;
    string fate;
    string soul;
    bool unafraid;
};


class Place{
public:
    Place(string trait, ...){}
};

class God{
public:
    void thank(string forWhat){}
};

std::vector<God> gods;

class Night{
public:
    Night(){}
    bool covers(Person p){return true;}
    string blackness;
};

class Obstacle {
public:
    bool isStrait(){}
    bool isCharged(string withWhat){}
    bool bludgeoning(Person p){return true;}
    void loom(float loc){}
};

class Shade{
public:
    Obstacle horror;
    bool find(bool what){return true;}
};

Shade shade;
Shade menace_of_the_years;
Obstacle gate;
Obstacle scroll;
Obstacle chance;
bool circumstance = false;

void out_from(bool c){}
float beyond(Place p){return INFINITY;}
