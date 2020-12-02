#define BLACK 0
#include <stdio.h>
#include <math.h>
#include <GL/glut.h>
GLfloat house[3][9] = { {100.0,100.0,175.0,250.0,250.0,150.0,150.0,200.0,200.0},
{100.0,300.0,400.0,300.0,100.0,100.0,150.0,150.0,100.0},
{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}
};
GLfloat arbitrary_x = 100.0;
GLfloat arbitrary_y = 100.0;
GLfloat rotation_angle;
void drawhouse()
{
	glColor3f(0.0, 0.0, 1.0);
	glBegin(GL_LINE_LOOP);
	glVertex2f(house[0][0], house[1][0]);
	glVertex2f(house[0][1], house[1][1]);
	glVertex2f(house[0][3], house[1][3]);
	glVertex2f(house[0][4], house[1][4]);
	glEnd();
	glColor3f(1.0, 0.0, 0.0);
	glBegin(GL_LINE_LOOP);
	glVertex2f(house[0][5], house[1][5]);
	glVertex2f(house[0][6], house[1][6]);
	glVertex2f(house[0][7], house[1][7]);
	glVertex2f(house[0][8], house[1][8]);
	glEnd();
	glColor3f(0.0, 0.0, 1.0);
	glBegin(GL_LINE_LOOP);
	glVertex2f(house[0][1], house[1][1]);
	glVertex2f(house[0][2], house[1][2]);
	glVertex2f(house[0][3], house[1][3]);
	glEnd();
}
void display()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	drawhouse();
	glTranslatef(arbitrary_x, arbitrary_y, 0.0);
	glRotatef(rotation_angle, 0.0, 0.0, 1.0);
	glTranslatef(-(arbitrary_x), -(arbitrary_y), 0.0);
	drawhouse();
	glFlush();
}
void myinit()
{
	glClearColor(1.0, 1.0, 1.0, 1.0);
	glColor3f(1.0, 0.0, 0.0);
	glPointSize(1.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0, 499.0, 0.0, 499.0);
}
int main(int argc, char** argv)
{
	printf("Enter the rotation angle\n");
	scanf("%f", &rotation_angle);
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(500, 500);
	glutInitWindowPosition(0, 0);
	glutCreateWindow("house rotation");
	glutDisplayFunc(display);
	myinit();
	glutMainLoop();
}
