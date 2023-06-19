#include <iostream>
#include<windows.h>
#include<stdio.h>
#include<GL/glut.h>
#include<math.h>
#define pi 3.142857
#include<iostream>
using namespace std;



void myInit ()
{

	//glClearColor(0.0, 1.0, 0.0, 0.0);
	//glClearColor(184.0f/255.0f, 213.0f/255.0f, 238.0f/255.0f, 1.0f);
	//glColor3f(0.0, 0.2, 0.0);
	glClearColor(255.0f/255.0f,255.0f, 255.0f, 1.0f);

	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();


	// setting window dimension in X- and Y- direction
	glOrtho(0, 1000, 0, 500, -10.0, 10.0);


}
void circle(float x,float y,float rx, float ry, float a,float b,float c)
{
    float x1,y1,x2,y2;
    float radius1=rx;
    float radius2=ry;
    x1=x;
    y1=y;
    //glBegin(GL_TRIANGLE_FAN);
    glColor3ub(a,b,c);
    glPointSize(4);
    glBegin(GL_POINTS);
//glVertex2f(x1,y1);
int angle;
for (angle=0;angle<=360;angle+=1)
{
    glColor3ub(a,b,c);
    x2 = x1+sin((angle*3.1416)/180)*radius1;
    y2 = y1+cos((angle*3.1416)/180)*radius2;
    glVertex2f(x2,y2);
}

glEnd();

}
void circleC(float x,float y,float r)
{
    float x1,y1,x2,y2;
    float radius=r;
    x1=x;
    y1=y;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255,1,3);
glVertex2f(x1,y1);
int angle;
for (angle=0;angle<=360;angle+=2)
{
    glColor3ub(255,1,6);
    x2 = x1+sin((angle*3.1416)/180)*radius;
    y2 = y1+cos((angle*3.1416)/180)*radius;
    glVertex2f(x2,y2);
}

glEnd();

}


void circleRe()
{
    float x1,y1,x2,y2;
    float radiusx=90;
     float radiusy=50;
    x1=500;
    y1=180;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(245,218,110);
glVertex2f(x1,y1);
int angle;
for (angle=90;angle<=270;angle+=2)
{
    int tx=rand() % 40;
   // int ty=rand() % 5;
    x2 = tx+x1+sin((angle*3.1416)/180)*radiusx;
    y2 = y1+cos((angle*3.1416)/180)*radiusy;
    glVertex2f(x2,y2);
}

glEnd();


}




void display ()
{
    glClear(GL_COLOR_BUFFER_BIT);

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f( 0,0 );
glVertex2f( 1000, 0 );

glColor3ub(0, 0, 0);
glVertex2f( 1000, 500);
glVertex2f( 0, 500);
glEnd();

circle(500, 300,40,60,255,0,19);

circle(500, 300,60,210,105,30,70);

circle(500, 300,80,244,164,96,80  );

circle(500, 300,100,210,105,30,80);

circle(500, 300,120,160,82,45,80);

circle(500, 300,140,160,82,45,80);

circle(500, 300,160,160,82,45,80);

circle(500, 300,180,160,82,45,80);

circle(500, 300,200,160,82,45,80);

circleC(500, 300,40);



/*circle(400, 300,90,0, 92, 181);
circle(550, 300,90,50, 57, 45);
circle(700, 300,90,181, 2, 24);
circle(450, 250,90,190, 145, 1);
circle(650, 250,90,53, 124, 50);*/



glFlush();
}

int main (int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);

	// giving window size in X- and Y- direction
	glutInitWindowSize(1000, 500);
	glutInitWindowPosition(100, 0);

	// Giving name to window
	glutCreateWindow("class 3");
	myInit();

	glutDisplayFunc(display);
	//glutTimerFunc(25, update, 0);

	glutMainLoop();
}
