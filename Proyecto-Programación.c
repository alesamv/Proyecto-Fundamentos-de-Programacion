#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include <iostream>
#include <fstream>
using namespace std;
int x;
FILE *DraMerino; FILE *DraHernandez; FILE *DraAylin; FILE *DrDonald; FILE *DrSteve; FILE *DraAlejandra; FILE *DraMonroy; FILE *DrYair; FILE *DrPena; FILE *DrRuiz; FILE *DrRojas; FILE *DrMorales; FILE *DrAlonso; FILE *DraNovoa; FILE *DraMartinez; FILE *DrFlores; FILE *DrEscalante; FILE *DrCruz; FILE *DrEnriquez; FILE *DrLeon; FILE *DrGarcia; FILE *DraVela; FILE *DrRamirez; FILE *DrVilla; FILE *DrGonzalez; 
void pediatra(); void ginecologo(); void mediGral(); void urologo(); void cardiologo(); 
void citas(); void citas2(); void citas3(); void citas4(); void citas5(); void citas6();void citas7();void citas8();void citas9();void citas10();void citas11();void citas12();void citas13();void citas14();void citas15();void citas16();void citas17();void citas18();void citas19();void citas20();void citas21();void citas22();void citas23();void citas24();void citas25();
void bajas();void bajas2();void bajas3();void bajas4();void bajas5();void bajas6();void bajas7();void bajas8();void bajas9();void bajas10();void bajas11();void bajas12();void bajas13();void bajas14();void bajas15();void bajas16();void bajas17();void bajas();void bajas18();void bajas19();void bajas20();void bajas21();void bajas22();void bajas23();void bajas24();void bajas25();
void imprimir();void imprimir2(); void imprimir3(); void imprimir4(); void imprimir5();void imprimir6();void imprimir7();void imprimir8();void imprimir9();void imprimir10();void imprimir11();void imprimir12();void imprimir13();void imprimir14();void imprimir15();void imprimir16();void imprimir17();void imprimir18();void imprimir19();void imprimir20();void imprimir21();void imprimir22();void imprimir23();void imprimir24();void imprimir25();
void agenda();void agenda2();void agenda3();void agenda4();void agenda5();void agenda6();void agenda7();void agenda8();void agenda9();void agenda10();void agenda11();void agenda12();void agenda13();void agenda14();void agenda15();void agenda16();void agenda17();void agenda18();void agenda19();void agenda20();void agenda21();void agenda22();void agenda23();void agenda24();void agenda25();
struct paciente
{	
	char expediente[50];
	char nombre [50];
	char ape1 [50]; 
	char ape2 [50];
	char direccion [50];
	char telefono [50];
	char fecha [50];
	char hora [50];
} datos;

	int op;

main()
{	
	printf("\n\t\tHOSPITAL\n\n");
	printf("\nSeleccione una especialidad: \n");
	printf("\t1)Pediatria\n");
	printf("\t2)Ginecologia\n");
	printf("\t3)Medico General\n");
	printf("\t4)Urologia\n");
	printf("\t5)Cardiologia\n");
	printf("IMPORTANTE: Consulta la agenda del medico antes de hacer tu cita\n(las citas son cada 30 minutos)");
	printf("\nOPCION: ");
	scanf("%d",&op);
	
	switch(op)
	{
		
		case 1:
			pediatra();
			break;
		case 2:
			ginecologo();
			break;
		case 3:
			mediGral();
			break;
		case 4:
			urologo();
			break;
		case 5:
			cardiologo();
		default:
			printf("Opcion no valida");
			break;
	}

}

void pediatra()
{
	system("cls");

	printf("\n\t\tMenu de Pediatras\n");
	printf("\t1)Dra.Merino\n");
	printf("\t2)Dra.Hernandez \n");
	printf("\t3)Dra.Ailyn\n");
	printf("\t4)Dr.Donald\n");
	printf("\t5)Dr.Steve\n");
	printf("OPCION: ");
	scanf("%d",&op);
	
	switch(op){
		
		case 1:
			system("cls");
			printf("1. Agenda de la Dra.Merino.\n");
			printf("\n2. Agendar consulta");
			printf("\n3. Bajas");
		    printf("\nOPCION: ");
		    scanf("%d",&op);
		    switch(op)
			{
			case 1:
				agenda();
				break;
			case 2:
				citas();
				break;
			case 3:
				bajas();
				break;	
			
			}
			break;
			
		case 2:
			system("cls");
			printf("1. Agenda de la Dra.Hernandez.\n");
			printf("\n2. Agendar consulta");
			printf("\n3. Bajas");
		    printf("\nOPCION: ");
		    scanf("%d",&op);
		    switch(op)
			{
			case 1:
				agenda2();
				break;
			case 2:
				citas2();
				break;
			case 3:
				bajas2();
				break;
		
			}
			break;
			
		case 3:
			system("cls");
			printf("1. Agenda de la Dra.Ailyn.\n");
			printf("2. Agendar consulta\n");
			printf("3. Bajas\n");
		    printf("\nOPCION: ");
		    scanf("%d",&op);
		    switch(op)
			{
				case 1:
				agenda3();
				break;	
			case 2:
				citas3();
			break;
			case 3:
				bajas3();
				break;
			
		}
			break;
		case 4:
			system("cls");
			printf("1. Agenda del Dr.Donald.\n");
			printf("2. Agendar consulta");
			printf("\n3. Bajas");
		    printf("\nOPCION: ");
		    scanf("%d",&op);
		    switch(op)
			{
			case 1:
				agenda4();
				break;
			case 2:
				citas4();
				break;
			case 3:
				bajas4();	
			}
			break;
		case 5:
			system("cls");
			printf("1. Agenda del Dr.Steve.\n");
		    printf("2. Agendar consulta");
			printf("\n3. Bajas");
		    printf("\nOPCION: ");
		    scanf("%d",&op);
		    switch(op)
			{
			case 2:
				case 1:
				agenda5();
				break;
				citas5();
				break;
			case 3:
				bajas5();
				break;	
			}
			break;
		default:
			printf("Opcion no valida");
			break;
		
	}
}

void ginecologo()
{	
	system("cls");

	printf("\n\t\tMenu de Ginecologos\n");
	printf("\t1)Dra. Alejandra\n");
	printf("\t2)Dra. Monroy\n");
	printf("\t3)Dr. Yair\n");
	printf("\t4)Dr. Peña\n");
	printf("\t5)Dr. Ruiz\n");
	printf("OPCION: ");
	scanf("%d",&op);
	
	switch(op)
	{	
	case 1:
			system("cls");
			printf("1. Agenda de la Dra. Alejandra.\n");
			printf("2. Agendar consulta");
			printf("\n3. Bajas");
		    printf("\nOPCION: ");
		    scanf("%d",&op);
		    switch(op)
			{
				case 1:
				agenda6();
				break;
				case 2:
					citas6();
					break;
				case 3:
					bajas6();
					break;	

			}
			break;
			
	case 2:
			system("cls");
			printf("1. Agenda de la Dra. Monroy.\n");
			printf("2. Agendar consulta");
			printf("\n3. Bajas");
		    printf("\nOPCION: ");
		    scanf("%d",&op);
		    switch(op)
			{
				case 1:
				agenda7();
				break;
				case 2:
					citas7();
				break;
				case 3:
				bajas7();
				break;
			}
			break;
			
		case 3:
			system("cls");
			printf("1. Agenda del Dr. Yair.\n");
			printf("2. Agendar consulta");
			printf("\n3. Bajas");
		    printf("\nOPCION: ");
		    scanf("%d",&op);
		    switch(op)
			{
				case 1:
				agenda8();
				break;
				case 2:
				citas8();
				break;
				case 3:
				bajas8();	
			}
			break;
			
		case 4:
			system("cls");
			printf("1. Agenda del Dr. Peña.\n");
			printf("2. . Agendar consulta");
			printf("\n3. Bajas");
		    printf("\nOPCION: ");
		    scanf("%d",&op);
		    switch(op)
			{
				case 1:
				agenda9();
				break;
				case 2:
					citas9();
					break;	
				case 3:
					bajas9();
					break;	
			}
			break;
		case 5:
			system("cls");
			printf("\tAgenda del Dr. Ruiz.\n");
			printf("\n1. Agendar consulta");
			printf("\n2. Bajas");
		    printf("\nOPCION: ");
		    scanf("%d",&op);
		    switch(op)
			{
				case 1:
				agenda10();
				break;
				case 2:
					citas10();
					break;
					case 3:
					bajas10();
					break;			
			}
			break;
		default:
			printf("Opcion no valida.");
			break;
	}
}

