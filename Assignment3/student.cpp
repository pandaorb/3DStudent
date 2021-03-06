#include "stdafx.h"
#include <GL/glut.h>
#include "student.h"
#include <stdlib.h>

/*
* Modification of Dr. Chang's polygon function generates a head
* based on the coordinates defined in local arrays.
* @args		a - first index of the ordered pair to be accessed
*			b - second index of the ordered pair to be accessed 
*			c - third index of the ordered pair to be accessed
*			d - fourth index of the ordered pair to be accessed
* @return void
*/
void drawHead(int a, int b, int c, int d)
{
	GLfloat studentColor[] = { (237.0 / 255.0), (194.0 / 255.0), (180.0 / 255.0) };
	GLfloat head[][3] = { { -1.0, -1.0, -1.0 }, { 1.0, -1.0, -1.0 },
	{ 1.0, 1.0, -1.0 }, { -1.0, 1.0, -1.0 }, { -1.0, -1.0, 1.0 },
	{ 1.0, -1.0, 1.0 }, { 1.0, 1.0, 1.0 }, { -1.0, 1.0, 1.0 } };

	glColor4f(studentColor[0], studentColor[1], studentColor[2], 1.0);
	
	float ratio = 5.0;
	createPolygons(head, ratio, a, b, c, d);
}

/*
* Modification of Dr.Chang's polygon function generates a body
* based on the coordinates defined in local arrays.
* @args		a - first index of the ordered pair to be accessed
*			b - second index of the ordered pair to be accessed
*			c - third index of the ordered pair to be accessed
*			d - fourth index of the ordered pair to be accessed
* @return void
*/
void drawBody(int a, int b, int c, int d)
{
	GLfloat body1[][3] = { { -1.0, -3.0, -1.0 }, { 1.0, -3.0, -1.0 },
	{ 1.0, -0.5, -1.0 }, { -1.0, -0.5, -1.0 }, { -1.0, -3.0, 1.0 },
	{ 1.0, -3.0, 1.0 }, { 1.0, -0.5, 1.0 }, { -1.0, -0.5, 1.0 } };

	glColor4f(1.0, 0.0, 0.0, 0.0);
	float ratio = 3.0;
	createPolygons(body1, ratio, a, b, c, d);
}

/*
* Modification of Dr.Chang's polygon function generates legs
* based on the coordinates defined in local arrays.
* @args		a - first index of the ordered pair to be accessed
*			b - second index of the ordered pair to be accessed
*			c - third index of the ordered pair to be accessed
*			d - fourth index of the ordered pair to be accessed
* @return void
*/
void drawLegs(int a, int b, int c, int d)
{
	float x1 = -2.2;
	float x2 = -0.2;
	float y1 = -11.0;
	float y2 = -7.0;
	GLfloat rightLeg[][3] = { { x1, y1, -1.0 }, { x2, y1, -1.0 },
	{ x2, y2, -1.0 }, { x1, y2, -1.0 }, { x1, y1, 1.0 },
	{ x2, y1, 1.0 }, { x2, y2, 1.0 }, { x1, y2, 1.0 } };

	float x3 = 0.3;
	float x4 = 2.2;
	float y3 = -11.0;
	float y4 = -7.0;
	GLfloat leftLeg[][3] = { { x3, y3, -1.0 }, { x4, y3, -1.0 },
	{ x4, y4, -1.0 }, { x3, y4, -1.0 }, { x3, y3, 1.0 },
	{ x4, y3, 1.0 }, { x4, y4, 1.0 }, { x3, y4, 1.0 } };

	glColor4f(0.0, 0.0, 1.0, 1.0);
	float ratio = 7.0;
	createPolygons(rightLeg, ratio, a, b, c, d);
	createPolygons(leftLeg, ratio, a, b, c, d);
}

/*
* Modification of Dr.Chang's polygon function generates arms
* based on the coordinates defined in local arrays.
* @args		a - first index of the ordered pair to be accessed
*			b - second index of the ordered pair to be accessed
*			c - third index of the ordered pair to be accessed
*			d - fourth index of the ordered pair to be accessed
* @return void
*/
void drawArms(int a, int b, int c, int d)
{
	float x1 = -4.0;
	float x2 = -2.5;
	float y1 = -5.0;
	float y2 = -1.5;
	GLfloat rightArm[][3] = { { x1, y1, -1.0 }, { x2, y1, -1.0 },
	{ x2, y2, -1.0 }, { x1, y2, -1.0 }, { x1, y1, 1.0 },
	{ x2, y1, 1.0 }, { x2, y2, 1.0 }, { x1, y2, 1.0 } };

	float x3 = 2.5;
	float x4 = 4.0;
	float y3 = -5.0;
	float y4 = -1.5;
	GLfloat leftArm[][3] = { { x3, y3, -1.0 }, { x4, y3, -1.0 },
	{ x4, y4, -1.0 }, { x3, y4, -1.0 }, { x3, y3, 1.0 },
	{ x4, y3, 1.0 }, { x4, y4, 1.0 }, { x3, y4, 1.0 } };

	glColor4f(0.0, 1.0, 1.0, 1.0);
	float ratio = 8.0;
	createPolygons(rightArm, ratio, a, b, c, d);
	createPolygons(leftArm, ratio, a, b, c, d);
}

