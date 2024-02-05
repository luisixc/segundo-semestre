Algoritmo tarea_1
	Dimension nombres_estudiantes[200];
	Dimension nota[200];
	aprobatoria <- 8
	aprobados <- 0
	reprobados <- 0
	Escribir "Ingrese la cantidad de estudiantes: ";
	Leer cantidad_elementos;
	Para i<-1 Hasta cantidad_elementos Hacer
		Escribir "Ingrese el nombre del estudiante #",i,": "
		Leer nombres_estudiantes[i];
		Escribir "Ingrese la nota para el estudiante ",nombres_estudiantes[i],": "
		Leer nota[i];
	FinPara
	Escribir "______________________________________";
	Escribir "Estudiantes evaluados: ", cantidad_elementos;
	Para i<-1 Hasta cantidad_elementos Hacer
		Escribir "______________________________________";
		Escribir "Estudiante: ", nombres_estudiantes[i];
		nota_promedio = (nota[i]);
		Escribir "Nota: ", nota_promedio;
		Si nota_promedio >= aprobatoria Entonces
			aprobados = aprobados + 1
		SiNo
			reprobados = reprobados + 1
		FinSi;
		si nota[i] >= 8 Entonces
			Escribir 'Valor de asignación: 1'
		SiNo
			Escribir 'Valor de asignación: 2'
		FinSi
		Escribir "______________________________________";
	FinPara
	Escribir "Aprobados: ", aprobados;
	Escribir "Reprobados: ", reprobados;
	si aprobados >= 8 Entonces
		Escribir 'La universidad puede aumentar su colegiatura'
	SiNo
		Escribir 'La universidad no puede aumentar su colegiatura'
	FinSi
FinAlgoritmo
