//
// Created by vecr on 05/05/18.
//

#ifndef GOP_EFFECTS_H
#define GOP_EFFECTS_H

#include <string>
#include <vector>

using namespace std;

class Effects {
private:
   vector <string> effects;
   vector <string> actions;
public:
   string getEffects(string code);
   void effectsInteraction();

};


#endif //GOP_EFFECTS_H
