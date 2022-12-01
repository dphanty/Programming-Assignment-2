#include "Person.h"
#include <string>

using namespace std;

Person::Person()
{
    m_name = "";
}

Person::~Person()
{

}


Person::Person(string name)
{
    m_name = name;
}

string Person::getName()
{
    return m_name;
}
