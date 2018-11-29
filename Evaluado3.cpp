# include <stdio.h>
# include <conio.h>
# include <stdlib.h>
# include <math.h>
# include <iostream>
# include <fstream>

using namespace std;

void escribir();

double factorial(int y);
double taylor(int x, int y);

int main(){
	int opcion;
	system("cls");
	do{
		system ("color 3E");
		system ("cls");
		printf ("\n\t\tBIENVENIDO/A\n");
		printf ("\n\t\t**************************************************************************\n");
		printf ("\n\t\tElaborado por: Julio Amando Miranda Reyes ...\n");
		printf ("\n\t\tMENU PRINCIPAL:\n");
		printf ("\n\t\t--------------------\n");
		printf ("\n\t\t1. Fibonaci\n");
		printf ("\n\t\t2. Series de Taylor\n");
		printf ("\n\t\t3. Ver resultados\n");
		printf ("\n\t\t4. SALIR\n");
		printf ("\n\t\t--------------\n");
		printf ("\n\t\t\n Seleccione una opcion y pulse Enter : ");
		scanf ("%d", &opcion);
		system ("color 2A");
		system ("cls");
		switch(opcion){
			
			    case 1:{
	                printf ("Este programa es para  hacer una secuencia de numeros y ordenarlos por el algoritmo de fibonaci\n");
	                
					int num=0,anterior=1,aux;
					
					
    	            printf ("\n1\n");
		            for(int i=0; i<10 ;i++){
		            printf ("%d ", &num);
		            aux=num;
		            num = anterior;
					anterior=aux;	
			        }   
			    }
				printf ("\n\n Presione una tecla para volver al menu principal\n ");
				getch ();
				break;
				
				case 2:{
					
				printf ("\n\nEste programa es para  hacer una serie de taylor \n ");
				
				int y, x;
				
	            printf ("n? ",y);
	            scanf ("%d", &y);
			    printf ("x? ",x);
			    scanf ("%d", &x);
				printf ("\n El valor de taylo para n=%d, x=%d  es=%f\n",y,x, taylor(x, y));
				system("pause");
				
				}
					printf ("\n\nPresione una tecla para volver al menu principal\n");
					getch ();
					break;
					case 3:{
					escribir();
					}
                    printf ("\n\nPresiona una tecla para volcer al menu principal\n");
                    getch();
                    break;
					case 4: {
						exit (0); 
						}
					}
    }
while(opcion!=4);
getch();
return 0;
}

void escribir(){
	
	ofstream archivo;
	
	archivo.open("prueba.txt",ios::out);
	
	if(archivo.fail()){
	cout<<"No se pudo abrir el archivo";
	exit(1);
	}
	
	archivo<<"archivo: "<<endl;
	cout<<" "<<endl;
	archivo<<"nombre del ejercicio:"<<endl;
	cout<<" "<<endl;
	archivo<<"dato ingresado:"<<endl;
	cout<<" "<<endl;
	archivo<<"resultado:"<<endl;
	cout<<" "<<endl;
	archivo<<"fecha:"<<endl;
	cout<<" "<<endl;
	archivo<<"correlativo:"<<endl;
	
	archivo.close();
}

	double taylor (int x, int y){
					double t, s=0;;
					for(int i=0; i<y; i++){
						t=pow(x,i)/factorial(i);
						s+=t;
					}
					return s;
				}
				
				double factorial(int y){
					double fac=1;
					for(int i = 2; i<=y; i++){
						fac*=1;
					}
					return fac;
				}
