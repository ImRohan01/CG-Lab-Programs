#include<GL/glut.h>
void display (void) 
{
	glClearColor (0.0,1.0,0.0,0.0); 
	glClear (GL_COLOR_BUFFER_BIT);
	glFlush(); 
}

int main (int argc, char **argv) 
{
	glutInit (&argc, argv); 
	glutInitWindowSize(500,500);	
	glutInitWindowPosition(100,100);
	glutCreateWindow ("Activity2"); 
	glutDisplayFunc (display); 
	glutMainLoop (); 
}
