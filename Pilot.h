#ifndef PILOT_H
#define PILOT_H
#include<cstdlib>
#include<string>
#include "Crew.h"

class Pilot: public Crew
{
public:
    Pilot();
    Pilot(std::string name);
protected:
private:
};

#endif // PILOT_H;

