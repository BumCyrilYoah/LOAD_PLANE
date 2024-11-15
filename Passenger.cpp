#include "Passenger.h"
#include <string>
#include <cmath>

Passenger::Passenger(std::string name):name(name), luggages(nullptr)
{
     luggages = new float[4];
     this->id = 0;
     for(int i = 0; i < name.size(); i ++) {
          this->id += (unsigned long long int) (((int)name[i] - (int) 'A') * pow(52, i));
     }
}
void Passenger::set_luggages(float* siz) {
     this->luggages = siz;
}
