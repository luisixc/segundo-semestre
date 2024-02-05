Algoritmo may_3Num
	Definir n1,n2, n3 Como Entero
	Escribir 'Ingrese 3 numeros: '
	leer n1, n2, n3
	si n1 > n2 Entonces
		si n1 > n3 Entonces
			Escribir 'El numero ',n1,' es el mayor'
		SiNo
			Escribir 'El numero ',n3,' es el mayor'
		FinSi
	SiNo
		si n2 > n3 Entonces
			Escribir 'El numero ',n2,' es el mayor'
		SiNo
			Escribir 'El numero ',n3,' es el mayor'
		FinSi
	FinSi
	
FinAlgoritmo
