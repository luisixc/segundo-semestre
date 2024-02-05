Algoritmo sum10_numNaturales
	Definir i,c,s Como entero
	i = 1 
	c = 1 
	Mientras c <= 10 Hacer
		si i mod 2 == 0 Entonces
			Escribir i 
			s = s + i
			c = c +1 
		FinSi
		i = i +1
	FinMientras
	Escribir 'La suma de los 10 numero naatures es: ',s
FinAlgoritmo
