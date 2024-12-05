#ifndef GLOBALSTORAGE_H
#define GLOBALSTORAGE_H

#include <QVector>
#include "student.h"
#include "faculty.h"

class GlobalStorage {
public:
    // Static members for global access
    static QVector<Student> studentsVector; // Vector for student objects created during run
    static QVector<Faculty> facultyVector; // Vector for faculty objects created during run
};

#endif
