#include <string>
using namespace std;

#ifndef PERSON_H
#define PERSON_H

class Person
{
    public:
        Person();
        virtual ~Person();
        Person(string name);
        string getName();

    protected:
        string m_name;

    private:

};

#endif // PERSON_H
