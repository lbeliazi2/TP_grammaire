#ifndef GL_TD_ETAT_H
#define GL_TD_ETAT_H
#include <iostream> // pour pouvoir faire cout
#include "Automate.h"
#include <string>
#include "Symbole.h"

class Etat {
public:
    Etat(const string &name);
    virtual ~Etat();
    virtual void print() const;
    virtual bool transition(Automate * automate, Symbole * s) = 0;
protected:
    string name;
};
#endif // GL_TD_ETAT_H