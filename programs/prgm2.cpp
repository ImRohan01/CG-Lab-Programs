#include<stdio.h>
#include<GL/glut.h>

int xc,yc,r;

void drawCircle(int xc,int yc,int x,int y)
{
	glBegin(GL_POINTS);
		glVertex2i(xc+x,yc+y);
		glVertex2i(xc-x,yc+y);
		glVertex2i(xc+x,yc-y);
		glVertex2i(xc-x,yc-y);
		glVertex2i(xc+y,yc+x);
		glVertex2i(xc-y,yc+x);
		glVertex2i(xc+y,yc-x);
		glVertex2i(xc-y,yc-x);
	glEnd();
}

void circleBres(int xc,int yc,int r)
{
	int x=0,y=r;
	int d=3-2*r;
	while(x<y)
	{
		drawCircle(xc,yc,x,y);
		x++;
		if(d<0)
			d=d+4*x+6;
		else
		{
			y--;
			d=d+4*(x-y)+10;
		}
		drawCircle(xc,yc,x,y);
	}
}

void display()
{
	int j;
	glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
	circleBres(xc,yc,r);
	glFlush();
}

void myinit()
{
	glClearColor(1.0,1.0,1.0,0);
	glColor3f(0,0,1.0);
	glPointSize(5.0);
	gluOrtho2D(0.0,500,0.0,500);
}

int main(int argc,char *argv[])
{
	int j;
	printf("Enter coord of centre of circle & radius: ");
	scanf("%d%d%d",&xc,&yc,&r);
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB|GLUT_DEPTH);
	glutInitWindowSize(500,500);
	glutInitWindowPosition(100,100);
	glutCreateWindow("Bresenham\'s Circle");
	glutDisplayFunc(display);
	myinit();
	glutMainLoop();
}
