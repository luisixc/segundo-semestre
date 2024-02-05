Algoritmo proyectoNo1_E2
	Escribir "Ingresar la cantidad de sucursales: "
	Leer n
	Dimension categoria[n]
	Dimension codigo[n]
	Dimension stock[n]
	Para b<-1 Hasta n Hacer
		Escribir "Ingrese categoria: " b
		Leer categoria[b]
		Si b<n Entonces
			Escribir "Ingrese codigo: " b
			Leer codigo[b]
		SiNo
			codigo[b] = "X"
		Fin Si
		Escribir "Ingrese stock: " b
		Leer stock[b]
	FinPara
	Para b<-1 Hasta n Hacer
		Escribir "CATEGORIA"  "  " categoria[b] " "  "Codigo"  "  " codigo[b] "  "   "Sotck"  "  " stock[b]
	FinPara
FinAlgoritmo
