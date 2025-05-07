/*
    Williams, Noah (Team Leader)

    Spring 2025
    CS A250 - C++ 2

    Workshop Hub
*/
#ifndef PARTICIPANT_H
#define PARTICIPANT_H

#include <string>

using namespace std;

class Participant
{
    public:
        Participant(int id, string theFirstName, string theLastName);
        int getID() const;
        string GetFirstName() const;
        string GetLastName() const;
        bool operator<(Participant participant);

    private:
        int id;
        string firstName;
        string lastName;
};
#endif
