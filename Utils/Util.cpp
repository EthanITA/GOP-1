//
// Created by vecr on 10/04/18.
//
#include "Util.h"
using namespace std;

/*If compiling for the windows environment uncomment the line  "#define WINDOWS"
 * and comment the line "#define UNIX", and the other way around for the UNIX based environment
 * */
#define UNIX
//#define WINDOWS



void Util::clear(){
#ifdef WINDOWS
    system ( "CLS" ); //WINDOWS
#elif defined(UNIX)
    system("clear"); //UNIX
#endif
}

//Using C++ 11 Random function
int Util::random(int min, int max) {
    max ++;
    std::random_device rd;
    std::mt19937 mt(rd());
    std::uniform_real_distribution<double > dist((double)min,(double)max);
    return (int)dist(mt);

}

void mSleep (int micro){
    fflush(stdout);
    usleep(micro*1000);
}

void cinClear(){
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(),'\n');
}

string inputCheck(std::string tmp){
    if (tmp == "Y" || tmp == "y" || tmp == "si" || tmp == "SI" || tmp == "Si" || tmp == "s" || tmp == "S" || tmp == "Ok" || tmp == "ok" || tmp =="OK"
        || tmp == "va" || tmp == "VA"|| tmp == "Va"|| tmp == "CERTO"|| tmp == "certo"|| tmp == "Certo"|| tmp == "tieni"|| tmp == "Tieni"|| tmp == "TIENI"
        || tmp == "Tenere"|| tmp == "tenere"|| tmp == "TENERE"){
        return "affermative";
    }
    else if (tmp == "N" || tmp == "n" || tmp == "no" || tmp == "NO" || tmp == "No"|| tmp == "cambia"|| tmp == "Cambia"|| tmp == "CAMBIA"
             || tmp == "cambia"|| tmp == "Cambia"|| tmp == "CAMBIARE"){
        return "negative";
    }
    else return " ";
}

int Util::randomFrom0(int max){
    return random(0,max);
}


int Util::randomFrom1(int max){
    return random(1,max);
}


