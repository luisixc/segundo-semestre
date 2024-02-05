Algoritmo proyectoNo1_E18
	Definir n, reprobados, aprobados Como Entero
	Definir cali Como Real
	Escribir 'Ingresa el número de alumnos'
	leer n
	reprobados = 0
	aprobados = 0
	Mientras  n > 0 Hacer
		Escribir 'Ingresa la calificación'
		leer cali
		si cali < 6 Entonces
			reprobados = reprobados + 1
		SiNo
			aprobados = aprobados + 1
		FinSi
		n = n - 1
	FinMientras
Escribir 'El total de alumnos aprobados es: ',aprobados
Escribir 'El total de alumnos reprobados es: ',reprobados
FinAlgoritmo
