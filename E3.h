#ifndef GL_TD_ETAT_3
#define GL_TD_ETAT_3
#include "Etat.h"
#include "Automate.h"

class E3 : public Etat {
  public:
    E3(const string name);
    ~E3();
    void print() const;
    bool transition(Automate *automate, Symbole *s);
};
#endif // GL_TD_ETAT_3