 /* 2)De una compra debes ingresar una cantidad indeterminada de productos,
        validando los siguientes datos:
    marca, precio, peso en kilogramos, tipo(s�lido o l�quido)
    a)informar el peso total de la compra.
    b)la marca del m�s caro de los l�quidos
    c)la marca del m�s liviano de los s�lidos */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char marca[15];
    char tipo[15];
    char marca_caro[15];
    char marca_liviano[15];
    char respuesta[2];
    float precio;
    float peso_kg;
    float mas_caro=0;
    float mas_liviano=0;
    float peso_total;
    int bandera_primero_liquidos=1;
    int bandera_primero_solidos=1;

    printf("quiere ingresar un producto?");
    fflush(stdin);
    scanf("%s", respuesta);
    while(respuesta!="si")
    {
        printf("hola");
        printf("quiere ingresar otro producto?");
        fflush(stdin);
        scanf("%s", respuesta);
    }



    return 0;
}