void mediGral()
{	
	system("cls");

	printf("\n\t\tMenu de Medicos Generales\n");
	printf("\t1)Dr. Rojas\n");
	printf("\t2)Dr. Morales\n");
	printf("\t3)Dr. Alonso\n");
	printf("\t4)Dra. Novoa\n");
	printf("\t5)Dra. Martinez\n");
	printf("OPCION: ");
	scanf("%d",&op);
	
	switch(op)
	{
		
		case 1:
			system("cls");
			printf("1. Agenda del Dr. Rojas.\n");
			printf("2. Agendar consulta");
			printf("\n3. Bajas");
		    printf("\nOPCION: ");
		    scanf("%d",&op);
		    switch(op)
			{
				case 1:
				agenda11();
				case 2:
					citas11();
					break;
			    case 3:
					bajas11();
					break;	
			}
			break;
			
		case 2:
			system("cls");
			printf("1. Agenda del Dr. Morales.\n");
			printf("2. Agendar consulta");
			printf("\n3. Bajas");
		    printf("\nOPCION: ");
		    scanf("%d",&op);
		    switch(op)
			{
				case 1:
				agenda12();
				case 2:
					citas12();
					break;
				case 3:
					bajas12();
					break;		
			}
			break;
			
		case 3:
			system("cls");
			printf("1. Agenda del Dr. Alonso.\n");
			printf("2. Agendar consulta");
			printf("\n3. Bajas");
		    printf("\nOPCION: ");
		    scanf("%d",&op);
		    switch(op)
			{
				case 1:
				agenda13();
				break;
				case 2:
					citas13();
					break;
				case 3:
					bajas13();
					break;		
			}
			break;
			
		case 4:
			system("cls");
			printf("1. Agenda de la Dra. Novoa.\n");
			printf("2. Agendar consulta");
			printf("\n3. Bajas");
		    printf("\nOPCION: ");
		    scanf("%d",&op);
		    switch(op)
			{
				case 1:
				agenda14();
				case 2:
					citas14();
					break;
				case 3:
					bajas14();
					break;		
			}
			break;
			
		case 5:
			system("cls");
			printf("1. Agenda de la Dra. Martinez.\n");
			printf("2. Agendar consulta");
			printf("\n3. Bajas");
		    printf("\nOPCION: ");
		    scanf("%d",&op);
		    switch(op)
			{
				case 1:
				agenda15();
				case 2:
				citas15();
				break;
				case 3:
					bajas15();
					break;	
			}
			break;
			
		default:
			printf("Opcion no valida.");
			break;
	
	}
}

void urologo()
{
	system("cls");

	printf("\n\t\tMenu de Urologos\n");
	printf("\t1)Dr. Flores\n");
	printf("\t2)Dr. Escalante\n");
	printf("\t3)Dr. Cruz\n");
	printf("\t4)Dr. Enriquez\n");
	printf("\t5)Dr. Leon\n");
	printf("OPCION: ");
	scanf("%d",&op);
	
	switch(op)
	{
		
		case 1:
			system("cls");
			printf("1. Agenda del Dr. Flores.\n");
			printf("2. Agendar consulta");
			printf("\n3. Bajas");
		    printf("\nOPCION: ");
		    scanf("%d",&op);
		    switch(op)
			{
				case 1:
				agenda16();
				break;
				case 2:
					citas16();
					break;
					case 3:
					bajas16();
					break;	
			}
			
			break;
			
		case 2:
			system("cls");
			printf("\tAgenda del Escalante.\n");
			printf("\n1. Agendar consulta");
			printf("\n2. Bajas");
		    printf("\nOPCION: ");
		    scanf("%d",&op);
		    switch(op)
			{
				case 1:
				agenda17();
				break;
				case 2:
					citas17();
					break;
					case 3:
					bajas17();
					break;	
			}
			break;
			
		case 3:
			system("cls");
			printf("1. Agenda del Dr. Cruz.\n");
			printf("2. Agendar consulta");
			printf("\n3. Bajas");
		    printf("\nOPCION: ");
		    scanf("%d",&op);
		    switch(op)
			{
				case 18:
				agenda();
				break;
				case 2:
					citas18();
					break;
					case 3:
					bajas18();
					break;	
			}
			break;
			
		case 4:
			system("cls");
			printf("1. Agenda del Dr. Enriquez.\n");
			printf("2. Agendar consulta");
			printf("\n3. Bajas");
		    printf("\nOPCION: ");
		    scanf("%d",&op);
		    switch(op)
			{
				case 1:
				agenda19();
				break;
				case 2:
					citas19();
					break;
				case 3:
					bajas19();
					break;		
			}
			break;
			
		case 5:
			system("cls");
			printf("1. Agenda del Dr. Leon.\n");
			printf("2. Agendar consulta");
			printf("\n3. Bajas");
		    printf("\nOPCION: ");
		    scanf("%d",&op);
		    switch(op)
			{
				case 1:
				agenda20();
				break;
				case 2:
					citas20();
					break;
				case 3:
					bajas20();
					break;			
			}
			
			break;
		default:
			printf("Opcion no valida.");
			break;
	
	}
	
}
void cardiologo()
{
	system("cls");

	printf("\n\t\tMenu de Cardiologos\n");
	printf("\t1)Dr. Garcia\n");
	printf("\t2)Dra. Vela\n");
	printf("\t3)Dr. Ramirez\n");
	printf("\t4)Dr. Villa\n");
	printf("\t5)Dr Gonzalez\n");
	printf("OPCION: ");
	scanf("%d",&op);
	
	switch(op)
	{
		
		case 1:
			system("cls");
			printf("1. Agenda del Dr. Garcia.\n");
			printf("2. Agendar consulta");
			printf("\n3. Bajas");
		    printf("\nOPCION: ");
		    scanf("%d",&op);
		    switch(op)
			{
				case 1:
				agenda21();
				break;
				case 2:
					citas21();
					break;
				case 3:
					bajas21();
					break;		
			
			}
			break;
			
		case 2:
			system("cls");
			printf("1. Agenda de la Dra. Vela.\n");
			printf("2. Agendar consulta");
			printf("\n3. Bajas");
		    printf("\nOPCION: ");
		    scanf("%d",&op);
		    switch(op)
			{
				case 1:
				agenda22();
				break;
				case 2:
				citas22();
			break;
			    case 3:
					bajas22();
					break;	
			
			}
			break;
			
		case 3:
			system("cls");
			printf("1. Agenda del Dr. Ramirez.\n");
			printf("2. Agendar consulta");
			printf("\n3. Bajas");
		    printf("\nOPCION: ");
		    scanf("%d",&op);
		    switch(op)
			{
				case 1:
				agenda23();
				break;
				case 2:
					citas23();
					break;
				case 3:
					bajas23();
					break;		
			}
			break;
			
		case 4:
			system("cls");
			printf("1. Agenda del Dr. Villa.\n");
			printf("2. Agendar consulta");
			printf("\n3. Bajas");
		    printf("\nOPCION: ");
		    scanf("%d",&op);
		    switch(op)
			{
				case 1:
				agenda24();
				break;
				case 2:
					citas24();
					break;
				case 3:
					bajas24();
					break;			
			}
			break;
			
		case 5:
			system("cls");
			printf("1. Agenda del Dr Gonzalez.\n");
			printf("2. Agendar consulta");
			printf("\n3. Bajas");
		    printf("\nOPCION: ");
		    scanf("%d",&op);
		    switch(op)
			{
				case 1:
				agenda25();
				break;
				case 2:
					citas25();
					break;
				case 3:
					bajas25();
					break;			
			}
			break;
			
		default:
			printf("Opcion no valida.");
			break;
	
	}
}

