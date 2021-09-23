#include <stdio.h>
#include <stdlib.h>
#include "operaciones.h"
#include "validaciones.h"
int main(void) {
	setbuf(stdout,NULL);
	int A,B,opcion,flag=0,flag2=0,flag3=0,s,r,m,f,f2;
	    float d;
	    do
	    {
	    	clear();
	    	mostrarAyB(flag,flag2,A,B);
	        printf("1.Ingresar 1er operando \n");
	        printf("2.Ingresar 2do operando \n");
	        printf("3.Calcular todas las operaciones \n");
	        printf("4.Informar resultados \n");
	        printf("5.Salir");
	        fflush(stdin);
	        printf("\nEliga una opcion:");
	        scanf("%d",&opcion);
	        switch(opcion)
	        {
	        case 1:
	        	if(flag3)
	        	{
	        		flag3=0;
	        	}
	        	clear();
	            flag=1;
	            utn_getEntero(&A,3,"Ingrese un numero:","Error\n",1,999);
	            printf("\n");
	            system("pause");
	            break;
	        case 2:
	        	if(flag3)
	        	{
	        		flag3=0;
	        	}
	        	clear();
	            flag2=1;
	            utn_getEntero(&B,3,"Ingrese un numero:","Error\n",1,999);
	            printf("\n");
	            system("pause");
	            break;
	        case 3:
	            if(flag&&flag2)
	            {
	            	clear();
	                s = suma(A,B);
	                r = resta(A,B);
	                m = multiplicar(A,B);
	                d = division(A,B);
	                f = calcularFactorial(A);
	                f2= calcularFactorial(B);
	                flag3=1;
	                printf("Los resultados se han realizado\n");
	                system("pause");
	            }
	            else
	            {
	                clear();
	                printf("Cargue los numeros antes\n");
	                system("pause");
	            }
	            break;
	        case 4:
	                if(flag&&flag2&&flag3)
	                {
	                    flag=0;
	                    flag2=0;
	                    flag3=0;
	                    clear();
	                    printf("\nLa suma es: %d",s);
	                    printf("\nLa resta es: %d",r);
	                    printf("\nLa multiplicacion es :%d",m);
	                    if(A>0)
	                    {
	                        printf("\nEl factorial es:%d",f);
	                    }
	                    else
	                    {
	                        printf("\nNo pudo mostrarse el factorial de A");
	                    }
	                    if(B>0)
	                    {
	                        printf("\nEl factorial es:%d",f2);
	                    }
	                    else
	                    {
	                        printf("\nNo pudo mostrarse el factorial de B");
	                    }
	                    if(B==0)
	                    {
	                        printf("\nNo se puedo realizar la division");
	                    }
	                    else
	                    {
	                        printf("\nLa division es:%.2f",d);
	                    }
	                }
	                else
	                {
	                	clear();
	                    printf("\nAntes debe hacer las operaciones\n");
	                }
	                printf("\n");
	                system("pause");
	            break;
	        case 5:
	        	clear();
	                printf("\nUsted salio del programa\n");
	                system("pause");
	            break;
	            default:
	            	clear();
	                printf("Error intentelo de nuevo\n");
	                system("pause");
	        }
	    }
	    while(opcion!=5);
	return EXIT_SUCCESS;
}

