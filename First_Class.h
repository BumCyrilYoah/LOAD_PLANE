#ifndef FIRST_CLASS_H
#define FIRST_CLASS_H
#include<string>
#include "Passengers.h"
using namespace std;

class First_Class: public Passengers{
    public:
         // luggage managers
         float Getluggages();
         //friend classes
         friend class Plane;
         friend class Economic_Class;
         friend class Business_Class;
         //  constructor
        First_Class();
          // inherited classes
           virtual void UserInformation();
           // size checker
           int maxsize;
    protected:
      string B_UserName;
      int B_UserID;
    private:
};

#endif // FIRST_CLASS_H
