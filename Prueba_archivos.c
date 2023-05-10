#include <stdio.h>
#include "Prueba.h"
// HECHO POR CHRISTOPHER CUESTA

int main(){
    int resultadologin;
    resultadologin = login();
    if (resultadologin == 1){
        menu();
    }
        return 0;
}