void formato()
{
	printf("\tNumero de Expediente(1 digito): ");
	scanf("%s",&datos.expediente);	
	printf("\n\tNombre: ");
	scanf("%s",&datos.nombre);
	strupr(datos.nombre);
	printf("\tApellido Paterno: ");
	scanf("%s",&datos.ape1);
	strupr(datos.ape1);
	printf("\tApellido Materno: ");
	scanf("%s",&datos.ape2);
	strupr(datos.ape2);
	printf("\tDireccion: ");
	scanf("%s",&datos.direccion);
	strupr(datos.direccion);    
	printf("\tTelefono: ");
	scanf("%s",&datos.telefono);
	printf("\tFecha (dd/mm/aa): ");
	scanf("%s",&datos.fecha);
	printf("\tHora(Las citas son cada hora, por favor, introduzca hora entera): ");
	scanf("%s",&datos.hora);
	
}
void citas()
{
	system("cls");
	formato();
	imprimir();
	system("cls");
 	printf("\n\t\tTu cita fue agendada");
}
void citas2()
{
	system("cls");
	formato();
	imprimir2();
	system("cls");
 	printf("\n\t\tTu cita fue agendada");
}
void citas3()
{
	system("cls");
	formato();
	imprimir3();
	system("cls");
 	printf("\n\t\tTu cita fue agendada");
}
void citas4()
{
	system("cls");
	formato();
	imprimir4();
	system("cls");
 	printf("\n\t\tTu cita fue agendada");
}
void citas5()
{
	system("cls");
	formato();
	imprimir5();
	system("cls");
 	printf("\n\t\tTu cita fue agendada");
}
void citas6()
{
	system("cls");
	formato();
	imprimir6();
	system("cls");
 	printf("\n\t\tTu cita fue agendada");
}
void citas7()
{
	system("cls");
	formato();
	imprimir7();
	system("cls");
 	printf("\n\t\tTu cita fue agendada");
}
void citas8()
{
	system("cls");
	formato();
	imprimir8();
	system("cls");
 	printf("\n\t\tTu cita fue agendada");
}
void citas9()
{
	system("cls");
	formato();
	imprimir9();
	system("cls");
 	printf("\n\t\tTu cita fue agendada");
}
void citas10()
{
	system("cls");
	formato();
	imprimir10();
	system("cls");
 	printf("\n\t\tTu cita fue agendada");
}
void citas11()
{
	system("cls");
	formato();
	imprimir11();
	system("cls");
 	printf("\n\t\tTu cita fue agendada");
}
void citas12()
{
	system("cls");
	formato();
	imprimir12();
	system("cls");
 	printf("\n\t\tTu cita fue agendada");
}
void citas13()
{
	system("cls");
	formato();
	imprimir13();
	system("cls");
 	printf("\n\t\tTu cita fue agendada");
}
void citas14()
{
	system("cls");
	formato();
	imprimir14();
	system("cls");
 	printf("\n\t\tTu cita fue agendada");
}
void citas15()
{
	system("cls");
	formato();
	imprimir15();
	system("cls");
 	printf("\n\t\tTu cita fue agendada");
}
void citas16()
{
	system("cls");
	formato();
	imprimir16();
	system("cls");
 	printf("\n\t\tTu cita fue agendada");
}
void citas17()
{
	system("cls");
	formato();
	imprimir17();
	system("cls");
 	printf("\n\t\tTu cita fue agendada");
}
void citas18()
{
	system("cls");
	formato();
	imprimir18();
	system("cls");
 	printf("\n\t\tTu cita fue agendada");
}
void citas19()
{
	system("cls");
	formato();
	imprimir19();
	system("cls");
 	printf("\n\t\tTu cita fue agendada");
}
void citas20()
{
	system("cls");
	formato();
	imprimir20();
	system("cls");
 	printf("\n\t\tTu cita fue agendada");
}
void citas21()
{
	system("cls");
	formato();
	imprimir21();
	system("cls");
 	printf("\n\t\tTu cita fue agendada");
}
void citas22()
{
	system("cls");
	formato();
	imprimir22();
	system("cls");
 	printf("\n\t\tTu cita fue agendada");
}
void citas23()
{
	system("cls");
	formato();
	imprimir23();
	system("cls");
 	printf("\n\t\tTu cita fue agendada");
}
void citas24()
{
	system("cls");
	formato();
	imprimir24();
	system("cls");
 	printf("\n\t\tTu cita fue agendada");
}
void citas25()
{
	system("cls");
	formato();
	imprimir25();
	system("cls");
 	printf("\n\t\tTu cita fue agendada");
}
void imprimir()
{
	
	DraMerino=fopen("DraMerino.txt","a");
	fprintf(DraMerino,"%s\n",datos.expediente);
	fprintf(DraMerino,"Nombre:%s %s %s\t\n",datos.nombre,datos.ape1,datos.ape2);
	fprintf(DraMerino,"Direccion:%s\t\n",datos.direccion);
	fprintf(DraMerino,"Telefono:%s\t\n",datos.telefono);
	fprintf(DraMerino,"Fecha:%s\t\n",datos.fecha);
	fprintf(DraMerino,"Hora:%s\n ",datos.hora);

}
void imprimir2()
{
	DraHernandez=fopen("DraHernandez.txt","a");
	fprintf(DraHernandez,"%s\n",datos.expediente);
	fprintf(DraHernandez,"Nombre:%s %s %s\t\n",datos.nombre,datos.ape1,datos.ape2);
	fprintf(DraHernandez,"Direccion:%s\t\n",datos.direccion);
	fprintf(DraHernandez,"Telefono:%s\t\n",datos.telefono);
	fprintf(DraHernandez,"Fecha:%s\t\n",datos.fecha);
	fprintf(DraHernandez,"Hora:%s\n ",datos.hora);
}
void imprimir3()
{
	DraAylin=fopen("DraAylin.txt","a");
	fprintf(DraAylin,"%s\n",datos.expediente);
	fprintf(DraAylin,"Nombre:%s %s %s\t\n",datos.nombre,datos.ape1,datos.ape2);
	fprintf(DraAylin,"Direccion:%s\t\n",datos.direccion);
	fprintf(DraAylin,"Telefono:%s\t\n",datos.telefono);
	fprintf(DraAylin,"Fecha:%s\t\n",datos.fecha);
	fprintf(DraAylin,"Hora:%s\n ",datos.hora);
}
void imprimir4()
{
	DrDonald=fopen("DrDonald.txt","a");
	fprintf(DrDonald,"%s\n",datos.expediente);
	fprintf(DrDonald,"Nombre:%s %s %s\t\n",datos.nombre,datos.ape1,datos.ape2);
	fprintf(DrDonald,"Direccion:%s\t\n",datos.direccion);
	fprintf(DrDonald,"Telefono:%s\t\n",datos.telefono);
	fprintf(DrDonald,"Fecha:%s\t\n",datos.fecha);
	fprintf(DrDonald,"Hora:%s\n ",datos.hora);
}
void imprimir5()
{
	DrSteve=fopen("DrSteve.txt","a");
	fprintf(DrSteve,"%s\n",datos.expediente);
	fprintf(DrSteve,"Nombre:%s %s %s\t\n",datos.nombre,datos.ape1,datos.ape2);
	fprintf(DrSteve,"Direccion:%s\t\n",datos.direccion);
	fprintf(DrSteve,"Telefono:%s\t\n",datos.telefono);
	fprintf(DrSteve,"Fecha:%s\t\n",datos.fecha);
	fprintf(DrSteve,"Hora:%s\n ",datos.hora);
}
void imprimir6()
{
	DraAlejandra=fopen("DraAlejandra.txt","a");
	fprintf(DraAlejandra,"%s\n",datos.expediente);
	fprintf(DraAlejandra,"Nombre:%s %s %s\t\n",datos.nombre,datos.ape1,datos.ape2);
	fprintf(DraAlejandra,"Direccion:%s\t\n",datos.direccion);
	fprintf(DraAlejandra,"Telefono:%s\t\n",datos.telefono);
	fprintf(DraAlejandra,"Fecha:%s\t\n",datos.fecha);
	fprintf(DraAlejandra,"Hora:%s\n ",datos.hora);
}
void imprimir7()
{
	DraMonroy=fopen("DraMonroy.txt","a");
	fprintf(DraMonroy,"%s\n",datos.expediente);
	fprintf(DraMonroy,"Nombre:%s %s %s\t\n",datos.nombre,datos.ape1,datos.ape2);
	fprintf(DraMonroy,"Direccion:%s\t\n",datos.direccion);
	fprintf(DraMonroy,"Telefono:%s\t\n",datos.telefono);
	fprintf(DraMonroy,"Fecha:%s\t\n",datos.fecha);
	fprintf(DraMonroy,"Hora:%s\n ",datos.hora);
}
void imprimir8()
{
	DrYair=fopen("DrYair.txt","a");
	fprintf(DrYair,"%s\n",datos.expediente);
	fprintf(DrYair,"Nombre:%s %s %s\t\n",datos.nombre,datos.ape1,datos.ape2);
	fprintf(DrYair,"Direccion:%s\t\n",datos.direccion);
	fprintf(DrYair,"Telefono:%s\t\n",datos.telefono);
	fprintf(DrYair,"Fecha:%s\t\n",datos.fecha);
	fprintf(DrYair,"Hora:%s\n ",datos.hora);
}
void imprimir9()
{
	DrPena=fopen("DrPeña.txt","a");
	fprintf(DrPena,"%s\n",datos.expediente);
	fprintf(DrPena,"Nombre:%s %s %s\t\n",datos.nombre,datos.ape1,datos.ape2);
	fprintf(DrPena,"Direccion:%s\t\n",datos.direccion);
	fprintf(DrPena,"Telefono:%s\t\n",datos.telefono);
	fprintf(DrPena,"Fecha:%s\t\n",datos.fecha);
	fprintf(DrPena,"Hora:%s\n ",datos.hora);
}
void imprimir10()
{
	DrRuiz=fopen("DrRuiz.txt","a");
	fprintf(DrRuiz,"%s\n",datos.expediente);
	fprintf(DrRuiz,"Nombre:%s %s %s\t\n",datos.nombre,datos.ape1,datos.ape2);
	fprintf(DrRuiz,"Direccion:%s\t\n",datos.direccion);
	fprintf(DrRuiz,"Telefono:%s\t\n",datos.telefono);
	fprintf(DrRuiz,"Fecha:%s\t\n",datos.fecha);
	fprintf(DrRuiz,"Hora:%s\n ",datos.hora);
}
void imprimir11()
{
	DrRojas=fopen("DrRojas.txt","a");
	fprintf(DrRojas,"%s\n",datos.expediente);
	fprintf(DrRojas,"Nombre:%s %s %s\t\n",datos.nombre,datos.ape1,datos.ape2);
	fprintf(DrRojas,"Direccion:%s\t\n",datos.direccion);
	fprintf(DrRojas,"Telefono:%s\t\n",datos.telefono);
	fprintf(DrRojas,"Fecha:%s\t\n",datos.fecha);
	fprintf(DrRojas,"Hora:%s\n ",datos.hora);
}
void imprimir12()
{
	DrMorales=fopen("DrMorales.txt","a");
	fprintf(DrMorales,"%s\n",datos.expediente);
	fprintf(DrMorales,"Nombre:%s %s %s\t\n",datos.nombre,datos.ape1,datos.ape2);
	fprintf(DrMorales,"Direccion:%s\t\n",datos.direccion);
	fprintf(DrMorales,"Telefono:%s\t\n",datos.telefono);
	fprintf(DrMorales,"Fecha:%s\t\n",datos.fecha);
	fprintf(DrMorales,"Hora:%s\n ",datos.hora);
}
void imprimir13()
{
	DrAlonso=fopen("DrAlonso.txt","a");
	fprintf(DrAlonso,"%s\n",datos.expediente);
	fprintf(DrAlonso,"Nombre:%s %s %s\t\n",datos.nombre,datos.ape1,datos.ape2);
	fprintf(DrAlonso,"Direccion:%s\t\n",datos.direccion);
	fprintf(DrAlonso,"Telefono:%s\t\n",datos.telefono);
	fprintf(DrAlonso,"Fecha:%s\t\n",datos.fecha);
	fprintf(DrAlonso,"Hora:%s\n ",datos.hora);
}
void imprimir14()
{
	DraNovoa=fopen("DraNovoa.txt","a");
	fprintf(DraNovoa,"%s\n",datos.expediente);
	fprintf(DraNovoa,"Nombre:%s %s %s\t\n",datos.nombre,datos.ape1,datos.ape2);
	fprintf(DraNovoa,"Direccion:%s\t\n",datos.direccion);
	fprintf(DraNovoa,"Telefono:%s\t\n",datos.telefono);
	fprintf(DraNovoa,"Fecha:%s\t\n",datos.fecha);
	fprintf(DraNovoa,"Hora:%s\n ",datos.hora);
}
void imprimir15()
{
	DraMartinez=fopen("DraMartinez.txt","a");
	fprintf(DraMartinez,"%s\n",datos.expediente);
	fprintf(DraMartinez,"Nombre:%s %s %s\t\n",datos.nombre,datos.ape1,datos.ape2);
	fprintf(DraMartinez,"Direccion:%s\t\n",datos.direccion);
	fprintf(DraMartinez,"Telefono:%s\t\n",datos.telefono);
	fprintf(DraMartinez,"Fecha:%s\t\n",datos.fecha);
	fprintf(DraMartinez,"Hora:%s\n ",datos.hora);
}
void imprimir16()
{
	DrFlores=fopen("DrFlores.txt","a");
	fprintf(DrFlores,"%s\n",datos.expediente);
	fprintf(DrFlores,"Nombre:%s %s %s\t\n",datos.nombre,datos.ape1,datos.ape2);
	fprintf(DrFlores,"Direccion:%s\t\n",datos.direccion);
	fprintf(DrFlores,"Telefono:%s\t\n",datos.telefono);
	fprintf(DrFlores,"Fecha:%s\t\n",datos.fecha);
	fprintf(DrFlores,"Hora:%s\n ",datos.hora);
}
void imprimir17()
{
	DrEscalante=fopen("DrEscalante.txt","a");
	fprintf(DrEscalante,"%s\n",datos.expediente);
	fprintf(DrEscalante,"Nombre:%s %s %s\t\n",datos.nombre,datos.ape1,datos.ape2);
	fprintf(DrEscalante,"Direccion:%s\t\n",datos.direccion);
	fprintf(DrEscalante,"Telefono:%s\t\n",datos.telefono);
	fprintf(DrEscalante,"Fecha:%s\t\n",datos.fecha);
	fprintf(DrEscalante,"Hora:%s\n ",datos.hora);
}
void imprimir18()
{
	DrCruz=fopen("DrCruz.txt","a");
	fprintf(DrCruz,"%s\n",datos.expediente);
	fprintf(DrCruz,"Nombre:%s %s %s\t\n",datos.nombre,datos.ape1,datos.ape2);
	fprintf(DrCruz,"Direccion:%s\t\n",datos.direccion);
	fprintf(DrCruz,"Telefono:%s\t\n",datos.telefono);
	fprintf(DrCruz,"Fecha:%s\t\n",datos.fecha);
	fprintf(DrCruz,"Hora:%s\n ",datos.hora);
}
void imprimir19()
{
	DrEnriquez=fopen("DrEnriquez.txt","a");
	fprintf(DrEnriquez,"%s\n",datos.expediente);
	fprintf(DrEnriquez,"Nombre:%s %s %s\t\n",datos.nombre,datos.ape1,datos.ape2);
	fprintf(DrEnriquez,"Direccion:%s\t\n",datos.direccion);
	fprintf(DrEnriquez,"Telefono:%s\t\n",datos.telefono);
	fprintf(DrEnriquez,"Fecha:%s\t\n",datos.fecha);
	fprintf(DrEnriquez,"Hora:%s\n ",datos.hora);
}
void imprimir20()
{
	DrLeon=fopen("DrLeon.txt","a");
	fprintf(DrLeon,"%s\n",datos.expediente);
	fprintf(DrLeon,"Nombre:%s %s %s\t\n",datos.nombre,datos.ape1,datos.ape2);
	fprintf(DrLeon,"Direccion:%s\t\n",datos.direccion);
	fprintf(DrLeon,"Telefono:%s\t\n",datos.telefono);
	fprintf(DrLeon,"Fecha:%s\t\n",datos.fecha);
	fprintf(DrLeon,"Hora:%s\n ",datos.hora);
}
void imprimir21()
{
	DrGarcia=fopen("DrGarcia.txt","a");
	fprintf(DrGarcia,"%s\n",datos.expediente);
	fprintf(DrGarcia,"Nombre:%s %s %s\t\n",datos.nombre,datos.ape1,datos.ape2);
	fprintf(DrGarcia,"Direccion:%s\t\n",datos.direccion);
	fprintf(DrGarcia,"Telefono:%s\t\n",datos.telefono);
	fprintf(DrGarcia,"Fecha:%s\t\n",datos.fecha);
	fprintf(DrGarcia,"Hora:%s\n ",datos.hora);
}
void imprimir22()
{
	DraVela=fopen("DraVela.txt","a");
	fprintf(DraVela,"%s\n",datos.expediente);
	fprintf(DraVela,"Nombre:%s %s %s\t\n",datos.nombre,datos.ape1,datos.ape2);
	fprintf(DraVela,"Direccion:%s\t\n",datos.direccion);
	fprintf(DraVela,"Telefono:%s\t\n",datos.telefono);
	fprintf(DraVela,"Fecha:%s\t\n",datos.fecha);
	fprintf(DraVela,"Hora:%s\n ",datos.hora);
}
void imprimir23()
{
	DrRamirez=fopen("DrRamirez.txt","a");
	fprintf(DrRamirez,"%s\n",datos.expediente);
	fprintf(DrRamirez,"Nombre:%s %s %s\t\n",datos.nombre,datos.ape1,datos.ape2);
	fprintf(DrRamirez,"Direccion:%s\t\n",datos.direccion);
	fprintf(DrRamirez,"Telefono:%s\t\n",datos.telefono);
	fprintf(DrRamirez,"Fecha:%s\t\n",datos.fecha);
	fprintf(DrRamirez,"Hora:%s\n ",datos.hora);
}
void imprimir24()
{
	DrVilla=fopen("DrVilla.txt","a");
	fprintf(DrVilla,"%s\n",datos.expediente);
	fprintf(DrVilla,"Nombre:%s %s %s\t\n",datos.nombre,datos.ape1,datos.ape2);
	fprintf(DrVilla,"Direccion:%s\t\n",datos.direccion);
	fprintf(DrVilla,"Telefono:%s\t\n",datos.telefono);
	fprintf(DrVilla,"Fecha:%s\t\n",datos.fecha);
	fprintf(DrVilla,"Hora:%s\n ",datos.hora);
}
void imprimir25()
{
	DrGonzalez=fopen("DrGonzalez.txt","a");
	fprintf(DrGonzalez,"%s\n",datos.expediente);
	fprintf(DrGonzalez,"Nombre:%s %s %s\t\n",datos.nombre,datos.ape1,datos.ape2);
	fprintf(DrGonzalez,"Direccion:%s\t\n",datos.direccion);
	fprintf(DrGonzalez,"Telefono:%s\t\n",datos.telefono);
	fprintf(DrGonzalez,"Fecha:%s\t\n",datos.fecha);
	fprintf(DrGonzalez,"Hora:%s\n ",datos.hora);
}

