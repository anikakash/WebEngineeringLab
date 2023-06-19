#include <GL/gl.h>
#include <GL/glut.h>

void display(void){
    /* clear all pixels */
    glClear (GL_COLOR_BUFFER_BIT);
    /* draw white polygon (rectangle) with corners at
    * (0.25, 0.25, 0.0) and (0.75, 0.75, 0.0)
    */
    ///Left part
    glColor3ub (255, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2d (450, 150);
    glVertex2d (650, 250);
    glVertex2d (650, 650);
    glVertex2d (450, 750);
    glEnd();

    ///Right part
    glColor3ub (255, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2d (450, 750);
    glVertex2d (250, 650);
    glVertex2d (250, 250);
    glVertex2d (450, 150);
    glEnd();

    /* don't wait!
    * start processing buffered OpenGL routines
    */
    glFlush ();
}

void init (void){
    /* select clearing (background) color */
    glClearColor (1.0, 1.0, 1.0, 1.0);
    /* initialize viewing values */
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0, 900, 0, 900);
}
/*
* Declare initial window size, position, and display mode
* (single buffer and RGBA). Open window with "hello"
* in its title bar. Call initialization routines.
* Register callback function to display graphics.
* Enter main loop and process events.
*/
int main(int argc, char** argv){
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (900, 900);
    glutInitWindowPosition (00, 00);
    glutCreateWindow ("Md.Kowsar_(201-15-14238)");
    init ();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0; /* ISO C requires main to return int. */
}

