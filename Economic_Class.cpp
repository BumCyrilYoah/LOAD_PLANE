#include "Economic_Class.h"
#include <iostream>
#include<vector>
#include<string>
#include<math.h>
#include<ctime>
#include<algorithm>
#include<cstdlib>
using namespace std;
Economic_Class::Economic_Class()
{
    //ctor
}
void Economic_Class::UserInformation(){
      //GetName:
      cout << "\t\t\t\t 1. Exclusive Services\n";
      cout << "\t\t\t\t 2. In-Flight Meals\n";
      cout<<"\t\t\t\t WELCOME  "<<endl;
      cout<<"\t\t\t\tENTER YOUR NAME"<<endl;
      //cin>>FC_UserName;
      cin.ignore();
      getline(cin,FC_UserName);
      //Getluggages:
      //CreateObject:
      Passenger *pass = new Passenger(FC_UserName);
      cout << "Passanger ID: " << pass->id << endl << "Passanger Name: " << pass->name << endl;
      pass->set_luggages(Passengers::Getluggages(2));
      cout << "Economic_CLASS";
      int sum = 0;
      for(int i = 0; i < 2; i ++) {
          cout << " " << pass->luggages[i];
          sum += pass->luggages[i];
     }
     cout << " " << sum;
      this->passengers.push_back(pass);
}


