#include <GL/gl.h>
#include <GL/glut.h>
void display(void)
{
/* clear all pixels */
glClear (GL_COLOR_BUFFER_BIT);
/* draw white polygon (rectangle) with corners at
* (0.25, 0.25, 0.0) and (0.75, 0.75, 0.0)
*/

glColor3ub (255, 0, 0);
glBegin(GL_POLYGON);
glVertex2d (100, 100);
glVertex2d (400, 100);
glVertex2d (400, 400);
glVertex2d (100, 400);
glEnd();

glColor3ub (0, 255, 0);
glBegin(GL_POLYGON);
glVertex2d (10, 10);
glVertex2d (40, 10);
glVertex2d (40, 40);
glVertex2d (10, 40);
glEnd();
/* don't wait!
* start processing buffered OpenGL routines
*/
glFlush ();
}
void init (void)
{
/* select clearing (background) color */
glClearColor (0.0, 0.0, 1.0, 0.0);
/* initialize viewing values */
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(0, 500, 0, 500);
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
glutInitWindowSize (500, 500);
glutInitWindowPosition (00, 00);
glutCreateWindow ("Md.Kowsar (201-15-14238)");
init ();
glutDisplayFunc(display);
glutMainLoop();
return 0; /* ISO C requires main to return int. */
}

