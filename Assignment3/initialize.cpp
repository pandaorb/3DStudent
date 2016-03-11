#include "stdafx.h"
#include <GL/glut.h>

int viewInit(void)
{
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(800, 800);
	glutInitWindowPosition(0, 0); //This is top left in windows
	glutCreateWindow("COMP - 5400 Assignment 3 – Spring 2016");
	return 0;
}

int programInit(void)
{
	/* set background color to black */
	glClearColor(0.0, 0.0, 0.0, 1.0);
	glClearDepth(1.0);
	
	/* enable 3D image */
	glEnable(GL_DEPTH_TEST);
	glDepthFunc(GL_LEQUAL);

	/* clear bufffer */
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	/* set shading to smooth */
	glShadeModel(GL_SMOOTH);

	/* set initial color to purple (for fun) */
	glColor3f(0.5, 0.0, 0.5);

	/* set up camera */
	glMatrixMode(GL_PROJECTION);

	//http://stackoverflow.com/questions/628796/what-does-glloadidentity-do-in-opengl
	glLoadIdentity();

	/* sets an 800 x 800 window where lower
	left corner begins at the origin */
	gluOrtho2D(0.0, 800.0, 0.0, 800.0);
	glMatrixMode(GL_MODELVIEW);
	return 0;
}