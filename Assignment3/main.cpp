/*
 * Assignment 3 - 3D Student
 * Author: Allison Macdonald
 * Last Modifed: 04 March, 2016
 *
 * This program generates a 3D student wearing a long sleeved
 * shirt and pants. This student is wearing a backpack and carrying
 * a cup of Starbucks because he is in Engineering, so he can't
 * survive without it. The user may rotate the student by clicking
 * the left mouse button. Letting go of the button will stop the 
 * spin.
 */

#include "stdafx.h"
#include <GL/glut.h>
#include "initialize.h"
#include "student.h"
#include "animation.h"

int _tmain(int argc, char** argv)
{	
	glutInit(&argc, argv);
	viewInit();
	glutReshapeFunc(myReshape);
	glutDisplayFunc(display);
	glutMouseFunc(mouse);
	glEnable(GL_DEPTH_TEST); /* Enable hidden--surface--removal */
	glutMainLoop();
	return 0;
}