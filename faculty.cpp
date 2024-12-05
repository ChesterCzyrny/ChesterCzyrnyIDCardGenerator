#include "faculty.h"

Faculty::Faculty() : User(), Person(){} // Constructor

void Faculty::setAttributes(const QString &name, const QString &college, const QString &positionOrId, const QString &year) // Overrides base class to set attributes
{
    fullName = name;
    personCollege = college;
    position = positionOrId;
    yearEmployed = year;
}

// Getters
QString Faculty::getName() { return fullName; }
QString Faculty::getCollege() { return personCollege; }
QString Faculty::getPosition() { return position; }
QString Faculty::getYear() { return yearEmployed; }

Faculty::~Faculty() {} // Destructor

