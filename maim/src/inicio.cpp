#include "funciones.h"

void Inicializar(){
	glClearColor(1.0,1.0,1.0,1.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(-25.0,25.0,-25.0,25.0,-25.0,25.0);
}

void Dibujar(){
	glClear(GL_COLOR_BUFFER_BIT);
	camioneta();
	pistolas();
	caja();
	protagonista();
	glPushMatrix();
	glPopMatrix();
	glFlush();
}
