#include<stdio.h>
#include<conio.h>
main()
{
	system("COLOR BD");
	int opc,numero,cilindros,precio,ano;
	char marca[30];
	printf("\t\t!!!MI PROGRAMA DE MARCAS DE CARROS LUISAO!!!\n");
	printf("[1]AUTOMOVIL.\n[2]MOTOCICLETA.\n[3]TRAILER.\n[4]CUATRIMOTO.\n[5]BICICLETA.\n\n");
	printf("\t\t\t!!!ELIJA UNA OPCION!!!\n");
	scanf("%d",&opc);
	switch(opc)
	{
		case 1:
		    printf("Cuantas llantas utiliza el automovil:\n");
			scanf("%d",&numero);
			printf("De cuantos cilindros es:\n");
			scanf("%d",&cilindros);
			printf("Que marca es:\n");
			scanf("%s",&marca);
			printf("Cual es el precio$:\n");
			scanf("%d",&precio);
			printf("cual es el ano\n");
			scanf("%d",&ano);
			printf("El numero de llantas que utiliza son %d\n",numero);
			printf("El cilindraje es de %d\n",cilindros);
			printf("La marca es %s\n",marca);
			printf("El precio es$ %d\n",precio);
			printf("Ano: %d\n",ano);
			break;
			case 2:
			 printf("Cuantas llantas utiliza la motocicleta:\n");
			scanf("%d",&numero);
			printf("De cuantos cilindros es:\n");
			scanf("%d",&cilindros);
			printf("Que marca es:\n");
			scanf("%s",&marca);
			printf("Cual es el precio$:\n");
			scanf("%d",&precio);
			printf("cual es el ano\n");
			scanf("%d",&ano);
			printf("\nEl numero de llantas que utiliza son %d\n",numero);
			printf("El cilindraje es de %d\n",cilindros);
			printf("La marca es %s\n",marca);
			printf("El precio es$ %d\n",precio);
			printf("Ano: %d\n",ano);
			break;
			case 3:
				    printf("Cuantas llantas utiliza el trailer:\n");
			scanf("%d",&numero);
			printf("De cuantos cilindros es:\n");
			scanf("%d",&cilindros);
			printf("Que marca es:\n");
			scanf("%s",&marca);
			printf("Cual es el precio$:\n");
			scanf("%d",&precio);
			printf("cual es el ano\n");
			scanf("%d",&ano);
			printf("El numero de llantas que utiliza son %d\n",numero);
			printf("El cilindraje es de %d\n",cilindros);
			printf("La marca es %s\n",marca);
			printf("El precio es$ %d\n",precio);
			printf("Ano: %d\n",ano);
			break;
			case 4:
			printf("Cuantas llantas utiliza la cuatrimoto:\n");
			scanf("%d",&numero);
			printf("De cuantos cilindros es:\n");
			scanf("%d",&cilindros);
			printf("Que marca es:\n");
			scanf("%s",&marca);
			printf("Cual es el precio$:\n");
			scanf("%d",&precio);
			printf("cual es el ano\n");
			scanf("%d",&ano);
			printf("El numero de llantas que utiliza son %d\n",numero);
			printf("El cilindraje es de %d\n",cilindros);
			printf("La marca es %s\n",marca);
			printf("El precio es$ %d\n",precio);
			printf("Ano: %d\n",ano);
			break;
			case 5:
			printf("Cuantas llantas utiliza la bicicleta:\n");
			scanf("%d",&numero);
			printf("De cuantos cilindros es:\n");
			scanf("%d",&cilindros);
			printf("Que marca es:\n");
			scanf("%s",&marca);
			printf("Cual es el precio$:\n");
			scanf("%d",&precio);
			printf("cual es el ano\n");
			scanf("%d",&ano);
			printf("El numero de llantas que utiliza son %d\n",numero);
			printf("El cilindraje es de %d\n",cilindros);
			printf("La marca es %s\n",marca);
			printf("El precio es$ %d\n",precio);
			printf("Ano: %d\n",ano);
			break;
	}
	printf("\n\t\t!!!GRACIAS POR PREFERIRNOS VUELVA PRONTO!!!\n\n");
	
	getch();
}