#include "stdafx.h"
#include <GL/glut.h>
#include "student.h"
#include <stdlib.h>
#include "animation.h"

static GLfloat theta[] = { 0.0, 0.0, 0.0 };
static GLint axis = 1;

/*
* Dr. Chang's display function is the main display function.
* @args void
* @return void
*/
void display(void)
{
	/* display callback, clear frame buffer and z buffer,
	rotate cube and draw, swap buffers */

	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glLoadIdentity();
	glRotatef(theta[0], 1.0, 0.0, 0.0);
	glRotatef(theta[1], 0.0, 1.0, 0.0);
	glRotatef(theta[2], 0.0, 0.0, 1.0);

	drawStudent();

	glFlush();
	glutSwapBuffers();
}

/*
* Dr. Chang's spinCube function which rotates
* the model.
* @args void
* @return void
*/
void spinModel(void)
{
	/* Idle callback, spin cube 2 degrees about selected axis */

	theta[axis] += 0.5;
	if (theta[axis] > 360.0) theta[axis] -= 360.0;
	glutPostRedisplay();
}

/*
* Modified from Dr. Chang's mouse callback function,
* this listens for a mouse click and then spins the
* model clockwise about the y-axis.
* @args		btn - mouse button clicked
*			state - state of button
x - location of mouse on x-axis
y - location of mouse on y-axis
* @return void
*/
void mouse(int btn, int state, int x, int y)
{

	if (btn == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		axis = 1;
		glutIdleFunc(spinModel);
	}
	if (state == GLUT_UP)
	{
		glutIdleFunc(NULL);
	}
}

/*
* Dr. Chang's myReshape function which ensures that
* the model is scaled to the window.
* @args	w - width of the window
*			h - height of window
* @return void
*/
void myReshape(int w, int h)
{
	glViewport(0, 0, w, h);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	if (w <= h)
		glOrtho(-2.0, 2.0, -2.0 * (GLfloat)h / (GLfloat)w,
		2.0 * (GLfloat)h / (GLfloat)w, -10.0, 10.0);
	else
		glOrtho(-2.0 * (GLfloat)w / (GLfloat)h,
		2.0 * (GLfloat)w / (GLfloat)h, -2.0, 2.0, -10.0, 10.0);
	glMatrixMode(GL_MODELVIEW);
}