
#include "funciones.h"

void caja(){


	// caja
		glBegin(GL_POLYGON);
		    glColor3f(0.5f, 0.35f, 0.05f);
		    glVertex2f(0.0f, 0.0f);
		    glColor3f(0.5f, 0.35f, 0.05f);
		    glVertex2f(2.5, 0.0f);
		    glColor3f(0.5f, 0.35f, 0.05f);
		    glVertex2f(2.5f, 2.5f);
		    glColor3f(0.5f, 0.35f, 0.05f);
		    glVertex2f(0.0f, 2.5f);
		    glEnd();
	//contorno
		glBegin(GL_LINES);
			glColor3f(0.0f, 0.0f, 0.0f);
			glVertex2f(0.0, 0.0);
			glVertex2f(2.5, 0.0);
		glEnd();
		glBegin(GL_LINES);
			glVertex2f(2.5, 0.0);
			glVertex2f(2.5, 2.5);
		glEnd();
		glBegin(GL_LINES);
			glVertex2f(2.5,2.5);
			glVertex2f(0.0,2.5);
		glEnd();
		glBegin(GL_LINES);
			glVertex2f(0.0,2.5);
			glVertex2f(0.0,0.0);
		glEnd();

		glBegin(GL_LINES);
			glVertex2f(2.25, 0.2);
			glVertex2f(0.2, 0.2);
		glEnd();
		glBegin(GL_LINES);
			glVertex2f(0.2, 0.2);
			glVertex2f(0.2, 2.25);
		glEnd();
		glBegin(GL_LINES);
			glVertex2f(0.2, 2.25);
			glVertex2f(2.25, 2.25);
		glEnd();
		glBegin(GL_LINES);
			glVertex2f(2.25, 0.2);
			glVertex2f(2.25, 2.25);
		glEnd();


		glBegin(GL_LINES);
			glVertex2f(2,0.2);
			glVertex2f(2.25,0.5);
		glEnd();
		glBegin(GL_LINES);
			glVertex2f(0.5,2.25);
			glVertex2f(2.25,0.5);
		glEnd();
		glBegin(GL_LINES);
			glVertex2f(0.2,2);
			glVertex2f(0.5,2.25);
		glEnd();
		glBegin(GL_LINES);
			glVertex2f(0.2,2);
			glVertex2f(2,0.2);
		glEnd();

		glBegin(GL_LINES);
			glVertex2f(2,2.25);
			glVertex2f(2,0.8);
		glEnd();
		glBegin(GL_LINES);
			glVertex2f(1.75,2.25);
			glVertex2f(1.75,1.05);
		glEnd();
		glBegin(GL_LINES);
			glVertex2f(1.75,0.5);
			glVertex2f(1.75,0.2);
		glEnd();
		glBegin(GL_LINES);
			glVertex2f(0.6,0.9);
			glVertex2f(0.6,0.52);
		glEnd();
		glBegin(GL_LINES);
			glVertex2f(1.5, 0.675);
			glVertex2f(1.5, 0.2);
		glEnd();
		glBegin(GL_LINES);
			glVertex2f(1.5, 2.25);
			glVertex2f(1.5, 1.2);
		glEnd();
		glBegin(GL_LINES);
			glVertex2f(0.0125,2.25);
			glVertex2f(0.0125,1.55);
		glEnd();
		glBegin(GL_LINES);
			glVertex2f(1,2.25);
			glVertex2f(1,1.75);
		glEnd();
		glBegin(GL_LINES);
			glVertex2f(1,1.2);
			glVertex2f(1,0.2);
		glEnd();
		glBegin(GL_LINES);
			glVertex2f(0.12, 2.25);
			glVertex2f(0.12, 2.05);
		glEnd();
		glBegin(GL_LINES);
			glVertex2f(0.75, 1.45);
			glVertex2f(0.75, 0.2);
		glEnd();
		glBegin(GL_LINES);
			glVertex2f(0.5,1.7);
			glVertex2f(0.5,0.2);
		glEnd();
}


