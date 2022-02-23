#ifndef GL_TD_ETAT_6
#define GL_TD_ETAT_6
#include "Etat.h"
#include "Automate.h"

class E6 : public Etat {
  public:
    E6(const string name);
    ~E6();
    void print() const;
    bool transition(Automate *automate, Symbole *s);
};
#endif //GL_TD_ETAT_6