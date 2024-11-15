#ifndef ECONOMIC_CLASS_H
#define ECONOMIC_CLASS_H
#include<string>
#include "Passengers.h"
using namespace std;
class Economic_Class: public Passengers{
    public:
         friend class Plane;
         friend class First_Class;
         friend class Business_Class;
        Economic_Class();
        int MaxnumberOfEconomyPersons[200];
           float maxWeight;
           int EconomyLuggage();
           void UserInfo();
           int EconomyExtraLuggage();
           int EconomytotalLuggage();
           float SFirstWeight;
           float SSecondWeight;
           float EconomytotalWeight;
           virtual void UserInformation();
           int maxsize = 4;
    protected:
      string Eco_UserName;
      int Eco_UserID;
    private:
};

#endif // ECONOMIC_CLASS_H
