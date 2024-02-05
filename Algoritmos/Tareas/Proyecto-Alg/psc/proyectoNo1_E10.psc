Algoritmo proyectoNo1_E10
	Definir total, a, b, n, x Como Entero
	Escribir 'Ingrese el total de numeros: '
	leer total
	x = 1
	Mientras x <= total Hacer
		Escribir 'Ingrese un numero: '
		leer n
		si x == 1 Entonces
			a = n
			b = n
		SiNo
			si n > a Entonces
				a = n
			SiNo
				si n < b Entonces
					b = n
				FinSi
			FinSi
		FinSi
		x = x + 1
	FinMientras
	Escribir 'El numero mayor es: ',a
	Escribir 'El numero menor es: ',b
FinAlgoritmo
