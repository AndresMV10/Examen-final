#include <stdio.h>
#include <string.h>

#define ASIENTOS_NORMALES_MAX 50
#define ASIENTOS_VIP_MAX 30
#define ASIENTOS_3D_MAX 30


int main(void) {
    int entradas = 0, peliculas, salas, costo_parcial, costo_total = 0;
    int opciones, intentos = 1, contraseñaIngresada, contraseña1, contraseña2, contraseña3;
    char usuarioIngresado[13], usuario1[13] = "JosueMullo" , usuario2[13] = "Omar", usuario3[13] = "Alex";
    contraseña1 = 1234;
    contraseña2 = 1111;
    contraseña3 = 4444;


    do
    {
        printf("Ingrese su usuario: ");
        scanf("%s",usuarioIngresado);

        printf("Ingrese la contraseña: ");
        scanf("%d", &contraseñaIngresada);

        if (((strcmp(usuarioIngresado,"JosueMullo") == 0) && (contraseñaIngresada == contraseña1)) || ((strcmp(usuarioIngresado,"Omar") == 0) && (contraseñaIngresada == contraseña2)) || ((strcmp(usuarioIngresado,"Alex") == 0) && (contraseñaIngresada == contraseña3)) )
        {
            do
            {
                printf("Menu del cine\n");
                printf("1. Venta de entradas\n");
                printf("2. Estadisticas de Ventas\n");
                printf("3. Salir\n");
                printf("Seleccion una opción: ");
                scanf("%d",&opciones);
                switch (opciones) {
                case 1:
                    printf("1. Jonh Wick 4\n");
                    printf("2. La Anaconda, ahora es personal\n");
                    printf("3. Regresar al menu principal");
                    printf("Escoja una pelicula: ");
                    scanf("%d",&peliculas);
                    do
                    {
                        switch (peliculas) {
                        case 1:
                            
                            printf("1. Sala Normal\n");
                            printf("2. Sala VIP\n"),
                            printf("3. Sala 3D\n");
                            printf("Seleccion el tipo de sala que desea: ");
                            scanf("%d",&salas);
                            printf("Seleccion el numero de entradas que desea comprar: ");
                            scanf("%d", &entradas);
                            if ( salas == 1) {
                                costo_parcial = 8 * entradas;
                                if(costo_parcial < 40){
                                    costo_total = costo_parcial;
                                    printf("El costo total a pagar es de %d", costo_total);
                                }
                                if((costo_parcial >= 40) && (costo_parcial <= 80)) {
                                    costo_total= costo_parcial * 0.95;
                                    printf("El costo total a pagar es de %d", costo_total);
                                }
                                if((costo_parcial >= 80) && (costo_parcial <= 120)) {
                                    costo_total= costo_parcial * 0.90;
                                    printf("El costo total a pagar es de %d", costo_total);
                                }
                                if(costo_parcial > 120) {
                                    costo_total= costo_parcial * 0.85;
                                    printf("El costo total a pagar es de %d", costo_total);
                                }
                            }
                            if ( salas == 2) {
                                costo_parcial = 15 * entradas;
                                if(costo_parcial < 40){
                                    costo_total = costo_parcial;
                                    printf("El costo total a pagar es de %d", costo_total);
                                }
                                if((costo_parcial >= 40) && (costo_parcial <= 80)) {
                                    costo_total= costo_parcial * 0.95;
                                    printf("El costo total a pagar es de %d", costo_total);
                                }
                                if((costo_parcial >= 80) && (costo_parcial <= 120)) {
                                    costo_total= costo_parcial * 0.90;
                                    printf("El costo total a pagar es de %d", costo_total);
                                }
                                if(costo_parcial > 120) {
                                    costo_total= costo_parcial * 0.85;
                                    printf("El costo total a pagar es de %d", costo_total);
                                }
                            }
                            if ( salas == 3) {
                                costo_parcial = 12 * entradas;
                                if(costo_parcial < 40){
                                    costo_total = costo_parcial;
                                    printf("El costo total a pagar es de %d", costo_total);
                                }
                                if((costo_parcial >= 40) && (costo_parcial <= 80)) {
                                    costo_total= costo_parcial * 0.95;
                                    printf("El costo total a pagar es de %d", costo_total);
                                }
                                if((costo_parcial >= 80) && (costo_parcial <= 120)) {
                                    costo_total= costo_parcial * 0.90;
                                    printf("El costo total a pagar es de %d", costo_total);
                                }
                                if(costo_parcial > 120) {
                                    costo_total= costo_parcial * 0.85;
                                    printf("El costo total a pagar es de %d", costo_total);
                                }
                            }

                            break;
                        case 2:
                            printf("1. Sala Normal\n");
                            printf("2. Sala VIP\n"),
                            printf("3. Sala 3D\n");
                            printf("Seleccion el tipo de sala que desea: ");
                            scanf("%d",&salas);
                            printf("Seleccion el numero de entradas que desea comprar: ");
                            scanf("%d", &entradas);
                            if ( salas == 1) {
                                costo_parcial = 8 * entradas;
                                if(costo_parcial < 40){
                                    costo_total = costo_parcial;
                                    printf("El costo total a pagar es de %d", costo_total);
                                }
                                if((costo_parcial >= 40) && (costo_parcial <= 80)) {
                                    costo_total= costo_parcial * 0.95;
                                    printf("El costo total a pagar es de %d", costo_total);
                                }
                                if((costo_parcial >= 80) && (costo_parcial <= 120)) {
                                    costo_total= costo_parcial * 0.90;
                                    printf("El costo total a pagar es de %d", costo_total);
                                }
                                if(costo_parcial > 120) {
                                    costo_total= costo_parcial * 0.85;
                                    printf("El costo total a pagar es de %d", costo_total);
                                }
                            }
                            if ( salas == 2) {
                                costo_parcial = 15 * entradas;
                                if(costo_parcial < 40){
                                    costo_total = costo_parcial;
                                    printf("El costo total a pagar es de %d", costo_total);
                                }
                                if((costo_parcial >= 40) && (costo_parcial <= 80)) {
                                    costo_total= costo_parcial * 0.95;
                                    printf("El costo total a pagar es de %d", costo_total);
                                }
                                if((costo_parcial >= 80) && (costo_parcial <= 120)) {
                                    costo_total= costo_parcial * 0.90;
                                    printf("El costo total a pagar es de %d", costo_total);
                                }
                                if(costo_parcial > 120) {
                                    costo_total= costo_parcial * 0.85;
                                    printf("El costo total a pagar es de %d", costo_total);
                                }
                            }
                            if ( salas == 3) {
                                costo_parcial = 12 * entradas;
                                if(costo_parcial < 40){
                                    costo_total = costo_parcial;
                                    printf("El costo total a pagar es de %d", costo_total);
                                }
                                if((costo_parcial >= 40) && (costo_parcial <= 80)) {
                                    costo_total= costo_parcial * 0.95;
                                    printf("El costo total a pagar es de %d", costo_total);
                                }
                                if((costo_parcial >= 80) && (costo_parcial <= 120)) {
                                    costo_total= costo_parcial * 0.90;
                                    printf("El costo total a pagar es de %d", costo_total);
                                }
                                if(costo_parcial > 120) {
                                    costo_total= costo_parcial * 0.85;
                                    printf("El costo total a pagar es de %d", costo_total);
                                }
                            }
                            break;
                        default:
                            printf("Seleccion inexistente, elija una validad");
                            break;
                        }
                    } while (peliculas != 3);
                    
                    break;
                case 2:
                    printf("Entradas vendidas: %d\n", entradas);
                    printf("Ingresos generados: %d\n", costo_total);
                    printf("\n");
                    break;
                case 3:
                    printf("Gracias por utilizar este programa");
                    exit(0);
                    break;
                default:
                    printf("la opcion no existe");
                    break;
                }
            } while (opciones != 3);
            
            
        }
        else {
            printf("Usuario o contraseña incorrectos, intento #%d\n",intentos);
            intentos = intentos + 1;
            if (intentos > 3)
            {
                printf("Imposible ingresar");
            }
        }
    } while (intentos <= 3);
    

}