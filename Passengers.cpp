#include "Passengers.h"
#include<iostream>
#include<vector>
#include<string>
#include<math.h>
#include<ctime>
#include<algorithm>
#include <memory>
using namespace std;
Passengers::Passengers()
{
}
Passengers::~Passengers() {
}
float Passengers::GetTotalLuggage() const {
     float total = 0;
     for(Passenger* passenger:passengers) {

          for(int i = 0; i < (sizeof(passenger->luggages) / sizeof(float)); i++){
                    // (sizeof(passenger->luggages) / sizeof(float))
               total+=passenger->luggages[i];
          }
     }
     return total;
}


bool Passengers::is_full() const {
     cout << this->passengers.size() << ">=" << this->maxsize << endl;
     return this->passengers.size() >= this->maxsize;
}

float* Passengers::Getluggages(int num){
     float *luggages = new float[num];
     for(int i = 1; i <= num; i++) {
          cout<< "ENTER LOGGAGE NUMBER " << i << ": ";
          cin >> luggages[i-1];
          if(!(luggages[i-1] <= 30.0f || i > 2)){
               cout << "LUGGAGE SIZE SHOULD BE LOWER THAN 30kg!" << endl;
               i--;
          }
     }
     return luggages;
}
