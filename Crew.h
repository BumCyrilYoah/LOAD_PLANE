#include "Plane.h"
#ifndef CREW_H
#define CREW_H
#include <vector>
#include <string>
class Crew {
    public:
        int Crewchoice;
        Crew(std::string name);
        Crew();
        friend void BoardingType();        
        friend Plane;
        unsigned long long int id;
        std::string name;

        void add_pilot(Crew* pilot);
        void add_attendant(Crew* pilot);
        bool pilots_full() const;
        bool attendants_full() const;
        void Menu();
        void GetPilot();
        void GetAttendant();

    protected:
        vector<Crew*> pilots;
        vector<Crew*> attendants;
    private:
};

#endif // CREW_H
//flight attendant <= 6, pilot <= 2