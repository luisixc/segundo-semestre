#include <stdio.h>
#include <conio.h>
#include <iostream.h>

int j,i,eqr=4,reg;
char A[4][50];     //Equipos Afiliados


typedef struct _registro{char nom[30];
								int winner;
								int loser;
								int pg;
                      int pp;
                      int pe;
                      int gd;
                      int gf;
                      int gc;
                      int pts;
                      }equipos;                  //tinfo

typedef struct _liga{equipos dato;              //tinfo dato
                      struct _liga *sig,*ant;
                      }liga;                    //tcurso

typedef liga *Lista;
typedef liga *Lista2;
typedef liga *pNodo;

void ingresar(Lista *, equipos);
void Mostrar(Lista);
void generar(Lista ,Lista2);
void generar2(Lista ,Lista2);
void resultados(Lista ,Lista2, equipos);
void resultados2(Lista ,Lista2, equipos);

void main()
{
Lista l1=NULL,aux,aux2;
Lista2 l2=NULL;
//eafil equiposafil;
equipos eq;
eq.pg=0;
eq.pe=0;
eq.pp=0;
   char opc;
do{
	clrscr();
   gotoxy(25,3);printf("\311");for(j=0;j<=37;j++){printf("\315");}printf("%c",187);
   gotoxy(25,4);printf("%cLiga Profesional de Futbol Ecuatoriano%c",186,186);
   gotoxy(25,5);printf("%c",204);for(j=0;j<=37;j++){printf("\315");}printf("%c",185);
   gotoxy(25,6);printf("%c[1]Equipos Afiliados a la Liga        %c",186,186);
   gotoxy(25,7);printf("%c[2]Registrar equipos a participar     %c",186,186);
   gotoxy(25,8);printf("%c[3]Ingresar resultados de los partidos%c",186,186);
   gotoxy(25,9);printf("%c[4]Mostrar resultados de la Liga      %c",186,186);
   gotoxy(25,10);printf("%c[5]Salir                              %c",186,186);
   gotoxy(25,11);printf("%c",204);for(j=0;j<=37;j++){printf("\315");}printf("%c",185);
   gotoxy(25,12);printf("%cEscoja una opcion: [ ]                %c",186,186);
   gotoxy(25,13);printf("%c",200);for(j=0;j<=37;j++){printf("\315");}printf("%c",188);
   gotoxy(46,12);opc=getch();
   switch(opc)
   {
   	case '1':
      	clrscr();
         	gotoxy(25,1);printf("\311");for(j=0;j<=37;j++){printf("\315");}printf("%c",187);
   			gotoxy(25,2);printf("%cLiga Profesional de Futbol Ecuatoriano%c",186,186);
   			gotoxy(25,3);printf("%c",200);for(j=0;j<=37;j++){printf("\315");}printf("%c\n",188);
            strcpy(A[0],"Barcelona SC");
            strcpy(A[1],"Emelec");
            strcpy(A[2],"Independiente");
            strcpy(A[3],"Aucas");
            for(i=0;i<=3;i++)
            	{
               	cout<<"\n"<<A[i];
               }
         getch();
      	break;
      case'2':
      	clrscr();
         	gotoxy(25,1);printf("\311");for(j=0;j<=37;j++){printf("\315");}printf("%c",187);
   			gotoxy(25,2);printf("%cLiga Profesional de Futbol Ecuatoriano%c",186,186);
   			gotoxy(25,3);printf("%c",200);for(j=0;j<=37;j++){printf("\315");}printf("%c\n",188);
            gotoxy(35,5);printf("Registro de Equipos\n\n");
            cout<<"Nota: Si el equipo no esta afiliado, no podra registarse.\n\n";
            if(reg==0)
            	{
                        strcpy(eq.nom,"Barcelona SC");
   							ingresar(&l1,eq); ingresar(&l2,eq);
                        strcpy(eq.nom,"Emelec");
   							ingresar(&l1,eq); ingresar(&l2,eq);
            				strcpy(eq.nom,"Aucas");
   							ingresar(&l1,eq); ingresar(&l2,eq);
            				strcpy(eq.nom,"Independiente");
   							ingresar(&l1,eq); ingresar(&l2,eq);
                        reg=1;
               }

            cout<<"Ingrese nombre del Equipo afiliado: ";gets(eq.nom);
			  	for(i=0;i<=4;i++)
              	{
               	if(strcmp(eq.nom,A[i])==0)
                  	{
                         		i=12;
                        		cout<<"\nEquipo Registrado";
         								generar(l1,l2);
         								generar2(l1,l2);
                     }
                  else
                  	{
                     	cout<<"\nEquipo No Registrado";

                     }
               }

         getch();
         break;
      case'3':
      	clrscr();

					eq.pg=0;
					eq.pp=0;
					eq.pe=0;
               eq.pts=0;
         resultados(l1,l2,eq);
       //  resultados2(l1,l2,eq);
         getch();
         break;
      case'4':
      	clrscr();
         Mostrar(l1);
         getch();
      	break;
      case'5':
      	 gotoxy(46,12);cout<<"ADIOS]";
          getch();
      	break;
      default:
      	gotoxy(46,12);cout<<"opcion incorrecta]";
         getch();
         break;
      getch();
 	}
	}while(opc!='5');
}

