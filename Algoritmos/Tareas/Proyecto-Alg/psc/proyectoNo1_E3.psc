Algoritmo proyectoNo1_E3
	Definir total, x Como Entero
	Definir suma, n Como Real
	Escribir '�Cuantos n�meros deseas sumar?'
	leer total
	Escribir 'Escriba los n�meros a sumar: '
	x = 1
	suma = 0
	Mientras  x <= total Hacer
		leer n
		suma = suma + n
		x = x + 1
	FinMientras
Escribir 'La suma de los ',total,' numeros es: ',suma
FinAlgoritmo
