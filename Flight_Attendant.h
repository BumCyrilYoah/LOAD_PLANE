#ifndef FLIGHT_ATTENDANT_H
#define FLIGHT_ATTENDANT_H
#include<cstdlib>
#include<string>
#include "Crew.h"

class Flight_Attendant: public Crew
{
public:
    Flight_Attendant(std::string name);
    unsigned long long int id;

protected:
    std::string name;
    private:
};
#endif // FLIGHT_ATTENDANT_H
