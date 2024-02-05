Algoritmo numeros_10y100
	Definir n,s Como Entero
	Escribir 'Escriba un numero'
	leer n
	si n < 0 Entonces
		s = 0 
		Mientras n < 0 Hacer
			s = S + (n mod 10)
			n = trunc(n/10)
		FinMientras
		Escribir s
	SiNo
		Escribir 'Es positivo'
	FinSi
FinAlgoritmo
