#include "funciones.h"

int main(int argc, char** argv){

	cout<<"!!Hola Mundo!!!"<<endl; //prints !!Hello World
		glutInit(&argc, argv);
		glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
		glutInitWindowSize(650,650);
		glutInitWindowPosition(10,10);
		glutCreateWindow("Primera Ventana");
		Inicializar();
		glutDisplayFunc(Dibujar);
		glutMainLoop();
		return 0;
	}
