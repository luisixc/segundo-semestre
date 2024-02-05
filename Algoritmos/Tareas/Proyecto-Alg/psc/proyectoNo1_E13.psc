Algoritmo proyectoNo1_E13
	Escribir 'Ingrese la cantidad de numeros: '
	leer x
	n <- 0
	m <- 0
	t <- 0
	c <- 0
	Mientras c < x Hacer
		c <- c + 1
		Escribir 'Ingresae el numero: ',c
		leer i 
		
		si i > n Entonces
			n <- i
		FinSi
		
		si c = 1 Entonces
			m <- i
		SiNo
			si m >  i Entonces
				m <- i
			FinSi
		FinSi
		t <- t + i
	FinMientras
	Escribir '=== Resultados ==='
	Escribir 'El numero maximo es: ',n
	Escribir 'En numero minimo es: ',m
	Escribir 'El promedio es: ',t/x
FinAlgoritmo
