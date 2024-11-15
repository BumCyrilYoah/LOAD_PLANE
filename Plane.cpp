#include <iostream>
#include<vector>
#include<string>
#include<math.h>
#include<ctime>
#include<algorithm>
#include <memory>


#include "Plane.h"
#include "Business_Class.h"
#include "Economic_Class.h"
#include "First_Class.h"
#include "Crew.h"
#include "Passengers.h"


#include "UI.h"

using namespace std;
Plane::Plane()
{
}
void Plane::Menu() {
    Economic_Class Economic_ClassObject;
    First_Class First_ClassObject;
    Business_Class  Business_ClassObject;
    unique_ptr<Passengers> passenger;
    while(true) {

        std::string opts[] = {"First Class", "Business class", "Economic class"};
        int option = Console::ask_options("What class are you?", opts, 3);
        switch(option) {
        case 0:
            cout << "Current size" << First_ClassObject.GetTotalLuggage();
            if(First_ClassObject.passengers.size() < 4) {
                First_ClassObject.UserInformation();
            } else {
                cout << "First class full! Register for business please." << endl;
            }
            break;
        case 1:
            if(Business_ClassObject.passengers.size() < 10) {
                 Business_ClassObject.UserInformation();
            } else {
                 cout << "Bussiness class full! Register for economic please." << endl;
            }
            break;
        case 2:
            if(Economic_ClassObject.passengers.size() < 200) {
                 Economic_ClassObject.UserInformation();
            } else {
                 cout << "Economic class full! Sorry ¯\\_(ツ)_/¯." << endl;
            }
            break;
        default:
            cout << "Program Error(Wrong input)";
        }
    }
}
