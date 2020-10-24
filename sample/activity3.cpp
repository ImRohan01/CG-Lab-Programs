#include<GL/glut.h>
void display()
{
	glClear(GL_COLOR_BUFFER_BIT);	
	glBegin(GL_POINTS);
		glVertex2i(100,300);
		glVertex2i(201,300);
	glEnd();
	glFlush();
}

void myinit()
{
	glClearColor(1.0,1.0,1.0,1.0);
	glColor3f(1.0,0.0,0.0);
	glPointSize(5.0);
	gluOrtho2D(0.0,500.0,0.0,500.0);
}

int main(int argc, char** argv)
{
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
	glutInitWindowSize(300,300);
	glutInitWindowPosition(0,0);
	glutCreateWindow("Activity3");
	myinit();
	glutDisplayFunc(display);
	glutMainLoop();
}
