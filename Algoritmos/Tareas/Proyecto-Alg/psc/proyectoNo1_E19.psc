Algoritmo proyectoNo1_E19
	entre_45_y_55 <- 0;
    mayores_de_50 <- 0;
    menores_de_15 <- 0;
    Para i<-1 Hasta 100 Con Paso 1 Hacer
        Escribir "Ingrese el numero: ", i;
        Escribir Sin Saltar "Ingresa el valor de numero natural:";
        Leer numero_natural;
        Si numero_natural<15 Entonces
            menores_de_15 <- menores_de_15+1;
        FinSi
        Si numero_natural>50 Entonces
            mayores_de_50 <- mayores_de_50+1;
        FinSi
        Si numero_natural>=25 Y numero_natural<=45 Entonces
            entre_45_y_55 <- entre_45_y_55+1;
        FinSi
        Escribir "";
    FinPara
    Escribir "Comprendidos entre 25 y 45: ", entre_45_y_55;
    Escribir "Mayores de 50: ", mayores_de_50;
    Escribir "Menores de 15: ", menores_de_15;
FinAlgoritmo
