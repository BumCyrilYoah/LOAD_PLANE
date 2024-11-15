#include <iostream>
#include<vector>
#include<string>
#include<math.h>
#include<ctime>
#include<algorithm>
#include "Plane.h"
#include "Crew.h"
#include "Passengers.h"
#include "Business_Class.h"
#include "Economic_Class.h"
#include "First_Class.h"
#include "Flight_Attendant.h"
#include "Pilot.h"
using namespace std;
void MainFunction();
void BoardingType();


int main()
{
     int FirstClassMaxWeight=1000;
     int BusinessClassMaxWeight=2000;
      int EconomicClassMaxWeight=3000;
     cout<<"\t\t\t\tFIRST_CLASS_SEGMENT "<<FirstClassMaxWeight<<endl;
     cout<<"\t\t\t\tBUSINESS_CLASS_SEGMENT "<< BusinessClassMaxWeight<<endl;
     cout<<"\t\t\t\tECONOMICS_CLASS_SEGMENT "<<EconomicClassMaxWeight<<endl;
     BoardingType();
     Crew CrewObject;
 // cout<<MainFunction()<<endl;
    Plane PlaneObject;
    PlaneObject.Menu();
    Business_Class businessPassenger;
    First_Class firstPassenger;
    Economic_Class economicPassenger;

    // Use base class pointers to access derived class functions
    Passengers* passenger1 = &businessPassenger;
    Passengers* passenger2 = &firstPassenger;
    Passengers* passenger3 = &economicPassenger;

    // Call the displayInfo function
    passenger1->UserInformation();  // Output: Business Class Passenger info
    passenger2->UserInformation();  // Output: First Class Passenger info
    passenger3->UserInformation();  // Output: Economic Class Passenger info

     return 0;

}
 void BoardingType(){
      Plane PlaneObject;
    BoardingType:
    Crew crew;
    int choice;
    cout << "Welcome Sir/Madam, Where are we going?\n1) Crew Member\n2) Passanger\n> ";
    cin >> choice;
    choice--;
  if(choice == 0){
            crew.Menu();
   }
   else if(choice == 1){
       PlaneObject.Menu();
   }
   else {
      cout<<"\t\t\tSORRY YOU ENTERED THE WRONG OPTION PLEASE TRY AGAIN"<<endl;
       goto BoardingType;
   }
 }