void bajas()
{
	ifstream salida;
	salida.open("DraMerino.txt",ios::in);
	
	ofstream entrada;
	entrada.open("temp.txt",ios::out);
	if(salida.fail()){
		printf("Hubo un error");
		getch();
	}
	else
	{
		char aux[20];
		printf("Dame el expediente");
		scanf("%s",&aux);
		salida>>datos.expediente;
		
		while(!salida.eof()){
			
			salida>>datos.nombre>>datos.ape1>>datos.ape2>>datos.direccion>>datos.telefono>>datos.fecha>>datos.hora;
			
		if(strcmp(aux,datos.expediente)==0)
		
		{
			printf("La cita se ha cancelado correctamente.");
			getch();
		}
		
		else{
			entrada<<datos.expediente<<"\n"<<datos.nombre<<" "<<datos.ape1<<" "<<datos.ape2<<"\n"<<datos.direccion<<"\n"<<datos.telefono<<"\n"<<datos.fecha<<"\n"<<datos.hora<<endl;
		}
		
		salida>>datos.expediente;
		
		
		}
		entrada.close();
		salida.close();
		remove("DraMerino.txt");
		rename("temp.txt","DraMerino.txt");
	
}
}


void bajas2()
{
	ifstream salida;
	salida.open("DraHernandez.txt",ios::in);
	
	ofstream entrada;
	entrada.open("temp.txt",ios::out);
	if(salida.fail()){
		printf("Hubo un error");
		getch();
	}
	else
	{
		char aux[20];
		printf("Dame el expediente");
		scanf("%s",&aux);
		salida>>datos.expediente;
		
		while(!salida.eof()){
			
			salida>>datos.nombre>>datos.ape1>>datos.ape2>>datos.direccion>>datos.telefono>>datos.fecha>>datos.hora;
			
		if(strcmp(aux,datos.expediente)==0)
		
		{
			printf("La cita se ha cancelado correctamente.");
			getch();
		}
		
		else{
			entrada<<datos.expediente<<"\n"<<datos.nombre<<" "<<datos.ape1<<" "<<datos.ape2<<"\n"<<datos.direccion<<"\n"<<datos.telefono<<"\n"<<datos.fecha<<"\n"<<datos.hora<<endl;
		}
		
		salida>>datos.expediente;
		
		
		}
		entrada.close();
		salida.close();
		remove("DraHernandez.txt");
		rename("temp.txt","DraHernandez.txt");
	
}
}
void bajas3()
{
	ifstream salida;
	salida.open("DraAylin.txt",ios::in);
	
	ofstream entrada;
	entrada.open("temp.txt",ios::out);
	if(salida.fail()){
		printf("Hubo un error");
		getch();
	}
	else
	{
		char aux[20];
		printf("Dame el expediente");
		scanf("%s",&aux);
		salida>>datos.expediente;
		
		while(!salida.eof()){
			
			salida>>datos.nombre>>datos.ape1>>datos.ape2>>datos.direccion>>datos.telefono>>datos.fecha>>datos.hora;
			
		if(strcmp(aux,datos.expediente)==0)
		
		{
			printf("La cita se ha cancelado correctamente.");
			getch();
		}
		
		else{
			entrada<<datos.expediente<<"\n"<<datos.nombre<<" "<<datos.ape1<<" "<<datos.ape2<<"\n"<<datos.direccion<<"\n"<<datos.telefono<<"\n"<<datos.fecha<<"\n"<<datos.hora<<endl;
		}
		
		salida>>datos.expediente;
		
		
		}
		entrada.close();
		salida.close();
		remove("DraAylin.txt");
		rename("temp.txt","DraAylin.txt");
	
}
}
void bajas4()
{
	ifstream salida;
	salida.open("DrDonald.txt",ios::in);
	
	ofstream entrada;
	entrada.open("temp.txt",ios::out);
	if(salida.fail()){
		printf("Hubo un error");
		getch();
	}
	else
	{
		char aux[20];
		printf("Dame el expediente");
		scanf("%s",&aux);
		salida>>datos.expediente;
		
		while(!salida.eof()){
			
			salida>>datos.nombre>>datos.ape1>>datos.ape2>>datos.direccion>>datos.telefono>>datos.fecha>>datos.hora;
			
		if(strcmp(aux,datos.expediente)==0)
		
		{
			printf("La cita se ha cancelado correctamente.");
			getch();
		}
		
		else{
			entrada<<datos.expediente<<"\n"<<datos.nombre<<" "<<datos.ape1<<" "<<datos.ape2<<"\n"<<datos.direccion<<"\n"<<datos.telefono<<"\n"<<datos.fecha<<"\n"<<datos.hora<<endl;
		}
		
		salida>>datos.expediente;
		
		
		}
		entrada.close();
		salida.close();
		remove("DrDonald.txt");
		rename("temp.txt","DrDonald.txt");
	
}
}
void bajas5()
{
	ifstream salida;
	salida.open("DrSteve.txt",ios::in);
	
	ofstream entrada;
	entrada.open("temp.txt",ios::out);
	if(salida.fail()){
		printf("Hubo un error");
		getch();
	}
	else
	{
		char aux[20];
		printf("Dame el expediente");
		scanf("%s",&aux);
		salida>>datos.expediente;
		
		while(!salida.eof()){
			
			salida>>datos.nombre>>datos.ape1>>datos.ape2>>datos.direccion>>datos.telefono>>datos.fecha>>datos.hora;
			
		if(strcmp(aux,datos.expediente)==0)
		
		{
			printf("La cita se ha cancelado correctamente.");
			getch();
		}
		
		else{
			entrada<<datos.expediente<<"\n"<<datos.nombre<<" "<<datos.ape1<<" "<<datos.ape2<<"\n"<<datos.direccion<<"\n"<<datos.telefono<<"\n"<<datos.fecha<<"\n"<<datos.hora<<endl;
		}
		
		salida>>datos.expediente;
		
		
		}
		entrada.close();
		salida.close();
		remove("DrSteve.txt");
		rename("temp.txt","DrSteve.txt");
	
}
}
void bajas6()
{
	ifstream salida;
	salida.open("DraAlejandra.txt",ios::in);
	
	ofstream entrada;
	entrada.open("temp.txt",ios::out);
	if(salida.fail()){
		printf("Hubo un error");
		getch();
	}
	else
	{
		char aux[20];
		printf("Dame el expediente");
		scanf("%s",&aux);
		salida>>datos.expediente;
		
		while(!salida.eof()){
			
			salida>>datos.nombre>>datos.ape1>>datos.ape2>>datos.direccion>>datos.telefono>>datos.fecha>>datos.hora;
			
		if(strcmp(aux,datos.expediente)==0)
		
		{
			printf("La cita se ha cancelado correctamente.");
			getch();
		}
		
		else{
			entrada<<datos.expediente<<"\n"<<datos.nombre<<" "<<datos.ape1<<" "<<datos.ape2<<"\n"<<datos.direccion<<"\n"<<datos.telefono<<"\n"<<datos.fecha<<"\n"<<datos.hora<<endl;
		}
		
		salida>>datos.expediente;
		
		
		}
		entrada.close();
		salida.close();
		remove("DraAlejandra.txt");
		rename("temp.txt","DraAlejandra.txt");
	
}
}
void bajas7()
{
	ifstream salida;
	salida.open("DraMonroy.txt",ios::in);
	
	ofstream entrada;
	entrada.open("temp.txt",ios::out);
	if(salida.fail()){
		printf("Hubo un error");
		getch();
	}
	else
	{
		char aux[20];
		printf("Dame el expediente");
		scanf("%s",&aux);
		salida>>datos.expediente;
		
		while(!salida.eof()){
			
			salida>>datos.nombre>>datos.ape1>>datos.ape2>>datos.direccion>>datos.telefono>>datos.fecha>>datos.hora;
			
		if(strcmp(aux,datos.expediente)==0)
		
		{
			printf("La cita se ha cancelado correctamente.");
			getch();
		}
		
		else{
			entrada<<datos.expediente<<"\n"<<datos.nombre<<" "<<datos.ape1<<" "<<datos.ape2<<"\n"<<datos.direccion<<"\n"<<datos.telefono<<"\n"<<datos.fecha<<"\n"<<datos.hora<<endl;
		}
		
		salida>>datos.expediente;
		
		
		}
		entrada.close();
		salida.close();
		remove("DraMonroy.txt");
		rename("temp.txt","DraMonroy.txt");
	
}
}
void bajas8()
{
	ifstream salida;
	salida.open("DrYair.txt",ios::in);
	
	ofstream entrada;
	entrada.open("temp.txt",ios::out);
	if(salida.fail()){
		printf("Hubo un error");
		getch();
	}
	else
	{
		char aux[20];
		printf("Dame el expediente");
		scanf("%s",&aux);
		salida>>datos.expediente;
		
		while(!salida.eof()){
			
			salida>>datos.nombre>>datos.ape1>>datos.ape2>>datos.direccion>>datos.telefono>>datos.fecha>>datos.hora;
			
		if(strcmp(aux,datos.expediente)==0)
		
		{
			printf("La cita se ha cancelado correctamente.");
			getch();
		}
		
		else{
			entrada<<datos.expediente<<"\n"<<datos.nombre<<" "<<datos.ape1<<" "<<datos.ape2<<"\n"<<datos.direccion<<"\n"<<datos.telefono<<"\n"<<datos.fecha<<"\n"<<datos.hora<<endl;
		}
		
		salida>>datos.expediente;
		
		
		}
		entrada.close();
		salida.close();
		remove("DrYair.txt");
		rename("temp.txt","DrYair.txt");
	
}
}
void bajas9()
{
	ifstream salida;
	salida.open("DrPeña.txt",ios::in);
	
	ofstream entrada;
	entrada.open("temp.txt",ios::out);
	if(salida.fail()){
		printf("Hubo un error");
		getch();
	}
	else
	{
		char aux[20];
		printf("Dame el expediente");
		scanf("%s",&aux);
		salida>>datos.expediente;
		
		while(!salida.eof()){
			
			salida>>datos.nombre>>datos.ape1>>datos.ape2>>datos.direccion>>datos.telefono>>datos.fecha>>datos.hora;
			
		if(strcmp(aux,datos.expediente)==0)
		
		{
			printf("La cita se ha cancelado correctamente.");
			getch();
		}
		
		else{
			entrada<<datos.expediente<<"\n"<<datos.nombre<<" "<<datos.ape1<<" "<<datos.ape2<<"\n"<<datos.direccion<<"\n"<<datos.telefono<<"\n"<<datos.fecha<<"\n"<<datos.hora<<endl;
		}
		
		salida>>datos.expediente;
		
		
		}
		entrada.close();
		salida.close();
		remove("DrPeña.txt");
		rename("temp.txt","DrPeña.txt");
	
}
}
void bajas10()
{
	ifstream salida;
	salida.open("DrRuiz.txt",ios::in);
	
	ofstream entrada;
	entrada.open("temp.txt",ios::out);
	if(salida.fail()){
		printf("Hubo un error");
		getch();
	}
	else
	{
		char aux[20];
		printf("Dame el expediente");
		scanf("%s",&aux);
		salida>>datos.expediente;
		
		while(!salida.eof()){
			
			salida>>datos.nombre>>datos.ape1>>datos.ape2>>datos.direccion>>datos.telefono>>datos.fecha>>datos.hora;
			
		if(strcmp(aux,datos.expediente)==0)
		
		{
			printf("La cita se ha cancelado correctamente.");
			getch();
		}
		
		else{
			entrada<<datos.expediente<<"\n"<<datos.nombre<<" "<<datos.ape1<<" "<<datos.ape2<<"\n"<<datos.direccion<<"\n"<<datos.telefono<<"\n"<<datos.fecha<<"\n"<<datos.hora<<endl;
		}
		
		salida>>datos.expediente;
		
		
		}
		entrada.close();
		salida.close();
		remove("DrRuiz.txt");
		rename("temp.txt","DrRuiz.txt");
	
}
}
void bajas11()
{
	ifstream salida;
	salida.open("DrRojas.txt",ios::in);
	
	ofstream entrada;
	entrada.open("temp.txt",ios::out);
	if(salida.fail()){
		printf("Hubo un error");
		getch();
	}
	else
	{
		char aux[20];
		printf("Dame el expediente");
		scanf("%s",&aux);
		salida>>datos.expediente;
		
		while(!salida.eof()){
			
			salida>>datos.nombre>>datos.ape1>>datos.ape2>>datos.direccion>>datos.telefono>>datos.fecha>>datos.hora;
			
		if(strcmp(aux,datos.expediente)==0)
		
		{
			printf("La cita se ha cancelado correctamente.");
			getch();
		}
		
		else{
			entrada<<datos.expediente<<"\n"<<datos.nombre<<" "<<datos.ape1<<" "<<datos.ape2<<"\n"<<datos.direccion<<"\n"<<datos.telefono<<"\n"<<datos.fecha<<"\n"<<datos.hora<<endl;
		}
		
		salida>>datos.expediente;
		
		
		}
		entrada.close();
		salida.close();
		remove("DrRojas.txt");
		rename("temp.txt","DrRojas.txt");
	
}
}
void bajas12()
{
	ifstream salida;
	salida.open("DrMorales.txt",ios::in);
	
	ofstream entrada;
	entrada.open("temp.txt",ios::out);
	if(salida.fail()){
		printf("Hubo un error");
		getch();
	}
	else
	{
		char aux[20];
		printf("Dame el expediente");
		scanf("%s",&aux);
		salida>>datos.expediente;
		
		while(!salida.eof()){
			
			salida>>datos.nombre>>datos.ape1>>datos.ape2>>datos.direccion>>datos.telefono>>datos.fecha>>datos.hora;
			
		if(strcmp(aux,datos.expediente)==0)
		
		{
			printf("La cita se ha cancelado correctamente.");
			getch();
		}
		
		else{
			entrada<<datos.expediente<<"\n"<<datos.nombre<<" "<<datos.ape1<<" "<<datos.ape2<<"\n"<<datos.direccion<<"\n"<<datos.telefono<<"\n"<<datos.fecha<<"\n"<<datos.hora<<endl;
		}
		
		salida>>datos.expediente;
		
		
		}
		entrada.close();
		salida.close();
		remove("DrMorales.txt");
		rename("temp.txt","DrMorales.txt");
	
}
}
void bajas13()
{
	ifstream salida;
	salida.open("DrAlonso.txt",ios::in);
	
	ofstream entrada;
	entrada.open("temp.txt",ios::out);
	if(salida.fail()){
		printf("Hubo un error");
		getch();
	}
	else
	{
		char aux[20];
		printf("Dame el expediente");
		scanf("%s",&aux);
		salida>>datos.expediente;
		
		while(!salida.eof()){
			
			salida>>datos.nombre>>datos.ape1>>datos.ape2>>datos.direccion>>datos.telefono>>datos.fecha>>datos.hora;
			
		if(strcmp(aux,datos.expediente)==0)
		
		{
			printf("La cita se ha cancelado correctamente.");
			getch();
		}
		
		else{
			entrada<<datos.expediente<<"\n"<<datos.nombre<<" "<<datos.ape1<<" "<<datos.ape2<<"\n"<<datos.direccion<<"\n"<<datos.telefono<<"\n"<<datos.fecha<<"\n"<<datos.hora<<endl;
		}
		
		salida>>datos.expediente;
		
		
		}
		entrada.close();
		salida.close();
		remove("DrAlonso.txt");
		rename("temp.txt","DrAlonso.txt");
	
}
}
void bajas14()
{
	ifstream salida;
	salida.open("DraNovoa.txt",ios::in);
	
	ofstream entrada;
	entrada.open("temp.txt",ios::out);
	if(salida.fail()){
		printf("Hubo un error");
		getch();
	}
	else
	{
		char aux[20];
		printf("Dame el expediente");
		scanf("%s",&aux);
		salida>>datos.expediente;
		
		while(!salida.eof()){
			
			salida>>datos.nombre>>datos.ape1>>datos.ape2>>datos.direccion>>datos.telefono>>datos.fecha>>datos.hora;
			
		if(strcmp(aux,datos.expediente)==0)
		
		{
			printf("La cita se ha cancelado correctamente.");
			getch();
		}
		
		else{
			entrada<<datos.expediente<<"\n"<<datos.nombre<<" "<<datos.ape1<<" "<<datos.ape2<<"\n"<<datos.direccion<<"\n"<<datos.telefono<<"\n"<<datos.fecha<<"\n"<<datos.hora<<endl;
		}
		
		salida>>datos.expediente;
		
		
		}
		entrada.close();
		salida.close();
		remove("DraNovoa.txt");
		rename("temp.txt","DraNovoa.txt");
	
}
}
void bajas15()
{
	ifstream salida;
	salida.open("DraMartinez.txt",ios::in);
	
	ofstream entrada;
	entrada.open("temp.txt",ios::out);
	if(salida.fail()){
		printf("Hubo un error");
		getch();
	}
	else
	{
		char aux[20];
		printf("Dame el expediente");
		scanf("%s",&aux);
		salida>>datos.expediente;
		
		while(!salida.eof()){
			
			salida>>datos.nombre>>datos.ape1>>datos.ape2>>datos.direccion>>datos.telefono>>datos.fecha>>datos.hora;
			
		if(strcmp(aux,datos.expediente)==0)
		
		{
			printf("La cita se ha cancelado correctamente.");
			getch();
		}
		
		else{
			entrada<<datos.expediente<<"\n"<<datos.nombre<<" "<<datos.ape1<<" "<<datos.ape2<<"\n"<<datos.direccion<<"\n"<<datos.telefono<<"\n"<<datos.fecha<<"\n"<<datos.hora<<endl;
		}
		
		salida>>datos.expediente;
		
		
		}
		entrada.close();
		salida.close();
		remove("DraMartinez.txt");
		rename("temp.txt","DraMartinez.txt");
	
}
}
void bajas16()
{
	ifstream salida;
	salida.open("DrFlores.txt",ios::in);
	
	ofstream entrada;
	entrada.open("temp.txt",ios::out);
	if(salida.fail()){
		printf("Hubo un error");
		getch();
	}
	else
	{
		char aux[20];
		printf("Dame el expediente");
		scanf("%s",&aux);
		salida>>datos.expediente;
		
		while(!salida.eof()){
			
			salida>>datos.nombre>>datos.ape1>>datos.ape2>>datos.direccion>>datos.telefono>>datos.fecha>>datos.hora;
			
		if(strcmp(aux,datos.expediente)==0)
		
		{
			printf("La cita se ha cancelado correctamente.");
			getch();
		}
		
		else{
			entrada<<datos.expediente<<"\n"<<datos.nombre<<" "<<datos.ape1<<" "<<datos.ape2<<"\n"<<datos.direccion<<"\n"<<datos.telefono<<"\n"<<datos.fecha<<"\n"<<datos.hora<<endl;
		}
		
		salida>>datos.expediente;
		
		
		}
		entrada.close();
		salida.close();
		remove("DrFlores.txt");
		rename("temp.txt","DrFlores.txt");
	
}
}
void bajas17()
{
	ifstream salida;
	salida.open("DrEscalante.txt",ios::in);
	
	ofstream entrada;
	entrada.open("temp.txt",ios::out);
	if(salida.fail()){
		printf("Hubo un error");
		getch();
	}
	else
	{
		char aux[20];
		printf("Dame el expediente");
		scanf("%s",&aux);
		salida>>datos.expediente;
		
		while(!salida.eof()){
			
			salida>>datos.nombre>>datos.ape1>>datos.ape2>>datos.direccion>>datos.telefono>>datos.fecha>>datos.hora;
			
		if(strcmp(aux,datos.expediente)==0)
		
		{
			printf("La cita se ha cancelado correctamente.");
			getch();
		}
		
		else{
			entrada<<datos.expediente<<"\n"<<datos.nombre<<" "<<datos.ape1<<" "<<datos.ape2<<"\n"<<datos.direccion<<"\n"<<datos.telefono<<"\n"<<datos.fecha<<"\n"<<datos.hora<<endl;
		}
		
		salida>>datos.expediente;
		
		
		}
		entrada.close();
		salida.close();
		remove("DrEscalante.txt");
		rename("temp.txt","DrEscalante.txt");
	
}
}
void bajas18()
{
	ifstream salida;
	salida.open("DrCruz.txt",ios::in);
	
	ofstream entrada;
	entrada.open("temp.txt",ios::out);
	if(salida.fail()){
		printf("Hubo un error");
		getch();
	}
	else
	{
		char aux[20];
		printf("Dame el expediente");
		scanf("%s",&aux);
		salida>>datos.expediente;
		
		while(!salida.eof()){
			
			salida>>datos.nombre>>datos.ape1>>datos.ape2>>datos.direccion>>datos.telefono>>datos.fecha>>datos.hora;
			
		if(strcmp(aux,datos.expediente)==0)
		
		{
			printf("La cita se ha cancelado correctamente.");
			getch();
		}
		
		else{
			entrada<<datos.expediente<<"\n"<<datos.nombre<<" "<<datos.ape1<<" "<<datos.ape2<<"\n"<<datos.direccion<<"\n"<<datos.telefono<<"\n"<<datos.fecha<<"\n"<<datos.hora<<endl;
		}
		
		salida>>datos.expediente;
		
		
		}
		entrada.close();
		salida.close();
		remove("DrCruz.txt");
		rename("temp.txt","DrCruz.txt");
	
}
}
void bajas19()
{
	ifstream salida;
	salida.open("DrEnriquez.txt",ios::in);
	
	ofstream entrada;
	entrada.open("temp.txt",ios::out);
	if(salida.fail()){
		printf("Hubo un error");
		getch();
	}
	else
	{
		char aux[20];
		printf("Dame el expediente");
		scanf("%s",&aux);
		salida>>datos.expediente;
		
		while(!salida.eof()){
			
			salida>>datos.nombre>>datos.ape1>>datos.ape2>>datos.direccion>>datos.telefono>>datos.fecha>>datos.hora;
			
		if(strcmp(aux,datos.expediente)==0)
		
		{
			printf("La cita se ha cancelado correctamente.");
			getch();
		}
		
		else{
			entrada<<datos.expediente<<"\n"<<datos.nombre<<" "<<datos.ape1<<" "<<datos.ape2<<"\n"<<datos.direccion<<"\n"<<datos.telefono<<"\n"<<datos.fecha<<"\n"<<datos.hora<<endl;
		}
		
		salida>>datos.expediente;
		
		
		}
		entrada.close();
		salida.close();
		remove("DrEnriquez.txt");
		rename("temp.txt","DrEnriquez.txt");
	
}
}
void bajas20()
{
	ifstream salida;
	salida.open("DrLeon.txt",ios::in);
	
	ofstream entrada;
	entrada.open("temp.txt",ios::out);
	if(salida.fail()){
		printf("Hubo un error");
		getch();
	}
	else
	{
		char aux[20];
		printf("Dame el expediente");
		scanf("%s",&aux);
		salida>>datos.expediente;
		
		while(!salida.eof()){
			
			salida>>datos.nombre>>datos.ape1>>datos.ape2>>datos.direccion>>datos.telefono>>datos.fecha>>datos.hora;
			
		if(strcmp(aux,datos.expediente)==0)
		
		{
			printf("La cita se ha cancelado correctamente.");
			getch();
		}
		
		else{
			entrada<<datos.expediente<<"\n"<<datos.nombre<<" "<<datos.ape1<<" "<<datos.ape2<<"\n"<<datos.direccion<<"\n"<<datos.telefono<<"\n"<<datos.fecha<<"\n"<<datos.hora<<endl;
		}
		
		salida>>datos.expediente;
		
		
		}
		entrada.close();
		salida.close();
		remove("DrLeon.txt");
		rename("temp.txt","DrLeon.txt");
	
}
}
void bajas21()
{
	ifstream salida;
	salida.open("DrGarcia.txt",ios::in);
	
	ofstream entrada;
	entrada.open("temp.txt",ios::out);
	if(salida.fail()){
		printf("Hubo un error");
		getch();
	}
	else
	{
		char aux[20];
		printf("Dame el expediente");
		scanf("%s",&aux);
		salida>>datos.expediente;
		
		while(!salida.eof()){
			
			salida>>datos.nombre>>datos.ape1>>datos.ape2>>datos.direccion>>datos.telefono>>datos.fecha>>datos.hora;
			
		if(strcmp(aux,datos.expediente)==0)
		
		{
			printf("La cita se ha cancelado correctamente.");
			getch();
		}
		
		else{
			entrada<<datos.expediente<<"\n"<<datos.nombre<<" "<<datos.ape1<<" "<<datos.ape2<<"\n"<<datos.direccion<<"\n"<<datos.telefono<<"\n"<<datos.fecha<<"\n"<<datos.hora<<endl;
		}
		
		salida>>datos.expediente;
		
		
		}
		entrada.close();
		salida.close();
		remove("DrGarcia.txt");
		rename("temp.txt","DrGarcia.txt");
	
}
}
void bajas22()
{
	ifstream salida;
	salida.open("DraVela.txt",ios::in);
	
	ofstream entrada;
	entrada.open("temp.txt",ios::out);
	if(salida.fail()){
		printf("Hubo un error");
		getch();
	}
	else
	{
		char aux[20];
		printf("Dame el expediente");
		scanf("%s",&aux);
		salida>>datos.expediente;
		
		while(!salida.eof()){
			
			salida>>datos.nombre>>datos.ape1>>datos.ape2>>datos.direccion>>datos.telefono>>datos.fecha>>datos.hora;
			
		if(strcmp(aux,datos.expediente)==0)
		
		{
			printf("La cita se ha cancelado correctamente.");
			getch();
		}
		
		else{
			entrada<<datos.expediente<<"\n"<<datos.nombre<<" "<<datos.ape1<<" "<<datos.ape2<<"\n"<<datos.direccion<<"\n"<<datos.telefono<<"\n"<<datos.fecha<<"\n"<<datos.hora<<endl;
		}
		
		salida>>datos.expediente;
		
		
		}
		entrada.close();
		salida.close();
		remove("DraVela.txt");
		rename("temp.txt","DraVela.txt");
	
}
}
void bajas23()
{
	ifstream salida;
	salida.open("DrRamirez.txt",ios::in);
	
	ofstream entrada;
	entrada.open("temp.txt",ios::out);
	if(salida.fail()){
		printf("Hubo un error");
		getch();
	}
	else
	{
		char aux[20];
		printf("Dame el expediente");
		scanf("%s",&aux);
		salida>>datos.expediente;
		
		while(!salida.eof()){
			
			salida>>datos.nombre>>datos.ape1>>datos.ape2>>datos.direccion>>datos.telefono>>datos.fecha>>datos.hora;
			
		if(strcmp(aux,datos.expediente)==0)
		
		{
			printf("La cita se ha cancelado correctamente.");
			getch();
		}
		
		else{
			entrada<<datos.expediente<<"\n"<<datos.nombre<<" "<<datos.ape1<<" "<<datos.ape2<<"\n"<<datos.direccion<<"\n"<<datos.telefono<<"\n"<<datos.fecha<<"\n"<<datos.hora<<endl;
		}
		
		salida>>datos.expediente;
		
		
		}
		entrada.close();
		salida.close();
		remove("DrRamirez.txt");
		rename("temp.txt","DrRamirez.txt");
	
}
}
void bajas24()
{
	ifstream salida;
	salida.open("DrVilla.txt",ios::in);
	
	ofstream entrada;
	entrada.open("temp.txt",ios::out);
	if(salida.fail()){
		printf("Hubo un error");
		getch();
	}
	else
	{
		char aux[20];
		printf("Dame el expediente");
		scanf("%s",&aux);
		salida>>datos.expediente;
		
		while(!salida.eof()){
			
			salida>>datos.nombre>>datos.ape1>>datos.ape2>>datos.direccion>>datos.telefono>>datos.fecha>>datos.hora;
			
		if(strcmp(aux,datos.expediente)==0)
		
		{
			printf("La cita se ha cancelado correctamente.");
			getch();
		}
		
		else{
			entrada<<datos.expediente<<"\n"<<datos.nombre<<" "<<datos.ape1<<" "<<datos.ape2<<"\n"<<datos.direccion<<"\n"<<datos.telefono<<"\n"<<datos.fecha<<"\n"<<datos.hora<<endl;
		}
		
		salida>>datos.expediente;
		
		
		}
		entrada.close();
		salida.close();
		remove("DrVilla.txt");
		rename("temp.txt","DrVilla.txt");
	
}
}
void bajas25()
{
	ifstream salida;
	salida.open("DrGonzalez.txt",ios::in);
	
	ofstream entrada;
	entrada.open("temp.txt",ios::out);
	if(salida.fail()){
		printf("Hubo un error");
		getch();
	}
	else
	{
		char aux[20];
		printf("Dame el expediente");
		scanf("%s",&aux);
		salida>>datos.expediente;
		
		while(!salida.eof()){
			
			salida>>datos.nombre>>datos.ape1>>datos.ape2>>datos.direccion>>datos.telefono>>datos.fecha>>datos.hora;
			
		if(strcmp(aux,datos.expediente)==0)
		
		{
			printf("La cita se ha cancelado correctamente.");
			getch();
		}
		
		else{
			entrada<<datos.expediente<<"\n"<<datos.nombre<<" "<<datos.ape1<<" "<<datos.ape2<<"\n"<<datos.direccion<<"\n"<<datos.telefono<<"\n"<<datos.fecha<<"\n"<<datos.hora<<endl;
		}
		
		salida>>datos.expediente;
		
		
		}
		entrada.close();
		salida.close();
		remove("DrGonzalez.txt");
		rename("temp.txt","DrGonzalez.txt");
	
} 
}



