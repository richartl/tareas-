/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: UNIVERIDAD
 *
 * Created on 4 de septiembre de 2017, 11:25 PM
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
    int automovil, opcion, precio;

    do {
        printf("elige un auto: \n 1 =chevrolet_aveo\n 2= ferrari_458\n 3= honda_civic \n 4= lamborghini_aventador \n ");
        scanf("%d", &automovil);

        switch (automovil) {
            case 1:
                printf("su precio es $200,000 \n a.-Caracteristicas:\n b.-color: negro,plata y blanco\n c.-contine 12 cilindros\n");

                break;
            case 2:
                printf("Su precio es $200,000\n Caracteristicas:\n a.-Color:Negro,Plata, Verde.\n b.-Automatico\n");


                break;
            case 3:
                printf("Su precio es $400,000\nCaracteristicas del auto: \n a.-Color:Azul,Rojo_quemado \n b.-Combustible: gasolina\n");

                break;
            case 4:
                printf("Su precios es $500,000\nCaracteristicas del auto: \n a.-Tipo:Automóvil hiperdeportivo\n b.-Configuración: Motor V12 central trasero longitudinal\n");



        }
        printf("¿Desea ver otro modelo de auto?\n");
        printf("Si=1\n No=0\n");
        scanf("%d", &opcion);
    }
 while (opcion = 1);

    return (0);
}






