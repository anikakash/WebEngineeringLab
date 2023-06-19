#include <iostream>
#include<stdio.h>
#include<windows.h>
#include<GL/glut.h>
#include<math.h>
#define pi 3.142857
#include<iostream>
using namespace std;

float x=50;
int y=450;
int p=0;
void myInit ()
{
  //glClearColor(0.0, 1.0, 0.0, 0.0);
  //glClearColor(184.0f/255.0f, 213.0f/255.0f, 238.0f/255.0f, 1.0f);
  //glColor3f(0.0, 0.2, 0.0);
  glClearColor(128.0f/255.0f,0, 0, 1.0f);

  glMatrixMode(GL_PROJECTION);
  glLoadIdentity();

  // setting window dimension in X- and Y- direction
  glOrtho(0, 500, 0, 500, -10.0, 10.0);
}


void circle(float x,float y)
{
    float x1,y1,x2,y2;
    float radius=50;
    x1=x;
    y1=y;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0, 135, 0);
    glVertex2f(x1,y1);
    float angle;
    for (angle=0;angle<=360;angle+=0.5)
    {
        x2 = x1+sin((angle*3.1416)/180)*radius;
        y2 = y1+cos((angle*3.1416)/180)*radius;
        glVertex2f(x2,y2);
    }

    glEnd();
}

void circleRe(int x,int y,int r,int g,int b)
{
    float x1,y1,x2,y2;
    float radiusx=550;
    float radiusy=120;
    x1=x;
    y1=y;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(r,g,b);
    glVertex2f(x1,y1);
    float angle;
    for (angle=0;angle<=360;angle+=0.1)
    {
        int tx=rand() % 2;
        int ty=rand() % 70;
        x2 = tx+x1+sin((angle*3.1416)/180)*radiusx;
        y2 = ty+y1+cos((angle*3.1416)/180)*radiusy;
        glVertex2f(x2, y2);
    }
    glEnd();
}


void ghash(int x,int y,int r,int g,int b)
{
    circleRe(x,y,r,g,b);
}

void grave(int x,int y)
{

glBegin(GL_QUADS);
glColor3ub(0,0,0);
glVertex2f( x,y );
glVertex2f( x+70, y );
glVertex2f( x+70, y+100);
glVertex2f( x, y+100);
glEnd();
glBegin(GL_TRIANGLE_FAN);
glColor3ub(0,0,0);


glVertex2f( x+35, y+100 );
glEnd();

glBegin(GL_QUADS);
glColor3ub(0,0,0);
glVertex2f(118, 200);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0,0,0);
glVertex2f(130, 140);
glEnd();

}

void stopGrash(){

}

int z = 20;
void display ()
{

glClear(GL_COLOR_BUFFER_BIT);

glBegin(GL_QUADS);

glColor3ub(255,0,119);
glVertex2f( 0,0 );
glVertex2f( 500, 0 );

glColor3ub(0,0,0);
glVertex2f( 500, 500);

glVertex2f( 0, 500);
glEnd();
circle(x, y);

if(z>400){
    y=50;
}
else{
if(p==0){
    y--;
}
else if(p==1){
    y++;
}

if(y == 50 && p == 0){
    p =1;
}
if(y==450-z && p==1){
    p=0;
    z+=30;
}
}
x+=0.01;

glFlush();

}


void update(int val) {


  glutPostRedisplay();
  glutTimerFunc(5, update, 0);
}


int main (int argc, char** argv)
{
  glutInit(&argc,argv);
  glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);

  // giving window size in X- and Y- direction
  glutInitWindowSize(700, 700);
  glutInitWindowPosition(100, 0);
  // Giving name to window
  glutCreateWindow("Ahmed Muktadir Udoy (201-15-14218)");
  myInit();
    glutDisplayFunc(display);
  glutTimerFunc(25, update, 0);
    //update(0);
  glutMainLoop();
}
