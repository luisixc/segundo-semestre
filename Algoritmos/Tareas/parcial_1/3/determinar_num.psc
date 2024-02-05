Algoritmo determinar_num
	Definir x,n,t,m Como Entero
	Escribir 'Cantidad de numeros a calcular:'
	leer t	
	x = 1 
	Mientras x <= t Hacer
		Escribir 'Escribe un numero'
		leer n
		si x ==  1 Entonces
			m = n 
		SiNo
			si n > m Entonces
				m = n
			FinSi
		FinSi
		x = x +1
	FinMientras
	Escribir 'El numero mayor es: ',m
FinAlgoritmo
