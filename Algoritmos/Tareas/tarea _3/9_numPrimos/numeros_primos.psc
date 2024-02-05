Algoritmo numeros_primos
	Definir n,i,x,c Como Entero
	Escribir 'Ingrese un numero'
	Leer n
	i = 0
	Mientras n > 0 Hacer
		i = i + 1
		x = 1 
		c  = 0
		Mientras x <= i Hacer
			si i mod x == 0 Entonces
				c = c + 1
			FinSi
			x = x + 1
		FinMientras
		si c == 2 Entonces
			Escribir 'El numero ',i,' es primo'
			n = n - 1 
		FinSi
	FinMientras
	
FinAlgoritmo
