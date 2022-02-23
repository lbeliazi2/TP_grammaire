#ifndef GL_TD_ETAT_8
#define GL_TD_ETAT_8
#include "Etat.h"
#include "Automate.h"

class E8 : public Etat {
  public:
    E8(const string name);
    ~E8();
    void print() const;
    bool transition(Automate *automate, Symbole *s);
};
#endif //GL_TD_ETAT_8