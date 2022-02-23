#ifndef GL_TD_Plus_H
#define GL_TD_Plus_H
#include "symbole.h"
class Plus: public Symbole {
   public: 
      Plus(): Symbole(PLUS, false) {}
      virtual ~Plus(){}
};
#endif // GL_TD_Plus_H