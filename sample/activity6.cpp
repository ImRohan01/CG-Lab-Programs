#include<GL/glut.h>
void display()
{
	glClear(GL_COLOR_BUFFER_BIT);	
	glColor3f(1.0,1.0,0.0); 
	glLineWidth(4.0); 
	glBegin(GL_LINES);
		glVertex2d (50, 100);
		glVertex2d (100, 100);
		glVertex2d (100, 100);
		glVertex2d (100, 150);
		glVertex2d (100, 150);
		glVertex2d (50, 150);
		glVertex2d (50, 150);
		glVertex2d (50, 100);
	glEnd();
	glFlush();
}

void myinit()
{
	glClearColor(1.0,0.0,1.0,1.0);
	gluOrtho2D(0.0,200.0,0.0,200.0);
}

int main(int argc, char** argv)
{
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
	glutInitWindowSize(500,500);
	glutInitWindowPosition(10,100);
	glutCreateWindow("Activity6");
	glutDisplayFunc(display);
	myinit();
	glutMainLoop();
}