void ingresar(Lista *cab, equipos equi)
{
	Lista nodo, aux;
  	nodo=new(liga);
  	nodo->dato=equi;
  	nodo->sig=NULL;
  	if(!*cab)
  		{*cab=nodo;}
   else
   	{
      	aux=*cab;
     		while (aux->sig)
      	{ aux=aux->sig; }
    		aux->sig= nodo;
   	}
}

void Mostrar(Lista cab)
 {Lista aux=cab;

 if (!cab)
 {cout<<"\n Lista Vacia...";
  return;
 }
 cout<<"\n EQUPOS INSCRITOS"<<endl;
 while (aux)
 { aux->dato.pts=((aux->dato.pg*3)+aux->dato.pe);
 	cout<<"\nEquipo     : "<<aux->dato.nom<<endl;
   cout<<"\nPuntos Gandos: "<<aux->dato.pts<<endl;
  cout<<"\nPartido Ganados : "<<aux->dato.pg<<endl;
  cout<<"Partidos Empatados: "<<aux->dato.pe<<endl;
  cout<<"Partidos Perdidos : "<<aux->dato.pp<<endl;

  /*cout<<"Gol Diferencia    :"<<aux->dato.gd<<endl;
  cout<<"Gol a Favor       :"<<aux->dato.gf<<endl;
  cout<<"Gol en Contra     :"<<aux->dato.gc<<endl; */
  for(j=0;j<=37;j++){printf("\315");}
  aux=aux->sig;
  }
 }

//GENERAR TABLA DE PARTIDOS
 void generar(Lista cab,Lista2 cab2)
 {
  Lista aux1,ini;
  ini=cab;
  Lista2 aux2,fin;
  fin=cab2;
  int t=1,fecha=1,fila=eqr+7,fila2=(eqr*eqr),fil;
  fil=eqr+3;
  cout<<"\n-----IDA-----"<<endl;

  while(ini)
   {
    aux1=ini;
    	while(fin)
      	{
         	aux2=fin;
            if(aux2->sig==NULL)
            	{break;}
            else
            	{

                  if(t<=3)
            			{
                     gotoxy(1,fil);cout<<"\n\n-----FECHA "<<fecha<<" -----"<<endl;
                  	gotoxy(1,fila);cout<<aux1->dato.nom<<" vs "<<aux2->sig->dato.nom<<endl;
         				fin=(fin)->sig;
              			fecha=fecha +1;
                     fila=fila +3;t=t+1;fil=fil+3;
                  	}
                  else
            		{
                     gotoxy(1,fila2);cout<<aux1->dato.nom<<" vs "<<aux2->sig->dato.nom<<endl;
         				fin=(fin)->sig;
              			fecha=fecha +1;
                  	fila2=fila2 -3;
                  }
           	 	}
         }
      fin=(ini)->sig;
     	ini=(ini)->sig;
   }
 }


 void generar2(Lista cab,Lista2 cab2)
 {
  Lista aux1,ini;
  ini=cab;
  Lista2 aux2,fin;
  fin=cab2;
  int t=1,fecha=eqr,fila=eqr+20,fila2=(eqr*eqr)*2-1,fil;
  fil=eqr+17;

  gotoxy(1,fil);cout<<"\n-----Vuelta-----"<<endl;
  while(ini)
   {
    aux1=ini;
    	while(fin)
      	{
         	aux2=fin;
            if(aux2->sig==NULL)
            	{break;}
            else
            	{

                  if(t<=3)
            			{
                     gotoxy(1,fil);cout<<"\n\n-----FECHA "<<fecha<<" -----"<<endl;
                  	gotoxy(1,fila);cout<<aux2->sig->dato.nom<<" vs "<<aux1->dato.nom<<endl;
         				fin=(fin)->sig;
              			fecha=fecha +1;
                     fila=fila +3;t=t+1;fil=fil+3;
                  	}
                  else
            		{
                     gotoxy(1,fila2);cout<<aux2->sig->dato.nom<<" vs "<<aux1->dato.nom<<endl;
         				fin=(fin)->sig;
              			fecha=fecha +1;
                  	fila2=fila2 -3;
                  }
           	 	}
         }
      fin=(ini)->sig;
     	ini=(ini)->sig;
   }
 }


