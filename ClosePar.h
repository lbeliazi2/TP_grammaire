#ifndef GL_TD_ClosePar_H
#define GL_TD_ClosePar_H
#include "symbole.h"
class ClosePar: public Symbole {
   public: 
      ClosePar(): Symbole(CLOSEPAR, false) {}
      virtual ~ClosePar(){}
};
#endif // GL_TD_ClosePar_H