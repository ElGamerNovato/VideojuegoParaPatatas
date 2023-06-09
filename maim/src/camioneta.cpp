
#include "funciones.h"
void camioneta(){
	glBegin(GL_QUADS);
		glColor3f(0.6,0.7,0.4);
		glVertex2f(-13.0,12.5);
		glVertex2f(4.0,12.5);
		glVertex2f(4.0,1.0);
		glVertex2f(-13.0,1.0);
	glEnd();

	glBegin(GL_QUAD_STRIP);
		glColor3f(0.2,0.5,0.2);
		glVertex2f(4.0,8.5);
		glVertex2f(8.5,8.5);

		glVertex2f(4.0,1.5);
		glVertex2f(8.5,6.5);

		glVertex2f(10.0,1.5);
		glVertex2f(10.0,6.0);
	glEnd();


		glBegin(GL_QUADS);
		glColor3f(0.0,0.0,0.0);
			glVertex2f(3.5,1.0);
			glVertex2f(0.5,4.0);
			glVertex2f(-2.5,1.0);
			glVertex2f(0.5,-2.0);
			glVertex2f(3.5,1.0);
		glEnd();


		glBegin(GL_QUADS);
				glColor3f(0.0,0.0,0.0);
					glVertex2f(3.5-9,1.0);
					glVertex2f(0.5-9,4.0);
					glVertex2f(-2.5-9,1.0);
					glVertex2f(0.5-9,-2.0);
					glVertex2f(3.5-9,1.0);
				glEnd();


}