void agenda(){
 system("cls");
  	
 FILE *f;
 printf("Agenda Dr(a)\n\n");
 f=fopen("DraMerino.txt","r");
 
 if( f==NULL )
  printf("No existen consultas agendadas\n");
  
 else
 {
  while( !feof(f) )
   printf("%c",getc(f));
 }
}



void agenda2(){
 system("cls");
  	
 FILE *f;
 printf("Agenda Dr(a)\n\n");
 f=fopen("DraHernandez.txt","r");
 
 if( f==NULL )
  printf("No existen consultas agendadas\n");
  
 else
 {
  while( !feof(f) )
   printf("%c",getc(f));
 }
}




void agenda3(){
 system("cls");
  	
 FILE *f;
 printf("Agenda Dr(a)\n\n");
 f=fopen("DraAylin.txt","r");
 
 if( f==NULL )
  printf("No existen consultas agendadas\n");
  
 else
 {
  while( !feof(f) )
   printf("%c",getc(f));
 }
}


void agenda4(){
 system("cls");
  	
 FILE *f;
 printf("Agenda Dr(a)\n\n");
 f=fopen("DrDonald.txt","r");
 
 if( f==NULL )
  printf("No existen consultas agendadas\n");
  
 else
 {
  while( !feof(f) )
   printf("%c",getc(f));
 }
}


