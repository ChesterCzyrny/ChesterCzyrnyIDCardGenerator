#include "student.h"

Student::Student() : User(), Person() {} // Constructor

void Student::setAttributes(const QString &name, const QString &college, const QString &positionOrId, const QString &year) // Overrides base class to set attributes
{
    fullName = name;
    personCollege = college;
    idNumber = positionOrId;
    gradYear = year;
}

// Getters
QString Student::getName() { return fullName; }
QString Student::getCollege() { return personCollege; }
QString Student::getId() { return idNumber; }
QString Student::getYear() { return gradYear; }

Student::~Student() {} // Destructor
