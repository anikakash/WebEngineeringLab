#include <GL/gl.h>
#include<GL\glut.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>


void init(void)
{
    glClearColor(0.0, 0.0, 1.0, 0.0);
    gluOrtho2D(0, 500, 0, 500);
}



void circle_kon(int h, int k, int rx,int ry)    //Works
{
    //glClear(GL_COLOR_BUFFER_BIT); // Clear the color buffer with current clearing color

    ///glBegin(GL_POLYGON);
    glPointSize(4);
    glBegin(GL_POINTS);
        for(int i=1;i<=360;i++)     //360 kon
        {                //(x=position+radius x(150))    (y=position+radius y(150))   //// y point=sin main point ; x point=cos main point
            glVertex2f(h+rx*cos(3.14159*i/180),k+ry*sin(3.14159*i/180));       //main point + radius
        }                                                                      //3.14159*i/180   convert degree to radian
        glEnd();

    glFlush();

}


void buildHouse(void)
{
    glColor3f(1.0, .60, 0.0);
    circle_kon(250, 250, 50, 50);
    glColor3f(1.0, .60, 1.0);
    circle_kon(350, 250, 50, 50);
    glColor3f(1.0, 0.0, 0.0);
    circle_kon(450, 250, 50, 50);
    glColor3f(0.0, .60, 0.70);
    circle_kon(300, 200, 50, 50);
    glColor3f(0.50, .60, 0.0);
    circle_kon(400, 200, 50, 50);
    glFlush();


}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowPosition(0, 0);
    glutInitWindowSize(900, 900);
    glutCreateWindow("kowsar_201-15-14238");
    init();
    glutDisplayFunc(buildHouse);
    glutMainLoop();
}
