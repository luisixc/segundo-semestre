Algoritmo proyectoNo1_E12
	Definir numero, factorial, x Como Real
	Escribir 'Ingrese un numero: '
	Leer numero
	si numero < 0 Entonces
		Escribir 'El numero ',numero,' no se puede calcular'
	SiNo
		x = 1
		factorial = 1
		Mientras x <= numero Hacer
			factorial = factorial * x
			x = x + 1
		FinMientras
		Escribir 'El factorial del número ',numero,' = ',factorial
		
	FinSi
FinAlgoritmo
