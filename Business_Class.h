#include "Passengers.h"
#ifndef BUSINESS_CLASS_H
#define BUSINESS_CLASS_H
#include<string>
using namespace std;
 class Business_Class: public Passengers{
    public:
         // friend classes
         friend class Plane;
         friend class First_Class;
         friend class Economic_Class;
         // luggage handler
           float maxWeight;
           // business constructor
           Business_Class();
           // inherited function
           virtual void UserInformation();
    protected:
      string B_UserName;
      int B_UserID;
    private:
};
#endif // BUSINESS_CLASS_H
