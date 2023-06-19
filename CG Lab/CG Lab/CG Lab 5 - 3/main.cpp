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
    gluOrtho2D(0, 400, 0, 350);//Related with 'glutInitWindowSize'
}

void circle_kon(int h, int k, int rx,int ry)    //Works
{
    //glClear(GL_COLOR_BUFFER_BIT); // Clear the color buffer with current clearing color
    glPointSize(4);
    glBegin(GL_POINTS);
    //glBegin(GL_POLYGON);
        for(int i=1;i<=360;i++)     //360 kon
        {                //(x=position+radius x(150))    (y=position+radius y(150))   //// y point=sin main point ; x point=cos main point
            glVertex2f(h+rx*cos(3.14159*i/180),k+ry*sin(3.14159*i/180));       //main point + radius
        }                                                                      //3.14159*i/180   convert degree to radian
        glEnd();

    glFlush();

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
    glColor3ub(255,0,0); //Center Color of Circle
    glVertex2f(x1,y1); //Center Vertex
    int angle;
    for (angle=0;angle<=360;angle++) //0,90,180,270
    {
        glColor3ub(255,0,0); //Edge color of Circle
        x2 = x1+rx*sin((angle*3.1416)/180);  // convert degree to radian
        y2 = y1+ry*cos((angle*3.1416)/180);
        glVertex2f(x2,y2);
    }

    glEnd();

}

void solarSystem(void)
{
    ///star-1
    //1.1
    glColor3ub (255, 255, 255);
    glBegin(GL_POLYGON);
    glVertex2d (65, 90);
    glVertex2d (70, 100);
    glVertex2d (60, 95);
    glEnd();
    //1.2
    glColor3ub (255, 255, 255);
    glBegin(GL_POLYGON);
    glVertex2d (65, 95);
    glVertex2d (75, 100);
    glVertex2d (65, 95);
    glEnd();
    //1.3
    glColor3ub (255, 255, 255);
    glBegin(GL_POLYGON);
    glVertex2d (70, 100);
    glVertex2d (80, 105);
    glVertex2d (60, 95);
    glEnd();
    //1.2
    glColor3ub (255, 255, 255);
    glBegin(GL_POLYGON);
    glVertex2d (65, 95);
    glVertex2d (75, 100);
    glVertex2d (65, 105);
    glEnd();
    //1.1
    glColor3ub (255, 255, 255);
    glBegin(GL_POLYGON);
    glVertex2d (65, 90);
    glVertex2d (70, 100);
    glVertex2d (60, 95);
    glEnd();
    //1.2
    glColor3ub (255, 255, 255);
    glBegin(GL_POLYGON);
    glVertex2d (65, 95);
    glVertex2d (75, 100);
    glVertex2d (65, 105);
    glEnd();
    ///Orbits
    circle_kon(200, 200, 20, 15);
    circle_kon(200, 200, 30, 25);
    circle_kon(200, 200, 40, 35);
    circle_kon(200, 200, 50, 45);
    circle_kon(200, 200, 60, 55);
    circle_kon(200, 200, 70, 65);
    circle_kon(200, 200, 80, 75);
    circle_kon(200, 200, 90, 85);
    circle_kon(200, 200, 100, 97);


    ///Sun Outer Shape
    glColor3ub(242,193,72);
    circle_shape(200, 200, 12, 12);
    ///Sun
    glColor3ub(242,94,60);
    circle(200, 200, 10, 10);

    ///Mercury.1
    glColor3f(0.65, 0.70, 0.80);
    circle_shape(185, 210, 4, 4);

    ///Venus.2
    glColor3f(0.9, 0.6, 0.5);
    circle_shape(200, 175, 5, 5);

    ///Earth.3
    glColor3f(0.2, .80, 0.95);
    circle_shape(200, 235, 5, 5);

    ///Mars.4
    glColor3f(0.85, .2, 0.2);
    circle_shape(250, 200, 5, 5);

    ///Jupiter.5
    glColor3f(0.95, .80, 0.55);
    circle_shape(140, 200, 7, 7);

    ///Saturn.6
    glColor3f(0.95, 0.80, 0.55);
    circle_shape(255, 240, 7, 7);

    ///Uranus.7
    glColor3f(0.0, 0.60, 0.80);
    circle_shape(127, 230, 6, 6);

    ///Neptune.8
    glColor3f(0.3, 0.65, 0.85);
    circle_shape(260, 137, 5, 5);

    ///Pluto.9
    glColor3f(0.65, 0.75, 0.85);
    circle_shape(120, 142, 5, 5);

    glFlush();
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowPosition(0, 0);
    glutInitWindowSize(2000, 1111);
    glutCreateWindow("kowsar_201-15-14238");
    init();
    glutDisplayFunc(solarSystem);
    glutMainLoop();
}
