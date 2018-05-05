//
// Created by vecr on 05/05/18.
//

#ifndef GOP_CARD_H
#define GOP_CARD_H
class card{
private:
    int number;
    char *code;

public:
    card(int number, char* code);
    int getNumber();
    char* getCode();
};

#endif //GOP_CARD_H
