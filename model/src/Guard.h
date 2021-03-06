#ifndef GUARD_H
#define GUARD_H

#include "Resident.h"

class Guard : public Resident
{

    Q_OBJECT

public:

    Guard();
    ~Guard();

    bool mayBeReadBy(Resident const * const resident) const;
    bool mayBeWrittenBy(Resident const * const resident) const;
    int privileges() const;
    QString className() const;

};

#endif // GUARD_H

