Algoritmo proyectoNo1_E20
	Escribir 'Selecione una opción: '
	Escribir '1) Suma'
	Escribir '2) Producto'
	Escribir '3) Residuo'
	Escribir '-----------------------'
	Leer op
	si op = 1 Entonces
		Escribir 'Ingrese el primero numero'
		leer n1
		Escribir 'Ingrese el segundo numero'
		leer n2
		sum = n1 + n2
		Escribir 'La suma de: ', n1 ,' y: ', n2,' es: ',sum
	SiNo
		si op = 2 Entonces
			Escribir 'Ingrese el primero numero'
			leer n1
			Escribir 'Ingrese el segundo numero'
			leer n2
			prod = n1 * n2
			Escribir 'El producto de: ', n1 ,' y: ', n2,' es: ',prod
		SiNo
			si op = 3 Entonces
				Escribir 'Ingrese el primero numero'
				leer n1
				Escribir 'Ingrese el segundo numero'
				leer n2
				res = n1 / n2
				Escribir 'El residuo de: ', n1 ,' y: ', n2,' es: ',res
			FinSi
		FinSi
	FinSi
FinAlgoritmo
