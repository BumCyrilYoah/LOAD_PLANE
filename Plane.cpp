#include "Plane.h"
#include "Business_Class.h"
#include "Economic_Class.h"
#include "First_Class.h"
#include "Crew.h"
#include "Passengers.h"
#include <iostream>
#include<vector>
#include<string>
#include<math.h>
#include<ctime>
#include<algorithm>
#include <memory>
using namespace std;
Plane::Plane()
{
    //ctor
}
  void Plane::Menu() {
       Economic_Class Economic_ClassObject;
       First_Class First_ClassObject;
        Business_Class  Business_ClassObject;
          char option;
       unique_ptr<Passengers> passenger;
       while(true) {
          cout<<"\t\t\t\tWELCOME"<<endl;
          cout<<"\t\t\t\tPress 1 for first class "<<endl;
          cout<<"\t\t\t\tPress 2 for Business class "<<endl;
          cout<<"\t\t\t\tPress 3 for Economic class "<<endl;
          cin>>option;
          if(option == '1'){
               cout << "Current size" << First_ClassObject.GetTotalLuggage();
                    if(First_ClassObject.passengers.size() < 4) {
                              First_ClassObject.UserInformation();
                    } else {
                         cout << "First class full! Register for business please." << std::flush;
                    }
          }
          //  passenger = make_unique<First_Class>();
          else if(option == '2'){
               if(Business_ClassObject.passengers.size() < 10) {
                    Business_ClassObject.UserInformation();
               } else {
                    cout << "Bussiness class full! Register for business please." << std::flush;
               }
          }
          else if(option == '3'){
               if(Economic_ClassObject.passengers.size() < 200) {
                    Economic_ClassObject.UserInformation();
               } else {
                    cout << "Economic class full! Register for Economic please." << std::flush;
               }
          }
          else {
               cout<<"\t\t\t\tSORRY YOU ENTERED THE WRONG OPTION PLEASE TRY AGAIN"<<endl;
          }
       }
  }
