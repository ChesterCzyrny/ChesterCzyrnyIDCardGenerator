#ifndef USER_H
#define USER_H

#include <QString>

class User { // Abstract base class "User"

protected:
    QString fullName; // Define attribute for full name

public:
    User(); // Constructor

    virtual void setAttributes(const QString &name, const QString &college, const QString &positionOrId, const QString &year) = 0; // Pure virtual function (needs to be overridden by derived classes

    virtual ~User(); // Deconstructor
};

#endif
