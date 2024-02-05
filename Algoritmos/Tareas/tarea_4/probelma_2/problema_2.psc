Algoritmo problema_2
	Definir p1, p2, p3,pm1,pm2, c Como Real
	Escribir "Ingrese el costo de la primera pelicula: " 
	leer p1
	Escribir "Ingrese el costo de la segunda pelicula: " 
	leer p2
	Escribir "Ingrese el costo de la tervera pelicula: " 
	leer p3
	si p1<>p2 y p1<>p3 y p2<>p3 Entonces
		si p1<p2 y p1<p3 Entonces
			pm1=p1
			si p2<p3 Entonces
				pm2=p2
			SiNo
				pm2=p3
			FinSi
		SiNo
			si p2<p1 y p2<p3 Entonces	
				pm1=p2
				si p1<p3 Entonces
					pm2=p1
				SiNo
					pm2=p3
				FinSi
			SiNo
				si p3<p1 y p3<p2 Entonces	
					pm1=p3
					si p2<p1 Entonces
						pm2=p2
					SiNo
						pm2=p1
					FinSi
				FinSi
			FinSi
		FinSi		
		c=pm1+pm2
		Escribir "El total a pagar por las tres peliculas es: Q",c
	SiNo
		Escribir "Los precios deben ser distintos"
		
	FinSi
FinAlgoritmo
