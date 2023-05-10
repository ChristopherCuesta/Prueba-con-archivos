#include <stdio.h>
#include <string.h>
#include "Operacion.h"

int login(){ // declaramos un int para que nos regrese un 1 si los usuarios y contraseña estan bien y 0 si no son los datos
    char nombreusuario[30]= "Juan";
    char contraseña[30]= "1234";
    char nombreusuario2[30]= "Nicolas";
    char contraseña2[30]= "4231";
    char nombreusuario3[30]= "Nicol";
    char contraseña3[30]= "4321";
    char nombre[30];
    char contra[30];
    int intento = 0;
    do{
    printf("\nIngrese nombre de usuario: ");
    scanf("%s", nombre);
    printf("\nIngrese la contraseña: ");
    scanf("%s", contra);
    if(strcmp(nombreusuario, nombre) == 0 && strcmp(contraseña, contra)==0){// comparamos con strcmp las char para verificar si el usuario y contraseña ingresado estabien
    return 1;
    }
    if(strcmp(nombreusuario2, nombre) == 0 && strcmp(contraseña2, contra)==0){
    return 1;
    }
    if(strcmp(nombreusuario3, nombre) == 0 && strcmp(contraseña3, contra)==0){
    return 1;        
    }
    intento++;
    printf("\nUsuario y contraseñas incorrectos, intentos %d\n", intento);
    }while (intento <=3);// while hasta tres por que son solo tres intentos
    printf("\nNo se pudo ingresar\n");
    return 0;
}


void operacionTransporte(){
    int ruta;
    float kmderuta, precioRuta, descuento, total;
    for(int i = 1; i < 5; i++){ // declaro un for hasta 5 para los 5 clientes que ingresaran los tipos de ruta y sus km
        printf("\nCliente %d", i);
        printf("\nIngrese que tipo de ruta es:");
        printf("\n1. Urbana");
        printf("\n2. Interurbana");
        printf("\n3. Internacional");
        printf("\nSeleccione la ruta(1-3): ");  
        scanf("%d", &ruta);
        printf("\nIngrese los km de la ruta:");
        scanf("%f", &kmderuta);
        precioRuta = calcularPrecioRuta(ruta, kmderuta);
        descuento = calcularDescuento(precioRuta, kmderuta);
        printf("\nSubtotal: %f", precioRuta);
        total = precioRuta - descuento;
        printf("\nDescuento: %f", descuento);
        printf("\nTotal: %f", total);
    }
    }


    void redSocial(){
        int numNoticias;
        int numEventos;
        int numPreguntas;
        char mensaje[30];
        int opc;
        for (int i = 1; i < 5; i++){
        printf("\nMensaje %d",i);
        printf("\nIngresar el mensaje que desee dejar");
        scanf("%s", mensaje);
        printf("\n1. Noticias\n");
        printf("2. Eventos\n");
        printf("3. Preguntas\n");
        scanf("%d", &opc);
        switch (opc)
        {
        case 1:
            printf("\nEl mensaje dejado es: %s", mensaje);
            numNoticias++;
            break;
        case 2:
            printf("\nEl mensaje dejado es: %s", mensaje);
            numEventos++;
            break;
        case 3:
            printf("\nEl mensaje dejado es: %s", mensaje);
            numPreguntas++;
            break;
        default:
            printf("\nLa opcion no es correcta");
            break;
        }
        }
        printf("\nEl total de noticias es de: %d", numNoticias);
        printf("\nEl total de eventos es de: %d", numEventos);
        printf("\nEl total de preguntas es de: %d", numPreguntas);
        
    }


    void menu(){
    int opc;
    do{
        printf("\nSeleccione la opcion\n");
        printf("\n1. Operación de transporte\n");
        printf("2. Interactuar en la red social\n");
        printf("3. Salir del programa\n");
        printf("\nEscriba la seleccion(1-3): ");
        scanf("%d", &opc);
        switch (opc){
        case 1:
            operacionTransporte();
            break; 
        case 2:
        	redSocial();
			break;
        case 3:
        	printf("Saliendo del programa");
        	return;
        default:
        	printf("\nOpcion invalida. Por favor, seleccione una opcion valida.\n");
            break;
        }
    }while (opc != 3);    
}