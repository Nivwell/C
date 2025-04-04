#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

void limpiarPantalla()
{
    system("cls");
}

void mostrarEncabezado()
{
    printf("\n====================================");
    printf("\n        CALCULADORA");
    printf("\n====================================");
}

void pausa()
{
    printf("\n\nPresione Enter para continuar...");
    while (getchar() != '\n')
        ;
    getchar();
}

int main()
{
    float num1, num2;
    int opcion;

    do
    {
        limpiarPantalla();
        mostrarEncabezado();

        printf("\n\n  Numeros actuales: %.2f y %.2f\n", num1, num2);
        printf("\n  MENU PRINCIPAL");
        printf("\n  ==============");
        printf("\n  1. Generar numero aleatorios");
        printf("\n  2. Suma");
        printf("\n  3. Resta");
        printf("\n  4. Multiplicacion");
        printf("\n  5. Division");
        printf("\n  6. Potencia");
        printf("\n  7. Raiz Cuadrada");
        printf("\n  8. Salir");
        printf("\n\n  Seleccione una opcion (1-8): ");

        scanf("%d", &opcion);

        limpiarPantalla();
        mostrarEncabezado();
        printf("\n");

        switch (opcion)
        {
        case 1:
            num1 = (float)(rand() % 1000) / 100.0f;
            num2 = (float)(rand() % 1000) / 100.0f;
            printf("\n  Nuevos numeros generados:");
            printf("\n  > %.2f", num1);
            printf("\n  > %.2f", num2);
            break;

        case 2:
            num1 = (float)(rand() % 1000) / 100.0f;
            num2 = (float)(rand() % 1000) / 100.0f;
            printf("\n  %.2f + %.2f = %.2f", num1, num2, num1 + num2);
            break;

        case 3:
            num1 = (float)(rand() % 1000) / 100.0f;
            num2 = (float)(rand() % 1000) / 100.0f;
            printf("\n  %.2f - %.2f = %.2f", num1, num2, num1 - num2);
            break;

        case 4:
            num1 = (float)(rand() % 1000) / 100.0f;
            num2 = (float)(rand() % 1000) / 100.0f;
            printf("\n  %.2f * %.2f = %.2f", num1, num2, num1 * num2);
            break;

        case 5:
            num1 = (float)(rand() % 1000) / 100.0f;
            num2 = (float)(rand() % 1000) / 100.0f;
            if (num2 != 0.0f)
            {
                printf("\n  %.2f / %.2f = %.4f", num1, num2, num1 / num2);
            }
            else
            {
                printf("\n  ERROR: No se puede dividir por cero!");
            }
            break;

        case 6:
            num1 = (float)(rand() % 1000) / 100.0f;
            num2 = (float)(rand() % 1000) / 100.0f;
            printf("\n  %.2f ^ %.2f = %.4f", num1, num2, pow(num1, num2));
            break;

        case 7:
            num1 = (float)(rand() % 1000) / 100.0f;
            num2 = (float)(rand() % 1000) / 100.0f;
            printf("\n  Raices cuadradas:");
            if (num1 >= 0)
            {
                printf("\n  %.2f = %.4f", num1, sqrt(num1));
            }
            else
            {
                printf("\n  %.2f = No existe (numero negativo)", num1);
            }

            if (num2 >= 0)
            {
                printf("\n  %.2f = %.4f", num2, sqrt(num2));
            }
            else
            {
                printf("\n  %.2f = No existe (numero negativo)", num2);
            }
            break;

        case 8:
            printf("\n  Saliendo del programa...\n\n");
            break;

        default:
            printf("\n  ERROR: Opcion no valida!");
            printf("\n  Por favor seleccione 1-8");
            break;
        }

        if (opcion != 8)
        {
            pausa();
        }
    } while (opcion != 8);

    return 0;
}