#include "Student.h"
#include <string>

using namespace std;

Student::Student()
{
    m_name = "";
    m_taking = 0;
}

Student::Student(string name, string courses[], int size)
{
    m_name = name;
    m_taking = size;
    
  for (int i=0; i<size; i++)
    {
        m_courses[i] = courses[i];
    }
}

Student::~Student()
{
}

string Student::getCourses()
{
    string courses;
    
  for (int i=0; i<m_taking; i++)
    {
        courses += m_courses[i] + " ";
    }
    return  courses;
}
