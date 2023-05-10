#include <stdio.h>

float calcularPrecioRuta(int ruta, float kmruta){
    float precioXkm;
    switch (ruta)
    {
    case 1://urbana
        precioXkm = 0.10*kmruta;
        break;
    case 2://interurbana
        precioXkm = 0.15*kmruta;
        break;
    case 3://internacional
        precioXkm = 0.20*kmruta;
        break;
    default:
        printf("\nRuta ingresada no valida\n");
        return 0;
        break;
    }
    return precioXkm;
}


float calcularDescuento(float precio,float kms){
    float preciodescuento;
    if(kms < 50){
        preciodescuento = precio;
    }else if( kms >= 50 && kms < 100){
        preciodescuento = precio * 0.05;
    }else if(kms >= 100 && kms < 500){
        preciodescuento = precio * 0.10;
    }else if(kms > 500){
        preciodescuento = precio * 0.20;
    }
    return preciodescuento;
}