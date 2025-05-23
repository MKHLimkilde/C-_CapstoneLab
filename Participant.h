/*
    Williams, Noah (Team Leader)

    Spring 2025
    CS A250 - C++ 2

    Participant
*/
#ifndef PARTICIPANT_H
#define PARTICIPANT_H

#include <string>

using namespace std;

class Participant
{
public:
    Participant(int id, string theFirstName, string theLastName);
    int getID() const { return id; };
    string GetFirstName() const { return firstName;  };
    string GetLastName() const { return lastName;  };
    bool operator<(Participant participant) { return getID() < participant.getID(); };

private:
    int id;
    string firstName;
    string lastName;
};
#endif
