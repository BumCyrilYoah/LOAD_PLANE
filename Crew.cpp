#include "Crew.h"
#include "Pilot.h"
#include "Flight_Attendant.h"
#include <iostream>
#include<vector>
#include<string>
#include<math.h>
#include<ctime>
#include<algorithm>
using namespace std;

Crew::Crew()
{}

Crew::Crew(std::string name):name(name)
{
    this->id = 0;
    for(int i = 0; i < name.size(); i ++) {
         this->id += (unsigned long long int) (((int)name[i] - 65) * pow(52, i));
    }
}
void Crew::Menu()
{
    while(true) {
        cout << "Welcome to the crew!\n Where do you want to register?" << endl;
        cout << "1) Pilot\n2) Flight Attendant" << endl;
        char choice;
        cin >> choice;
        switch(choice) {
        case '1':
               if(!this->pilots_full()) {
                    this->GetPilot();
               } else {
                    cout << "No Further Pilot Entry Allowed!" << endl;
               }
            break;
        case '2':
            if(!this->attendants_full()) {
                 this->GetAttendant();
            } else {
                 cout << "Attendance Full!" << endl;
            }
            break;
        default:
            cout << "Wrong entery, enter either 1, or 2" << endl;
            break;
        }
    }
    
}

void Crew::add_pilot(Crew* pilot) {
     pilots.push_back(pilot);
}
void Crew::add_attendant(Crew* attendant) {
     attendants.push_back(attendant);
}


bool Crew::pilots_full() const {
     return pilots.size() >= 2;
}
bool Crew::attendants_full() const {
     return attendants.size() >= 6;
}



void Crew::GetPilot() {
    string name;
    Pilot* pilot = nullptr;
    cout << "ENTER YOUR NAME SIR/MADAM: ";
    cin.ignore();
    getline(cin, name);
    pilot = new Pilot(name);
    cout << "Name: " << name << endl << "Id: " << pilot->id << endl;
    cout << "PILOT 0 0" << endl;
    add_pilot(pilot);
}

void Crew::GetAttendant() {
    string name;
    Flight_Attendant* attendant = nullptr;
    cout << "ENTER YOUR NAME SIR/MADAM: ";
    cin.ignore();
    getline(cin, name);
    attendant = new Flight_Attendant(name);
    cout << "Name: " << name << endl << "Id: " << attendant->id << endl;
    cout << "FLIGHT_ATTENDANT 0 0" << endl;
    add_attendant(attendant);
}