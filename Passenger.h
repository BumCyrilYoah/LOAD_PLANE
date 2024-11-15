#ifndef PASSENGER_H
#define PASSENGER_H
#include <string>


class Passenger
{
     public:
          Passenger(std::string name);
          unsigned long long int id;
          std::string name;
          float* luggages;
          void set_luggages(float* siz);
     protected:

     private:
};

#endif // PASSENGER_H
