#include <iostream>
#include <iomanip>
using namespace std;

class Event
{
    public:
        double speakerc, venuec; //cost of speakers and venue
        //num = number of people, dur = duration of event
        virtual double calculateCost(int num, double dur) = 0; 
};

class Workshop: public Event
{
    public:
        double calculateCost(int num, double dur)
        {
            venuec = num*100;
            speakerc = dur*50;
            return 1.2*(venuec+speakerc);
        }
};

class Conference: public Event
{
    public:
        double calculateCost(int num, double dur)
        {
            venuec = num*150;
            speakerc = dur*30;
            return 1.3*(venuec+speakerc);
        }
};

int main()
{
    int num, choice;
    double dur;
    
    Event *event;
    
    cin >> num >> dur >> choice;
    
    if (choice == 1)
        event = new Conference;
    else if (choice == 2)
        event = new Workshop;
    else
        cout << "Invalid Choice" << endl;
    
    double eventcost = event->calculateCost(num, dur);
    cout << "Event cost is " << eventcost <<endl;
}