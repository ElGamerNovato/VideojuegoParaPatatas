#include "funciones.h"

void pistolas(){
	glBegin(GL_QUAD_STRIP);
	        glColor3f(0.0,0.0,0.0);
			glVertex2f(9+0.5,0.5);
			glVertex2f(9+0.5,1.0);
			glVertex2f(9+0.75,0.5);
			glVertex2f(9+0.75,1.0);
		glEnd();
    glBegin(GL_POLYGON);
		    glVertex2f(9+0.75,1.0);
			glVertex2f(9+0.75,1.25);
			glVertex2f(9+0.4,1.25);
			glVertex2f(9+0.4,1.125);
			glVertex2f(9+0.5,1.0);
		glEnd();
	glBegin(GL_QUADS);
			glVertex2f(9+0.75,1.0);
			glVertex2f(9+0.75,1.25);
			glVertex2f(9+1.25,1.25);
			glVertex2f(9+1.25,1.0);
		glEnd();
	glBegin(GL_QUAD_STRIP);
			glVertex2f(9+1.25,1.2);
			glVertex2f(9+1.25,1.1);
			glVertex2f(9+1.275,1.2);
			glVertex2f(9+1.275,1.1);
		glEnd();
		//
	glBegin(GL_QUAD_STRIP);
			glVertex2f(9+0.75,0.95);
			glVertex2f(9+0.75,0.825);
			glVertex2f(9+0.95,0.85);
			glVertex2f(9+0.95,0.825);
		glEnd();
	glBegin(GL_QUADS);
	        glVertex2f(9+0.95,1.0);
			glVertex2f(9+0.975,1.0);
			glVertex2f(9+0.975,0.85);
			glVertex2f(9+0.95,0.85);
		glEnd();
	glBegin(GL_TRIANGLES);
			glVertex2f(9+0.95,0.85);
		    glVertex2f(9+0.95,0.825);
			glVertex2f(9+0.975,0.85);
		glEnd();
	glBegin(GL_QUAD_STRIP);//PARTE DE LA RECARGA
	        glColor3f(0.5,0.5,0.5);
	  		glVertex2f(9+0.85,1.25);
		    glVertex2f(9+0.85,1.2);
			glVertex2f(9+1.1,1.25);
			glVertex2f(9+1.1,1.2);
		glEnd();
		//GATILLO
	glBegin(GL_QUADS);
	 		glVertex2f(9+0.75,1.0);
			glVertex2f(9+0.75,0.975);
			glVertex2f(9+0.8,0.975);
			glVertex2f(9+0.8,1.0);
		glEnd();
	glBegin(GL_QUADS);
			glVertex2f(9+0.775,0.975);
			glVertex2f(9+0.775,0.95);
			glVertex2f(9+0.825,0.95);
			glVertex2f(9+0.825,0.975);
		glEnd();
    glBegin(GL_QUAD_STRIP);
			glVertex2f(9+0.8,0.95);
			glVertex2f(9+0.8,0.925);
			glVertex2f(9+0.85,0.95);
			glVertex2f(9+0.85,0.925);
		glEnd();
	glBegin(GL_QUAD_STRIP);
			glVertex2f(9+0.825,0.925);
			glVertex2f(9+0.825,0.9);
			glVertex2f(9+0.875,0.925);
			glVertex2f(9+0.875,0.9);
		glEnd();
	glBegin(GL_TRIANGLES);
			glVertex2f(9+1.2,1.25);
		    glVertex2f(9+1.225,1.25);
			glVertex2f(9+1.225,1.275);
		glEnd();
	glBegin(GL_TRIANGLES);
			glVertex2f(9+0.4,1.25);
		    glVertex2f(9+0.425,1.3);
			glVertex2f(9+0.525,1.25);
		glEnd();
}


