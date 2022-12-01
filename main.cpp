#include <iostream>
#include "Person.h"
#include "Student.h"
#include "Professor.h"
#include <string>

using namespace std;

int main()
{
    Person me("Daniel");
    cout << me.getName() << endl;

    string  myCourses [] =  {"CS", "MATH", "ART", "PHIL"};
    int numberofelements = sizeof(myCourses)/sizeof(myCourses[0]);
    
    Student you("Brent", myCourses, numberofelements);
    cout << you.getName() << " " << you.getCourses() << endl;

    Professor prof("Vermilyer", "STAC");
    cout << prof.getName() << " " << prof.getOffice() << endl;

    return 0;
}
