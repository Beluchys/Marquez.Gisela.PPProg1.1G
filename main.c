#include <stdio.h>
#include <stdlib.h>

int main()
{
    float precio = 20;

    aplicarDescuento(precio);

    return 0;
}
void aplicarDescuento(float precio)
{
    float porcentaje = 5;
    float nuevoPrecio;
    float valorDelDescuento;

    valorDelDescuento = (precio * porcentaje)/100;
    nuevoPrecio = valorDelDescuento - precio;
    printf("El nuevo Precio es: %0.2f", nuevoPrecio);
    printf("\n\n");
}
