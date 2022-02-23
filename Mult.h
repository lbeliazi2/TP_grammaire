#ifndef GL_TD_MULT_H
#define GL_TD_MULT_H
#include "symbole.h"
class Mult: public Symbole {
   public: 
      Mult(): Symbole(MULT, false) {}
      virtual ~Mult(){}
};
#endif // GL_TD_MULT_H