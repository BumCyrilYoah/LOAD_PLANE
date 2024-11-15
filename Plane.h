#ifndef PLANE_H
#define PLANE_H
using namespace std;
class Plane
{
    public:
        Plane();
        int choice;
        friend class First_Class;
        friend void BoardingType();
        void Menu();
        friend class Economic_Class;
        friend class Business_Class;
        friend class Passengers;
        friend class Crew;
    protected:
    private:
};
#endif // PLANE_H
