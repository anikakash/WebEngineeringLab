#include <GL/gl.h>
#include<GL\glut.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>


void init(void)
{
     /* select clearing (background) color */
    glClearColor (1.0, 1.0, 1.0, 1.0);
    /* initialize viewing values */
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0, 400, 0, 410);//Related with 'glutInitWindowSize'
}

void circle_frame(int h, int k, int rx,int ry)    //Works
{
    //glClear(GL_COLOR_BUFFER_BIT); // Clear the color buffer with current clearing color
    glPointSize(10);
    glBegin(GL_POINTS);
    //glBegin(GL_POLYGON);
    for(int i=1;i<=360;i++)     //360 kon
    {   //(x=position+radius x(150))    (y=position+radius y(150))   //// y point=sin main point ; x point=cos main point
        glVertex2f(h+rx*cos(3.14159*i/180),k+ry*sin(3.14159*i/180));       //main point + radius
    }                                                                      //3.14159*i/180   convert degree to radian
    glEnd();

    glFlush();

}

void circle_smile(float x1,float y1,float rx, float ry)
{
    float x2,y2;

    //glBegin(GL_POLYGON);
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(135,40,38); //Center Color of Circle
    glVertex2f(x1,y1); //Center Vertex
    int angle;
    for (angle=0;angle<=360;angle++) //0,90,180,270
    {
        glColor3ub(89,13,23); //Edge color of Circle
        x2 = x1+rx*sin((angle*3.1416)/180);  // convert degree to radian
        y2 = y1+ry*cos((angle*3.1416)/180);
        glVertex2f(x2,y2);
    }

    glEnd();

}

void circle_shape(int h, int k, int rx,int ry)    //Works
{
    //glClear(GL_COLOR_BUFFER_BIT); // Clear the color buffer with current clearing color

    glBegin(GL_POLYGON);
        for(int i=1;i<=360;i++)     //360 kon
        {                //(x=position+radius x(150))    (y=position+radius y(150))   //// y point=sin main point ; x point=cos main point
            glVertex2f(h+rx*cos(3.14159*i/180),k+ry*sin(3.14159*i/180));       //main point + radius
        }                                                                      //3.14159*i/180   convert degree to radian
        glEnd();

    glFlush();

}

void circle(float x1,float y1,float rx, float ry)
{
    float x2,y2;

    //glBegin(GL_POLYGON);
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(195,185,95); //Center Color of Circle
    glVertex2f(x1,y1); //Center Vertex
    int angle;
    for (angle=0;angle<=360;angle++) //0,90,180,270
    {
        glColor3ub(240,228,95); //Edge color of Circle
        x2 = x1+rx*sin((angle*3.1416)/180);  // convert degree to radian
        y2 = y1+ry*cos((angle*3.1416)/180);
        glVertex2f(x2,y2);
    }

    glEnd();

}

void emoji(void)
{
    ///Background
    glColor3ub (255, 255, 255);
    glBegin(GL_POLYGON);
    glVertex2d (0, 0);
    glVertex2d (400, 0);
    glVertex2d (400, 410);
    glVertex2d (0, 410);
    glEnd();

    ///Face
    glColor3ub(0.96, 0.93, 0.57);
    circle(210, 200, 205, 185);

    ///Smile
     glColor3f(0.71, 0.48, 0.28);
     circle_smile(210, 200, 170, 160);

     ///Left Teeth
     glColor3f(1.0, 1.0, 1.0);
     circle_shape(200, 65, 16, 35);

     ///Right Teeth
     glColor3f(1.0, 1.0, 1.0);
     circle_shape(220, 65, 16, 35);

     ///Cover of Smile
     glColor3f(0.96, 0.93, 0.57);
     circle(210, 220, 200, 155);

    ///Left Eye Outer White part
    glColor3f(1.0, 1.0, 1.0);
    circle_shape(120, 240, 45, 65);

    ///Left Eye Blue part
    glColor3f(0.35, 0.80, 0.90);
    circle_shape(120, 240, 37, 38);

    ///Left Eye Black part
    glColor3f(0.0, 0.0, 0.0);
    circle_shape(120, 240, 30, 30);

    ///Left Eye Inner White part
    glColor3f(0.98, 1.0, 1.0);
    circle_shape(110, 250, 8, 8);

    ///Right Eye White part
    glColor3f(1.0, 1.0, 1.0);
    circle_shape(320, 240, 45, 65);

    ///Right Eye Blue part
    glColor3f(0.35, 0.80, 0.90);
    circle_shape(320, 240, 37, 38);

    ///Right Eye Black part
    glColor3f(0.0, 0.0, 0.0);
    circle_shape(320, 240, 30, 30);

    ///Right Eye Inner White part
    glColor3f(0.98, 1.0, 1.0);
    circle_shape(310, 250, 8, 8);

     ///Left glass
     glColor3f(0.0, 0.0, 0.0);
     circle_frame(110, 230, 99, 55);

     ///Connection between 2 glasses
     glColor3f(0.0, 0.0, 0.0);
     circle_shape(210, 250, 8, 10);

     ///Right glass
     glColor3f(0.0, 0.0, 0.0);
     circle_frame(310, 230, 99, 55);

    glFlush();

}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowPosition(0, 0);
    glutInitWindowSize(500, 500);
    glutCreateWindow("kowsar_201-15-14238");
    init();
    glutDisplayFunc(emoji);
    glutMainLoop();
}
