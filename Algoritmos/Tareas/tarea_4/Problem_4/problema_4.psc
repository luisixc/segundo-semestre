Algoritmo problema_4
	Definir n Como Entero
	Escribir 'Ingrese un numero entero: '
	Leer n
	Mientras n <> 1 Hacer
		si (n mod 2) == 0 Entonces
			n = n /2
		SiNo
			n = (n * 3) + 1
		FinSi
		Escribir n
	FinMientras
FinAlgoritmo
