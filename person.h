#ifndef PERSON_H
#define PERSON_H

#include "user.h"
#include <QString>

class Person : public virtual User { // Person class inherits from User base class
protected:
    QString personCollege; // Define attribute for college

public:
    Person(); // Constructor

    virtual ~Person(); // Deconstructor
};

#endif
