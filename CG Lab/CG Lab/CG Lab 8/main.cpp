#include <iostream>
#include <windows.h>
#include <GL/glut.h>
#include <math.h>

#define pi 3.142857

float x = 100;
float y = 200;
int flag=0;
int c=30;
int d=330;

void myInit()
{
    glClearColor(128.0f / 255.0f, 0, 0, 1.0f);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(0, 500, 0, 500, -10.0, 10.0);
}

void circle(float x, float y)
{
    float x1, y1, x2, y2;
    float radius = 50;
    x1 = x;
    y1 = y;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(22, 102, 171);
    glVertex2f(x1, y1);

    float angle;
    for (angle = c; angle <= d; angle += 0.5)
    {
        x2 = x1 + sin((angle * pi) / 180) * radius;
        y2 = y1 + cos((angle * pi) / 180) * radius;
        glVertex2f(x2, y2);
    }

    glEnd();
}

void display()
{
    glClear(GL_COLOR_BUFFER_BIT);

    glClear(GL_COLOR_BUFFER_BIT);

    glBegin(GL_QUADS);

    glColor3ub(20, 255, 53);
    glVertex2f(0,0);
    glVertex2f( 600, 0 );

    glColor3ub(173, 226, 205);
    glVertex2f( 500, 500);

    glVertex2f( 0, 500);
    glEnd();

//    mouthAngle += 1.0f;
//    if (mouthAngle > 120.0f)
//        mouthAngle = 20.0f;

    if (flag==0){
        c-=3;
        d+=3;
    }
    else if (flag==1){
        c+=1;
        d-=1;
    }

    if(c<0){
        flag=1;
    }
    else if(c>30){
        flag=0;
    }

    circle(x, y);

    glFlush();
}

void update(int val)
{
    glutPostRedisplay();
    glutTimerFunc(30, update, 0);
}

int main(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(700, 700);
    glutInitWindowPosition(100, 0);
    glutCreateWindow("Kowsar(201-15-14238)");
    myInit();
    glutDisplayFunc(display);
    glutTimerFunc(25, update, 0);
    glutMainLoop();
}
