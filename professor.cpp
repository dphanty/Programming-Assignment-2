#include "Professor.h"
#include <string>

using namespace std;

Professor::Professor()
{
    m_office = "";
}

Professor::Professor(string name, string office)
{
    m_name = name;
    m_office = office;
}

Professor::~Professor()
{
}

string Professor::getOffice()
{
    return  m_office;
}
