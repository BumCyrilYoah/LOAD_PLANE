#ifndef PASSENGERS_H
#define PASSENGERS_H
#include <vector>
#include "Plane.h"
#include "Passenger.h"
#include<string>
using namespace std;
class Passengers
{
    public:
         string FC_UserName;
      int FC_UserID;
      float GetTotalLuggage() const;
    Passengers();
     virtual ~Passengers();
   virtual void UserInformation() = 0;
    void PassengersMenu();
    bool is_full() const;
    friend Plane;
    static float* Getluggages(int num);
    protected:
         vector<Passenger*> passengers;
         string name;
         int maxsize;
    private:

};
#endif // PASSENGERS_H
