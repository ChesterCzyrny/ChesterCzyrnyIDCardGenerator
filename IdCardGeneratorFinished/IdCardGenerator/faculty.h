#ifndef FACULTY_H
#define FACULTY_H

#include "person.h"
#include "user.h"
#include <QString>

class Faculty : public virtual User, public virtual Person { // Faculty class inherits from both Person and User
private:
    QString position; // Define attribute for Position Title
    QString yearEmployed; // Define attribute for Employment Year

public:
    Faculty(); // Constructor

    virtual void setAttributes(const QString &name, const QString &college, const QString &positionOrId, const QString &year) override;

    // Getters
    QString getName();
    QString getCollege();
    QString getPosition();
    QString getYear();

    ~Faculty(); // Deconstructor
};

#endif