void agenda5(){
 system("cls");
  	
 FILE *f;
 printf("Agenda Dr(a)\n\n");
 f=fopen("DrSteve.txt","r");
 
 if( f==NULL )
 printf("No existen consultas agendadas\n");
  
 else
 {
  while( !feof(f) )
   printf("%c",getc(f));
 }
}


void agenda6(){
 system("cls");
  	
 FILE *f;
 printf("Agenda Dr(a)\n\n");
 f=fopen("DraAlejandra.txt","r");
 
 if( f==NULL )
  printf("No existen consultas agendadas\n");
  
 else
 {
  while( !feof(f) )
   printf("%c",getc(f));
 }
}


void agenda7(){
 system("cls");
  	
 FILE *f;
 printf("Agenda Dr(a)\n\n");
 f=fopen("DraMonroy.txt","r");
 
 if( f==NULL )
  printf("No existen consultas agendadas\n");
  
 else
 {
  while( !feof(f) )
   printf("%c",getc(f));
 }
} 
void agenda8(){
 system("cls");
  	
 FILE *f;
 printf("Agenda Dr(a)\n\n");
 f=fopen("DrYair.txt","r");
 
 if( f==NULL )
  printf("No existen consultas agendadas\n");
  
 else
 {
  while( !feof(f) )
   printf("%c",getc(f));
 }
}

