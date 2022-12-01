#include <string>
#include "Person.h"

using namespace std;

#ifndef STUDENT_H
#define STUDENT_H

class Student : public Person
{
    public:
        Student();
        virtual ~Student();
        Student(string name, string courses[], int size);
        string getCourses();

    protected:

    private:
       static const int m_maxCourses = 10;
       int m_taking;
       string m_courses[m_maxCourses];
};

#endif // STUDENT_H