//INGRESA LOS RESULTADOS DE PARTIDOS
void resultados(Lista cab,Lista2 cab2, equipos dato)
 {
  Lista aux1,ini;
  ini=cab;
  Lista2 aux2,fin;
  fin=cab2;

  aux2=fin;

  cout<<"\n-----IDA-----"<<endl;
  while(ini)
      	{
         aux1=ini;
            while(fin)
               {
         		aux2=fin;
            if(aux2->sig==NULL)
            	{break;}
            else
            	{
    				cout<<aux1->dato.nom<<" vs "<<aux2->sig->dato.nom<<endl;
               cin>>aux1->dato.winner;cout<<" - ";cin>>aux2->sig->dato.loser;
            	cout<<"Resultados "<<endl;
            	cout<<aux1->dato.nom;

               if(aux1->dato.winner > aux2->sig->dato.loser)
	            	{aux1->dato.pg=aux1->dato.pg+1;

                  	cout<<"\nPartido Ganado  : "<<aux1->dato.pg<<endl;}
                  else
                  	{cout<<"\nPartido Ganado  : "<<aux1->dato.pg<<endl;}

               if(aux1->dato.winner == aux2->sig->dato.loser)
	            	{aux1->dato.pe=aux1->dato.pe+1;

                  	cout<<"\nPartido Empatado: "<<aux1->dato.pe<<endl;}
                  	else
                  	{cout<<"\nPartido Empatado  : "<<aux1->dato.pe<<endl;}

               if(aux1->dato.winner < aux2->sig->dato.loser)
	            	{aux1->dato.pp=aux1->dato.pp+1;
                  	cout<<"\nPartido Perdido : "<<aux1->dato.pp<<endl;}
                  	else
                  	{cout<<"\nPartido Perdido  : "<<aux1->dato.pp<<endl;}


	            /*cout<<"Gol Diferencia  : ";cin>>aux1->dato.gd;
	            cout<<"Gol a Favor     : ";cin>>aux1->dato.gf;
	            cout<<"Gol en contra   : ";cin>>aux1->dato.gc;   */


	            for(j=0;j<=37;j++){printf("\315");}printf("\n\n");  //Lineas
	            cout<<aux2->sig->dato.nom;

               if(aux2->sig->dato.loser > aux1->dato.winner )
	            	{aux2->dato.pg=aux2->dato.pg+1;

                  	cout<<"\nPartido Ganado  : "<<aux2->dato.pg<<endl;}
                  	else
                  	{cout<<"\nPartido Ganado  : "<<aux2->dato.pg<<endl;}

               if(aux2->sig->dato.loser == aux1->dato.winner)
	            	{aux2->dato.pe=aux2->dato.pe+1;

                  	cout<<"\nPartido Empatado: "<<aux2->dato.pe<<endl;}
                  	else
                  	{cout<<"\nPartido Empatado  : "<<aux2->dato.pe<<endl;}

               if(aux2->sig->dato.loser < aux1->dato.winner)
	            	{	aux2->dato.pp=aux2->dato.pp+1;
                  	cout<<"\nPartido Perdido : "<<aux2->dato.pp<<endl;}
                  	else
                  	{cout<<"\nPartido Perdido  : "<<aux2->dato.pp<<endl;}

	            /*cout<<"Gol Diferencia  : ";cin>>aux2->sig->dato.gd;
	            cout<<"Gol a Favor     : ";cin>>aux2->sig->dato.gf;
	  	         cout<<"Gol en contra   : ";cin>>aux2->sig->dato.gc; */

	           for(j=0;j<=37;j++){printf("\315");}printf("\n");  //Lineas
               fin=(fin)->sig;
               }
              }
            fin=(ini)->sig;
     			ini=(ini)->sig;
      	}
 }

 void resultados2(Lista cab,Lista2 cab2, equipos dato)
 {
  Lista aux1,ini;
  ini=cab;
  Lista2 aux2,fin;
  fin=cab2;
  int t=1,fecha=1,fila=eqr+7,fila2=(eqr*eqr),fil;
  aux2=fin;


  fil=eqr+3;
  cout<<"\n-----VUELTA-----"<<endl;
  while(ini)
      	{
         aux1=ini;
            while(fin)
               {
         		aux2=fin;
            if(aux2->sig==NULL)
            	{break;}
            else
            	{
    				cout<<aux2->sig->dato.nom<<" vs "<<aux1->dato.nom<<endl;
               cin>>aux2->dato.winner;cout<<" - ";cin>>aux1->sig->dato.loser;
            	cout<<"Resultados "<<endl;
            	cout<<aux2->sig->dato.nom;

               if(aux2->sig->dato.winner > aux1->dato.loser)
	            	{aux2->dato.pg=aux2->dato.pg+1;
                   aux2->dato.pts=aux2->dato.pts+3;
                  	cout<<"\nPartido Ganado  : "<<aux2->dato.pg<<endl;}
                  else
                  	{cout<<"\nPartido Ganado  : "<<aux2->dato.pg<<endl;}

               if(aux2->sig->dato.winner == aux1->dato.loser)
	            	{aux2->dato.pe=aux2->dato.pe+1;
                   aux2->dato.pts=aux2->dato.pts+1;
                  	cout<<"\nPartido Empatado: "<<aux2->dato.pe<<endl;}
                  	else
                  	{cout<<"\nPartido Empatado  : "<<aux2->dato.pe<<endl;}

               if(aux2->sig->dato.winner < aux1->dato.loser)
	            	{aux2->dato.pp=aux2->dato.pp+1;
                  	cout<<"\nPartido Perdido : "<<aux2->dato.pp<<endl;}
                  	else
                  	{cout<<"\nPartido Perdido  : "<<aux2->dato.pp<<endl;}


	            /*cout<<"Gol Diferencia  : ";cin>>aux1->dato.gd;
	            cout<<"Gol a Favor     : ";cin>>aux1->dato.gf;
	            cout<<"Gol en contra   : ";cin>>aux1->dato.gc;   */


	            for(j=0;j<=37;j++){printf("\315");}printf("\n\n");  //Lineas
	            cout<<aux1->dato.nom;

               if(aux1->dato.winner > aux2->sig->dato.loser)
	            	{aux1->dato.pg=aux1->dato.pg+1;
                   aux1->dato.pts=aux1->dato.pts+3;
                  	cout<<"\nPartido Ganado  : "<<aux1->dato.pg<<endl;}
                  else
                  	{cout<<"\nPartido Ganado  : "<<aux1->dato.pg<<endl;}

               if(aux1->dato.winner == aux2->sig->dato.loser)
	            	{aux1->dato.pe=aux1->dato.pe+1;
                   aux1->dato.pts=aux1->dato.pts+1;
                  	cout<<"\nPartido Empatado: "<<aux1->dato.pe<<endl;}
                  	else
                  	{cout<<"\nPartido Empatado  : "<<aux1->dato.pe<<endl;}

               if(aux1->dato.winner < aux2->sig->dato.loser)
	            	{aux1->dato.pp=aux1->dato.pp+1;
                  	cout<<"\nPartido Perdido : "<<aux1->dato.pp<<endl;}
                  	else
                  	{cout<<"\nPartido Perdido  : "<<aux1->dato.pp<<endl;}

	            /*cout<<"Gol Diferencia  : ";cin>>aux2->sig->dato.gd;
	            cout<<"Gol a Favor     : ";cin>>aux2->sig->dato.gf;
	  	         cout<<"Gol en contra   : ";cin>>aux2->sig->dato.gc; */

	           for(j=0;j<=37;j++){printf("\315");}printf("\n");  //Lineas
               fin=(fin)->sig;
               }
              }
            fin=(ini)->sig;
     			ini=(ini)->sig;
      	}
 }
