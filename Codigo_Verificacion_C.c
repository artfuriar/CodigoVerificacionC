/*Programa que nos pide un código*/

#include<stdio.h>  /*Librería para manipular datos de entrada y salida. Aquí la empleo para las funciones printf y fgets.*/
#include<string.h> /*Librería para manipular cadenas de caracteres. Aquí la empleo para la función strcmp.*/

#define CODIGO "awd45r3"  //Defino una constante para CODIGO dándole un valor fijo.
#define LONGITUD 8  /*Defino la longitud de la cadena de caracteres de CODIGO, que es 7, pero le sumo 1 para \n.*/

int main ()  //Función principal. Punto de entrada.
{
        char val[LONGITUD];  /*Declaro la variable de tipo char, llamada val, con el tamaño definido en LONGITUD.*/
        int contador = 0;  /*Declaro la variable de tipo int, llamada contador y la inicializo en 0. Nos servirá para el número máximo de intentos.*/

        do{  /*El buqle  do while nos sirve para que se ejecute, al menos una vez, las siguientes instrucciones mientras se cumpla la condición de while.*/
                printf("Introduzca el código: ");  /*Imprimimos por pantalla el mensaje para pedir al usuario que introduzca el código.*/
                fgets(val,LONGITUD, stdin); /*Lo recogemos con fgets, para evitar desbordamiento de buffer, guardándolo en la variable val con la longitud máxima de LONGITUD, por la entrada estándar, que es el teclado.*/

                if (strcmp(val, CODIGO)==0){  /*Ponemos la condición con if y comparamos con strcmp el valor introducido con CODIGO que si es igual a 0 nos indica que son iguales.*/
                        printf("Código correcto\n");
                        break; //Salimos del programa.
                }
                else{ //En caso contrario
                printf("Código incorrecto\n");
                contador++;  //Aumentamos la variable contador en 1.
                }

        }while (contador<=3);  //Mientras se cumpla la condición se ejecuta do. 

return 0;
}

//Antes de compilar le he dado permiso de ejecución al fichero con chmod +x codigo.c
//Compilo con gcc codigo.c -o codigo
//Ejecuto, estando en el misnmo directorio, con ./codigo
/*Si queremos que se pueda ejecutar desde cualquier directorio añadimos su ruta en la variable PATH y para que sea permanente a .bashrc.*/

