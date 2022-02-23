#ifndef GL_TD_FIN_H
#define GL_TD_FIN_H
#include "symbole.h"
class Fin: public Symbole {
   public: 
      Fin(): Symbole(FINDETEXTE, true) {}
      virtual ~Fin(){}
};
#endif // GL_TD_FIN_H