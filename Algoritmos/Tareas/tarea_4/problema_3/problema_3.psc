Algoritmo problema_3
	Definir x,c Como Entero
	Definir n,s,nb,na como real
	s = 0
	c = 0
	i = 1
	para x = 1 Hasta 4 Con Paso  1 Hacer
		Escribir 'Escriba nota: #',i
		leer n
		s = s + n
		si n > 6 Entonces
			c = c +1 
		FinSi
		si x == 1 Entonces
			na = n
			nb = n
		SiNo
			si n > na
				na = n
			SiNo
				si n < nb
					nb = n
				FinSi
			FinSi
		FinSi
		i = i+1	
	FinPara
	Escribir 'El promedio de las 4 notas es: ',s/4;
	Escribir 'La nota mas baja es: ',nb;
	Escribir 'La nota mas alta es: ',na;
	Escribir 'Calificaciones mayores a 6 son: ',c
	
FinAlgoritmo
