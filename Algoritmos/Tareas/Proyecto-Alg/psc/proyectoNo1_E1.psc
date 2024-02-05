Algoritmo proyectoNo1_E1
	sp = 0
	sn = 0
	cp = 0
	cn = 0
	Para i<-1 Hasta 100 Hacer
		Escribir "Ingresar un numero: "
		Leer num
		Si num>=0 Entonces
			cp = cp+1
			sp = sp+num	
		Sino			
			cn = cn+1			
			sn = sn+num			
		FinSi
	FinPara
	mp = sp/cp
	mn = sn/cn
	Escribir "La media de los positivos es: ",mp
	Escribir "La media de los negativos es: ",mn 
FinAlgoritmo
