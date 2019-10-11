#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

int main() {	
		int menu,menu2,menu3,menu4;
		//String[][] fila = {{"|Iteraciones|", "|Aproximacion|", "|Error absoluto|", "|Error relativo porcentual|", "|Error relativo aproximado|"}};
	
		
do {
	cout<<"Menu 1"<<endl;
	cout<<"1.Hoja de Presentacion"<<endl; 
	cout<<"2.Metodos del Sistemas de Ecuaciones Lineales"<<endl; 
	cout<<"3.Salir del programa"<<endl; 
	cout<<"Eliga la opcion que desea:"<<endl;
	cin>>menu;
	system("cls");
		switch(menu){
		case 1:
				cout<<"UNIVERSIDAD TECNOLOGICA DE PANAMA"<<endl;
				cout<<"FACULTAD DE SISTEMAS Y COMPUTACION"<<endl;
				cout<<"LICENCIATURA EN INGENIERIA EN SISTEMAS COMPUTACIONALES"<<endl;
				cout<<"METODOS NUMERICOS PARA INGENIEROS"<<endl;
				cout<<"PROYECTO N2"<<endl;
				cout<<"TEMA:"<<endl;
				cout<<"TEORIA DE ERROR"<<endl; 
				cout<<"FACILITADOR: ING.JACQUELINE S. DE CHING"<<endl;
				cout<<"INTEGRANTES:"<<endl;
				cout<<"EDGAR MARTIN 8-913-1957"<<endl;
				cout<<"1IL-124"<<endl;
				cout<<"29/9/19"<<endl;
				system("pause");
				system("cls");		
		break;
		case 2:
				do {
					system("cls");	
					cout<<"Menu 2"<<endl;
					cout<<"1. Metodo Iteractivo "<<endl;
					cout<<"2. Metodo Doollitle"<<endl;
					cout<<"3.Regresar al Menu Principal"<<endl;
					cout<<"Eliga la opcion que desea:"<<endl;
					cin>>menu2;
					system("cls");
						switch(menu2){
						case 1:	
							 	do{
									system("cls");
									cout<<"METODO ITERATIVO"<<endl;
									cout<<"1. Tabla o cuadro de iteraciones"<<endl;
									cout<<"2. Resultado del Sistema de Ecuaciones Algebraico lineal"<<endl;
									cout<<"3. Regresar al Menu anterior"<<endl;
									cout<<"Eliga la opcion que desea:"<<endl;
									cin>>menu3;
									system("cls");
										switch(menu3){
										case 1:
												system("cls");
												cout<<"1. Tabla o cuadro de iteraciones"<<endl;
												system("pause");
												system("cls");
						
										break;
										
										case 2:
												system("cls");
												cout<<"2. Resultado del Sistema de Ecuaciones Algebraico lineal"<<endl;
												system("pause");
												system("cls");
												break;
					
										}
								}while(menu3!=3);
						break;
				
						case 2:
								do{
									system("cls");
									cout<<"METODO DOOLITLE"<<endl;
									cout<<"1. Matriz Principal"<<endl;
									cout<<"2. Matriz Triangular Inferior"<<endl;
									cout<<"3. Matriz Triangular Superior"<<endl;
									cout<<"4. Resultado del Sistema de Ecuaciones Algebraico Lineal"<<endl;
									cout<<"5. Regresar al Menu anterior"<<endl;
									cout<<"Eliga la opcion que desea:"<<endl;
									cin>>menu4;
									system("cls");	
										switch(menu4){
										case 1:
												system("cls");
												cout<<"1. Matriz Principal"<<endl;
												system("pause");
												system("cls");
										break;
										
										case 2:
												system("cls");
												cout<<"2. Matriz Triangular Inferior"<<endl;
												system("pause");
												system("cls");
										break;
										
										case 3:
												system("cls");
												cout<<"3. Matriz Triangular Superior"<<endl;
												system("pause");
												system("cls");
										break;
									
										case 4:
												system("cls");
												cout<<"4. Resultado del Sistema de Ecuaciones Algebraico Lineal"<<endl;
												system("pause");
												system("cls");
										break;
										}
								}while(menu4!=5);
									
						break;
					
				
						}
			

				}while(menu2!=3);
		}
	
	}while(menu!=3); 
	
}	
