#include <GL/gl.h>
#include <GL/glut.h>
void display(void)
{
/* clear all pixels */
glClear (GL_COLOR_BUFFER_BIT);
/* draw white polygon (rectangle) with corners at
* (0.25, 0.25, 0.0) and (0.75, 0.75, 0.0)
*/
/* GL_Lines
glColor3ub (0, 0,255);
glLineWidth(10);
glBegin(GL_LINES);
glVertex2d (50, 50);
glVertex2d (50, 100);
glVertex2d (100, 50);
glVertex2d (100, 100);
glEnd();
*/
/*
glColor3ub (0, 0,255);
glPointSize(10);
glBegin(GL_POINTS);
glVertex2d (50, 50);
glVertex2d (50, 100);
glVertex2d (100, 50);
glVertex2d (100, 100);
glEnd();

glColor3ub (0, 0,255);
glPointSize(20);
glBegin(GL_POINTS);
glVertex2d (25, 50);
glVertex2d (25, 100);
glVertex2d (75, 50);
glVertex2d (75, 100);
glEnd();

glColor3ub (0, 0,255);
glPointSize(20);
glBegin(GL_POINTS);
glVertex2d (250, 50);
glVertex2d (250, 100);
glVertex2d (200, 50);
glVertex2d (200, 100);
glEnd();

glColor3ub (0, 0,255);
glPointSize(20);
glBegin(GL_POINTS);
glVertex2d (350, 50);
glVertex2d (350, 100);
glVertex2d (400, 50);
glVertex2d (400, 100);
glEnd();

glColor3ub (0, 0,255);
glPointSize(20);
glBegin(GL_POINTS);
glVertex2d (550, 50);
glVertex2d (550, 100);
glVertex2d (600, 50);
glVertex2d (600, 100);
glEnd();
*/


//River
glColor3ub (0, 145, 255);
//glLineWidth(10);
glBegin(GL_POLYGON);
glVertex2d (0, 0);
glVertex2d (1200, 0);
glVertex2d (1200, 300);
glVertex2d (0, 60);
glEnd();

//Boat
glColor3ub (11, 34, 189);
//glLineWidth(10);
glBegin(GL_POLYGON);
glVertex2d (50, 15);
glVertex2d (150, 15);
glVertex2d (170, 40);
glVertex2d (35, 40);
glEnd();

//Upoer Boat
glColor3ub (228, 59, 38);
//glLineWidth(10);
glBegin(GL_POLYGON);
glVertex2d (25, 40);
glVertex2d (100, 40);
glVertex2d (100, 60);
glVertex2d (25, 40);
glEnd();

//Upoer Boat line
glColor3ub (0, 59, 38);
glLineWidth(10);
glBegin(GL_LINES);
glVertex2d (110, 60);
glVertex2d (110, 60);
glVertex2d (120, 60);
glVertex2d (120, 60);
glEnd();

//GROUND
glColor3ub (127, 159, 38);
//glLineWidth(10);
glBegin(GL_POLYGON);
glVertex2d (0, 60);
glVertex2d (1200, 300);
glVertex2d (1200, 400);
glVertex2d (0, 400);
glEnd();

//Left Home Up
glColor3ub (123, 60, 0);
//glLineWidth(10);
glBegin(GL_POLYGON);
glVertex2d (50, 250);
glVertex2d (225, 250);
glVertex2d (200, 300);
glVertex2d (75, 300);
glEnd();

//Left Home Shape
glColor3ub (255, 61, 0);
//glLineWidth(10);
glBegin(GL_POLYGON);
glVertex2d (75, 140);
glVertex2d (200, 140);
glVertex2d (200, 250);
glVertex2d (75, 250);
glEnd();

//Left Home Left Window
glColor3ub (255, 0 , 0);
//glLineWidth(10);
glBegin(GL_POLYGON);
glVertex2d (85, 200);
glVertex2d (100, 200);
glVertex2d (100, 250);
glVertex2d (85, 250);
glEnd();


/* don't wait!
* start processing buffered OpenGL routines
*/
glFlush ();
}
void init (void)
{
/* select clearing (background) color */
glClearColor (1.0, 1.0, 1.0, 1.0);
/* initialize viewing values */
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(0, 1200, 0, 750);
}
/*
* Declare initial window size, position, and display mode
* (single buffer and RGBA). Open window with "hello"
* in its title bar. Call initialization routines.
* Register callback function to display graphics.
* Enter main loop and process events.
*/
int main(int argc, char** argv)
{
glutInit(&argc, argv);
glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize (1200, 750);
glutInitWindowPosition (100, 100);
glutCreateWindow ("kowsar_201-15-14238");
init ();
glutDisplayFunc(display);
glutMainLoop();
return 0; /* ISO C requires main to return int. */
}

