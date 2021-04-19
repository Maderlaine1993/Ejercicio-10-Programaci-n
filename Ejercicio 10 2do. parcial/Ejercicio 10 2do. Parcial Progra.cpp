/* Maderlaine Vanessa Aldana Martinez Carne 0909-20-6881
Ingenieria en Sistemas 
2do. Parcial Programación I
Ejercicio 10 */

//Declaración de librerias
#include <iostream>
#include<windows.h>
#include<conio.h>

using namespace std;

int main()
{
	int alfa[3][3];// vector principal
	int vtotal[3]; //variable suma 
	int i,j; //variables tipo pointer
	int op=0; //variable para elegir la opción del menú
	
	do{
	//Creación del menú 
	cout<<endl;
	cout<<"Menu de opciones:"<<endl<<endl;
	cout<<"1.- Ingrese los datos a la matriz:"<<endl;
	cout<<"2.- Calculo de la suma de la matriz Vector Total:"<<endl;
	cout<<"3.- Visualización de Datos:"<<endl;
	cout<<"4.- FIN"<<endl;
	cin>> op; 
	system ("cls");
	
	switch (op)
	{
		case 1: //Ingreso de Datos
		system ("cls");
		for(i=0; i<3; i++)
		{
			for(j=0; j<3; j++)
			{
				cout<<"Ingrese datos a la matriz ALFA:"<<endl;
				cin>> alfa[i][j];
			}
		}
		break;
		
		case 2: 
			system("cls");
			cout<<"Creación del vector total"<<endl;
			vtotal[0] = alfa[0][0] + alfa[1][1] + alfa[2][2];
			vtotal[1] = alfa[2][0] + alfa[1][1] + alfa[0][2];
			vtotal[2] = alfa[2][0] + alfa[2][1] + alfa[2][2];
			cout<<endl;
			system("pause");
			break;
		
		case 3:
			system("cls");
			cout<<"*****MATRIZ ALFA*****"<<endl;
			j=0;
			for(i=0; i<3; i++)
			{
				cout<< alfa[i][0] <<"     "<< alfa[i][1] <<"     "<< alfa[i][2] <<endl;
				j=j+1;
			}
			cout<<endl<<endl<<endl<<endl;
			cout<<"*****VECTOR TOTAL*****"<<endl;
			cout<< vtotal[0]<< "     "<< vtotal[1]<< "     "<< vtotal[2]<<endl;
			cout<<endl;
			system("pause");
			break;
		
		
		case 4:
			
			cout<<"Deseas salir del programa"<<endl;
			cout<< "SI O NO"<<endl;
			system("pause");
			break;

		
		default: cout<< "Opción inválida seleccione de nuevo"<<endl;
		system("pause");
		break;
	}
	}
	while(op);
	_getch();
}
/* Maderlaine Vanessa Aldana Martinez Carne 0909-20-6881
Ingenieria en Sistemas 
2do. Parcial Programación I
Ejercicio 10 */


		
	