/*
* Modification of Dr.Chang's polygon function generates a backpack
* based on the coordinates defined in local arrays.
* @args		a - first index of the ordered pair to be accessed
*			b - second index of the ordered pair to be accessed
*			c - third index of the ordered pair to be accessed
*			d - fourth index of the ordered pair to be accessed
* @return void
*/
void drawBackpack(int a, int b, int c, int d)
{
	float z1 = -1.5;
	float z2 = -2.0;
	GLfloat backpack[][3] = { { -1.0, -3.0, z1 }, { 1.0, -3.0, z1 },
	{ 1.0, -0.5, z1 }, { -1.0, -0.5, z1 }, { -1.0, -3.0, z2 },
	{ 1.0, -3.0, z2 }, { 1.0, -0.5, z2 }, { -1.0, -0.5, z2 } };

	/* draw a polygon via list of vertices */
	glColor4f(0.0, 1.0, 0.0, 1.0);
	float ratio = 4.0;
	createPolygons(backpack, ratio, a, b, c, d);
}

/*
* Modification of Dr.Chang's polygon function generates coffee cup
* based on the coordinates defined in local arrays.
* @args		a - first index of the ordered pair to be accessed
*			b - second index of the ordered pair to be accessed
*			c - third index of the ordered pair to be accessed
*			d - fourth index of the ordered pair to be accessed
* @return void
*/
void drawCoffee(int a, int b, int c, int d)
{
	float x1 = -5.0;
	float x2 = -3.5;
	float y1 = -6.3;
	float y2 = -7.8;
	float z1 = -1.0;
	float z2 = 1.0;

	GLfloat coffee[][3] = { { x1, y1, z1 }, { x2, y1, z1 },
	{ x2, y2, z1 }, { x1, y2, z1 }, { x1, y1, z2 },
	{ x2, y1, z2 }, { x2, y2, z2 }, { x1, y2, z2 } };

	/* draw a polygon via list of vertices */
	glColor4f(1.0, 1.0, 1.0, 1.0);
	float ratio = 10.0;
	createPolygons(coffee, ratio, a, b, c, d);
}

/*
*Abstraction of Dr.Chang's polygon function generates a four sided
* polygon based on the coordinates defined in local arrays.
* @args		points - the array of points for the polygon
*			ratio - the number to divide the size of the cube by
*			a - first index of the ordered pair to be accessed
*			b - second index of the ordered pair to be accessed
*			c - third index of the ordered pair to be accessed
*			d - fourth index of the ordered pair to be accessed
* @return void
*/
void createPolygons(GLfloat points[][3], float ratio, int a, int b, int c, int d)
{
	glBegin(GL_POLYGON);
	glVertex3f(points[a][FIRST_ELEMENT] / ratio, points[a][SECOND_ELEMENT] / ratio, points[a][THIRD_ELEMENT] / ratio);
	glVertex3f(points[b][FIRST_ELEMENT] / ratio, points[b][SECOND_ELEMENT] / ratio, points[b][THIRD_ELEMENT] / ratio);
	glVertex3f(points[c][FIRST_ELEMENT] / ratio, points[c][SECOND_ELEMENT] / ratio, points[c][THIRD_ELEMENT] / ratio);
	glVertex3f(points[d][FIRST_ELEMENT] / ratio, points[d][SECOND_ELEMENT] / ratio, points[d][THIRD_ELEMENT] / ratio);
	glEnd();
}

/*
* Modification of Dr. Chang's createcube function  
* arranges polygons into a single 3D model.
* @args void
* @return void
*/
void drawStudent(void)
{
	drawHead(0, 3, 2, 1);
	drawHead(2, 3, 7, 6);
	drawHead(0, 4, 7, 3);
	drawHead(1, 2, 6, 5);
	drawHead(4, 5, 6, 7);
	drawHead(0, 1, 5, 4);

	drawBody(0, 3, 2, 1);
	drawBody(2, 3, 7, 6);
	drawBody(0, 4, 7, 3);
	drawBody(1, 2, 6, 5);
	drawBody(4, 5, 6, 7);
	drawBody(0, 1, 5, 4);

	drawLegs(0, 3, 2, 1);
	drawLegs(2, 3, 7, 6);
	drawLegs(0, 4, 7, 3);
	drawLegs(1, 2, 6, 5);
	drawLegs(4, 5, 6, 7);
	drawLegs(0, 1, 5, 4);

	drawArms(0, 3, 2, 1);
	drawArms(2, 3, 7, 6);
	drawArms(0, 4, 7, 3);
	drawArms(1, 2, 6, 5);
	drawArms(4, 5, 6, 7);
	drawArms(0, 1, 5, 4);

	drawBackpack(0, 3, 2, 1);
	drawBackpack(2, 3, 7, 6);
	drawBackpack(0, 4, 7, 3);
	drawBackpack(1, 2, 6, 5);
	drawBackpack(4, 5, 6, 7);
	drawBackpack(0, 1, 5, 4);

	drawCoffee(0, 3, 2, 1);
	drawCoffee(2, 3, 7, 6);
	drawCoffee(0, 4, 7, 3);
	drawCoffee(1, 2, 6, 5);
	drawCoffee(4, 5, 6, 7);
	drawCoffee(0, 1, 5, 4);
}

