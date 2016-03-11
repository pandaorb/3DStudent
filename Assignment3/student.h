#define FIRST_ELEMENT	0
#define SECOND_ELEMENT	1
#define	THIRD_ELEMENT	2

void drawHead(int a, int b, int c, int d);
void drawBody(int a, int b, int c, int d);
void drawLegs(int a, int b, int c, int d);
void drawArms(int a, int b, int c, int d);
void drawBackpack(int a, int b, int c, int d);
void drawCoffee(int a, int b, int c, int d);
void createPolygons(GLfloat points[][3], float ratio, int a, int b, int c, int d);
void drawStudent(void);