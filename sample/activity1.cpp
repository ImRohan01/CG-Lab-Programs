#include<GL/glut.h>
void display () 
{
	glClearColor (1.0,1.0,0.0,0.0);
	glClear (GL_COLOR_BUFFER_BIT);
	glFlush(); 
}
int main (int argc, char **argv) 
{
	glutInit (&argc, argv); 
	glutCreateWindow ("Activity1"); 
	glutDisplayFunc (display); 
	glutMainLoop (); 
}
