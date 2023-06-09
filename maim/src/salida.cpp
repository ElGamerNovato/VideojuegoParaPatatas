/*
 * salida.cpp
 *
 *  Created on: 29 nov. 2022
 *      Author: MARLENE
 */

#include "funciones.h"

/**void PlanoCartesiano(){
	glBegin(GL_LINES);
	glColor3f(0, 0, 0);
		glVertex2f(-20.0,0.0);
		glVertex2f(20.0,0.0);
		glVertex2f(0.0,-20.0);
		glVertex2f(0.0,20.0);
	glEnd();
}**/

void protagonista(){


	glBegin(GL_QUAD_STRIP);

	glColor3f(0, 0, 0);
		glVertex2f(2.1-10,3.45);
		glVertex2f(2.55-10,3.15);
	glColor3f(0, 0, 1);
		glVertex2f(1.25-10,2.25);
		glVertex2f(1.75-10,1.8);
	glColor3f(0, 1, 0);
		glVertex2f(.9-10,1);
		glVertex2f(1.5-10,1);
		glVertex2f(1.7-10,1.1);
		glVertex2f(2-10,1.25);
	glEnd();

	glBegin(GL_QUAD_STRIP);

	glColor3d(0,1,0);
		glVertex2f(3.25-10,0.75);
		glVertex2f(1.5-10,.75);
	glColor3f(0, 0, 1);
		glVertex2f(3.25-10,1.25);
		glVertex2f(1.5-10,1.35);
		glVertex2f(2.25-10,1.5);
		glVertex2f(1.5-10,1.35);
		glVertex2f(3.75-10,3.5);
		glVertex2f(2.55-10,3.15);
		glVertex2f(3.75-10,3.5);
		glVertex2f(1.65-10,3.75);

	glColor3f(0, 0, 0);
		glVertex2f(2.9-10,4.5);
		glVertex2f(1.4-10,4.5);
	glEnd();

	// Torzo
	glBegin(GL_QUAD_STRIP);
	glColor3f(0, 0, 1);
	glVertex2f(1.4-10,4.5);
	glVertex2f(2.9-10,4.5);
	glVertex2f(1.55-10,5.9);
	glVertex2f(2.9-10,5.75);
	glVertex2f(1.5-10,6.5);
	glVertex2f(3-10,6.4);
	glEnd();

	//cabeza
	glBegin(GL_TRIANGLE_STRIP);
	glColor3f(0, 0, 0);
	glVertex2f(2.9-10,7.7);
	glVertex2f(1.95-10,7.7);
	glVertex2f(1.85-10,7);
	glEnd();

	glBegin(GL_TRIANGLE_STRIP);
	glColor3d(1,1,0);
	glVertex2f(2.55-10,7.5);
	glVertex2f(2-10,7.5);
	glVertex2f(2.8-10,7.05);
	glVertex2f(1.9-10,6.75);
	glVertex2f(2.6-10,6.65);
	glVertex2f(1.425-10,6.5);
	glVertex2f(2.65-10,6.5);
	glVertex2f(3-10,6.4);
	glEnd();
	// Brazo derecho
	glBegin(GL_TRIANGLE_STRIP);

	glColor3d(1,1,0);
		glVertex2f(2.9-10,4.8);
		glVertex2f(2.8-10,5.15);
		glVertex2f(2.55-10,4.5);
		glVertex2f(2.2-10,5.1);
		glVertex2f(2.1-10,4.5);
		glVertex2f(1.7-10,5.5);
		glVertex2f(.85-10,5.4);
		glVertex2f(1.55-10,5.7);
		glVertex2f(.75-10,5.8);

		glColor3f(0, 0, 1);
		glVertex2f(1.55-10,5.9);
		glVertex2f(1-10,6.35);
		glVertex2f(1.5-10,6.5);
	glEnd();


	// Brazo Izquierdo
	glBegin(GL_TRIANGLE_STRIP);
	glColor3f(0, 0, 1);
	glVertex2f(2.8-10,6.5);
	glVertex2f(3-10, 6.4);


	glColor3d(1,1,0);
	glVertex2f(2.9-10,5.75);
	glVertex2f(3.3-10,6.4);
	glVertex2f(3.43-10, 4.85);
	glVertex2f(3.55-10, 5.95);
	glVertex2f(3.75-10, 4.5);
	glVertex2f(4.15-10, 4.8);
	glVertex2f(3.75-10, 4.5);
	glVertex2f(4.45-10, 4.7);
	glVertex2f(3.85-10, 4.25);
	glVertex2f(4.4-10, 4.2);

	glEnd();
}




