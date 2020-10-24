#include<GL/glut.h>
void display()
{
	glClear(GL_COLOR_BUFFER_BIT);	
	glColor3f(1.0,0.0,0.0); 	
	glLineWidth(3.0); 		
	glBegin(GL_LINES);
		glVertex2d (50,50);	
		glVertex2d (150,50);
		glColor3f(0.0,0.0,1.0); 
		glVertex2d (200,200);	
		glVertex2d (200,300);
	glEnd();
	glFlush();
}

void myinit()
{
	glClearColor(1.0,1.0,1.0,1.0);
	glColor3f(1.0,0.0,0.0);
	glPointSize(1.0);
	gluOrtho2D(0.0,500.0,0.0,500.0);
}

int  main(int argc, char** argv)
{
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
	glutInitWindowSize(500,500);
	glutInitWindowPosition(100,100);
	glutCreateWindow("Activity5");
	glutDisplayFunc(display);
	myinit();
	glutMainLoop();
}
