#include <string>
#include "Person.h"

#ifndef PROFESSOR_H
#define PROFESSOR_H


class Professor : public Person
{
    public:
        Professor();
        virtual ~Professor();
        Professor (string name, string office);
        string getOffice();

    protected:

    private:
        string m_office;
};

#endif // PROFESSOR_H
