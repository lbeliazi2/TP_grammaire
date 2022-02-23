#ifndef GL_TD_OpenPar_H
#define GL_TD_OpenPar_H
#include "symbole.h"
class OpenPar: public Symbole {
   public: 
      OpenPar(): Symbole(OPENPAR, false) {}
      virtual ~OpenPar(){}
};
#endif // GL_TD_OpenPar_H