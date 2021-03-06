// OpenGL.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <glut.h>


void displayGraphics()
{
	glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
	glClear(GL_COLOR_BUFFER_BIT);
	glFlush();
}


int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutCreateWindow("OpenGL - Title");
	glutInitWindowSize(640, 480);
	glutInitWindowPosition(0, 0);
	glutDisplayFunc(displayGraphics);
	glutMainLoop();
	return 0;
}