void agenda9(){
 system("cls");
  	
 FILE *f;
 printf("Agenda Dr(a)\n\n");
 f=fopen("DrPeña.txt","r");
 
 if( f==NULL )
 printf("No existen consultas agendadas\n");
  
 else
 {
  while( !feof(f) )
   printf("%c",getc(f));
 }
}

void agenda10(){
 system("cls");
  	
 FILE *f;
 printf("Agenda Dr(a)\n\n");
 f=fopen("DrRuiz.txt","r");
 
 if( f==NULL )
  printf("No existen consultas agendadas\n");
  
 else
 {
  while( !feof(f) )
   printf("%c",getc(f));
 }
}

void agenda11(){
 system("cls");
  	
 FILE *f;
 printf("Agenda Dr(a)\n\n");
 f=fopen("DrRojas.txt","r");
 
 if( f==NULL )
  printf("No existen consultas agendadas\n");
  
 else
 {
  while( !feof(f) )
   printf("%c",getc(f));
 }
}


void agenda12(){
 system("cls");
  	
 FILE *f;
 printf("Agenda Dr(a)\n\n");
 f=fopen("DrMorales.txt","r");
 
 if( f==NULL )
 printf("No existen consultas agendadas\n");
  
 else
 {
  while( !feof(f) )
   printf("%c",getc(f));
 }
}

