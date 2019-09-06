#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main()
{
    int primerOperando;
    int opcionElegida;
    int segundoOperando;
    int resultadoResta;
    int resultadoSuma;
    float resultadoDivision;
    int resultadoMultiplicacion;
    long long int resultadoFactorialA;
    long long int resultadoFactorialB;
    int bandera=0;
    int bandera1=0;
    int bandera2=0;


    do{
            printf("Elija una opcion:\n\n");
            if(bandera1==0)
                {
                    printf("1_ Ingresar 1er operando (A=x).\n\n");
                }else
                {
                    printf("1_ Ingresar 1er operando (%d=x).\n\n", primerOperando);
                }
            if(bandera2==0)
                {
                    printf("2_ Ingresar 2do operando (B=y).\n\n");
                }else
                {
                    printf("2_ Ingresar 2do operando (%d=y).\n\n", segundoOperando);
                }
            printf("3_ Calcular todas las operaciones. \n\n");
            printf("4_ Informar resultados.\n\n");
            printf("5_ Salir.\n\n");
            scanf("%d", &opcionElegida);

            switch(opcionElegida)
            {
                case 1:
                    system("cls");
                    printf("\nIngrese el primer operando.\n");
                    scanf("%d", &primerOperando);
                    bandera1=1;
                    system("cls");
                break;
                case 2:
                    system("cls");
                    printf("Ingrese un segundo operando.\n");
                    scanf("%d", &segundoOperando);
                    bandera2=1;
                    system("cls");
                break;
                case 3:
                    if(bandera1==1 && bandera2==1)
                        {
                            resultadoSuma = sumar(primerOperando, segundoOperando);
                            resultadoResta = restar(primerOperando, segundoOperando);
                            resultadoDivision = dividir(primerOperando, segundoOperando);
                            resultadoMultiplicacion = multiplicar(primerOperando, segundoOperando);
                            resultadoFactorialA = factorizar(primerOperando);
                            resultadoFactorialB = factorizar(segundoOperando);
                            bandera=1;
                            system("cls");
                        }else
                            {
                                printf("Las operaciones no pueden ser realizadas ya que uno o ambos numerandos aun no fueron definidos. \n\n");
                            }

                break;
                case 4:
                    system("cls");
                    if(bandera==1)
                        {
                            printf("a) El resultado de %d+%d es: %d.\n", primerOperando, segundoOperando, resultadoSuma);
                            printf("b) El resultado de %d-%d es: %d.\n", primerOperando, segundoOperando, resultadoResta);

                            if(segundoOperando!=0)
                                {
                                    printf("c) El resultado de %d/%d es: %.2f \n", primerOperando, segundoOperando, resultadoDivision);
                                }else
                                    {
                                        printf("c) No puede realizarse la division ya que no se puede dividir por 0.\n");
                                    }

                            printf("d) El resultado de %d*%d es: %d.\n", primerOperando, segundoOperando, resultadoMultiplicacion);

                            if(primerOperando<0 || segundoOperando<0)
                                {
                                    printf("e) No pudo realizarse la operacion ya que uno o ambos operandos son negativos.\n\n");
                                }else
                                    {
                                        printf("e) El resultado de el factorial !%d es: %lli, y el resultado de el factorial !%d es: %lli.\n\n", primerOperando, resultadoFactorialA, segundoOperando, resultadoFactorialB);
                                    }
                        }else
                            {
                                printf("No se pueden mostrar los resultados ya que todavia no fueron calculados.\n\n");
                            }

                break;
                case 5:
                    system("cls");
                    printf("Usted esta saliendo de la calculadora...");
                break;
                default:
                    printf("%d no es un numero valido.\n", opcionElegida);
                break;
            }
        }while(opcionElegida!=5);

    return 0;
}
