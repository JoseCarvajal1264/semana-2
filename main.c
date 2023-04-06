#include <stdio.h>

int main(int argc, char *argv[])
{

    char nombre[50];
    char cedula[20];

    float cantidad1 = 0, cantidad2 = 0, cantidad3 = 0, cantidad4 = 0, cantidad5 = 0;
    float precio1 = 150, precio2 = 55, precio3 = 180, precio4 = 70, precio5 = 120;
    float subtotal1 = 0, subtotal2 = 0, subtotal3 = 0, subtotal4 = 0, subtotal5 = 0;
    float subtotal = 0, total = 0;

    char opcion;

    printf("****************ELIJA UN PRODUCTO********************\nsa");
    printf("a) Llantas (Precio: $150)\n");
    printf("b) Kit Pastillas de freno (Precio: $55)\n");
    printf("c) Kit de embrague (Precio: $180)\n");
    printf("d) Faro (Precio: $70)\n");
    printf("e) Radiador (Precio: $120)\n");

    printf("ingrese la letra del producto a facturar: ");
    scanf("%c", &opcion);

    switch (opcion)
    {
    case 'a':
        printf("Ingrese la cantidad de Llantas: \n");
        scanf("%f", &cantidad1);
        break;

    case 'b':
        printf("Ingrese la cantidad de Kit Pastillas de freno: \n");
        scanf("%f", &cantidad2);
        break;

    case 'c':
        printf("Ingrese la cantidad de Kit de embrague: \n");
        scanf("%f", &cantidad3);
        break;

    case 'd':
        printf("Ingrese la cantidad de Faros: \n");
        scanf("%f", &cantidad4);
        break;

    case 'e':
        printf("Ingrese la cantidad de Radiadores: \n");
        scanf("%f", &cantidad5);
        break;

    default:
        break;
    }

    subtotal1 = cantidad1 * precio1;
    subtotal2 = cantidad2 * precio2;
    subtotal3 = cantidad3 * precio3;
    subtotal4 = cantidad4 * precio4;
    subtotal5 = cantidad5 * precio5;

    subtotal = subtotal1 + subtotal2 + subtotal3 + subtotal4 + subtotal5;

    if (subtotal > 100 && subtotal <= 500)
    {
        total = subtotal * 0.95;
    }
    else if (subtotal > 500 && subtotal <= 1000)
    {
        total = subtotal * 0.93;
    }
    else if (subtotal > 1000)
    {
        total = subtotal * 0.90;
    }
    else
    {
        total = subtotal;
    }

    printf("Ingrese el nombre del cliente: \n");
    scanf("%s", &nombre);
    printf("Ingrese la cedula del cliente: \n");
    scanf("%s", &cedula);

    printf("*******************DATOS DEL CLIENTE*******************\n");
    printf("Nombre: %s\n", nombre);
    printf("Cedula: %s\n", cedula);

    printf("*******************FACTURA*******************\n");
    printf("PRODUCTO                    CANTIDAD                     VALOR UNNITARIO                       TOTAL\n");
    if (cantidad1 != 0)
    {
        printf("Llantas                   %.0f                             %.2f                             %.2f\n", cantidad1, precio1, subtotal1);
    }
    if (cantidad2 != 0)
    {
        printf("Kit Pastillas de freno    %.0f                             %.2f                             %.2f\n", cantidad2, precio2, subtotal2);
    }
    if (cantidad3 != 0)
    {
        printf("Kit de embrague           %.0f                             %.2f                            %.2f\n", cantidad3, precio3, subtotal3);
    }
    if (cantidad4 != 0)
    {
        printf("Faros                    %.0f                              %.2f                            %.2f\n", cantidad4, precio4, subtotal4);
    }
    if (cantidad5 != 0)
    {
        printf("Radiadores               %.0f                              %.2f                             %.2f\n", cantidad5, precio5, subtotal5);
    }

    printf("El subtotal es: %.2f\n", subtotal);
    printf("El total es: %.2f\n", total);


    return 0;
}