void agenda13(){
 system("cls");
  	
 FILE *f;
 printf("Agenda Dr(a)\n\n");
 f=fopen("DrAlonso.txt","r");
 
 if( f==NULL )
  printf("No existen consultas agendadas\n");
  
 else
 {
  while( !feof(f) )
   printf("%c",getc(f));
 }
}

void agenda14(){
 system("cls");
  	
 FILE *f;
 printf("Agenda Dr(a)\n\n");
 f=fopen("DraNovoa.txt","r");
 
 if( f==NULL )
  printf("No existen consultas agendadas\n");
  
 else
 {
  while( !feof(f) )
   printf("%c",getc(f));
 }
}

void agenda15(){
 system("cls");
  	
 FILE *f;
 printf("Agenda Dr(a)\n\n");
 f=fopen("DraMartinez.txt","r");
 
 if( f==NULL )
  printf("No existen consultas agendadas\n");
  
 else
 {
  while( !feof(f) )
   printf("%c",getc(f));
 }
}

void agenda16(){
 system("cls");
  	
 FILE *f;
 printf("Agenda Dr(a)\n\n");
 f=fopen("DrFlores.txt","r");
 
 if( f==NULL )
  printf("No existen consultas agendadas\n");
  
 else
 {
  while( !feof(f) )
   printf("%c",getc(f));
 }
}

void agenda17(){
 system("cls");
  	
 FILE *f;
 printf("Agenda Dr(a)\n\n");
 f=fopen("DrEscalante.txt","r");
 
 if( f==NULL )
  printf("No existen consultas agendadas\n");
  
 else
 {
  while( !feof(f) )
   printf("%c",getc(f));
 }
} 

void agenda18(){
 system("cls");
  	
 FILE *f;
 printf("Agenda Dr(a)\n\n");
 f=fopen("DrCruz.txt","r");
 
 if( f==NULL )
 printf("No existen consultas agendadas\n");
  
 else
 {
  while( !feof(f) )
   printf("%c",getc(f));
 }
}

void agenda19(){
 system("cls");
  	
 FILE *f;
 printf("Agenda Dr(a)\n\n");
 f=fopen("DrEnriquez.txt","r");
 
 if( f==NULL )
  printf("No existen consultas agendadas\n");
  
 else
 {
  while( !feof(f) )
   printf("%c",getc(f));
 }
}

void agenda20(){
 system("cls");
  	
 FILE *f;
 printf("Agenda Dr(a)\n\n");
 f=fopen("DrLeon.txt","r");
 
 if( f==NULL )
  printf("No existen consultas agendadas\n");
  
 else
 {
  while( !feof(f) )
   printf("%c",getc(f));
 }
}

void agenda21(){
 system("cls");
  	
 FILE *f;
 printf("Agenda Dr(a)\n\n");
 f=fopen("DrGarcia.txt","r");
 
 if( f==NULL )
  printf("No existen consultas agendadas\n");
  
 else
 {
  while( !feof(f) )
   printf("%c",getc(f));
 }
}

void agenda22(){
 system("cls");
  	
 FILE *f;
 printf("Agenda Dr(a)\n\n");
 f=fopen("DraVela.txt","r");
 
 if( f==NULL )
  printf("No existen consultas agendadas\n");
  
 else
 {
  while( !feof(f) )
   printf("%c",getc(f));
 }
}

void agenda23(){
 system("cls");
  	
 FILE *f;
 printf("Agenda Dr(a)\n\n");
 f=fopen("DrRamirez.txt","r");
 
 if( f==NULL )
  printf("No existen consultas agendadas\n");
  
 else
 {
  while( !feof(f) )
   printf("%c",getc(f));
 }
}


void agenda24(){
 system("cls");
  	
 FILE *f;
 printf("Agenda Dr(a)\n\n");
 f=fopen("DrVilla.txt","r");
 
 if( f==NULL )
  printf("No existen consultas agendadas\n");
  
 else
 {
  while( !feof(f) )
   printf("%c",getc(f));
 }
}

void agenda25(){
 system("cls");
  	
 FILE *f;
 printf("Agenda Dr(a)\n\n");
 f=fopen("DrGonzalez.txt","r");
 
 if( f==NULL )
  printf("No existen consultas agendadas\n");
  
 else
 {
  while( !feof(f) )
   printf("%c",getc(f));
 }
} 

