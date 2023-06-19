#include <GL/gl.h>
#include <GL/glut.h>
void display(void)
{
    /* clear all pixels */
    glClear (GL_COLOR_BUFFER_BIT);
    /* draw white polygon (rectangle) with corners at
    * (0.25, 0.25, 0.0) and (0.75, 0.75, 0.0)
    *///Regtangle Draw code
    //Rec_1
    glColor3ub (0, 255, 0);
    glBegin(GL_POLYGON);
    glVertex2d (125, 125);
    glVertex2d (375, 125);
    glVertex2d (375, 375);
    glVertex2d (125, 375);
    glEnd();
    //Rec_2
    glColor3ub (255, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2d (250, 200);
    glVertex2d (300, 250);
    glVertex2d (250, 300);
    glVertex2d (200, 250);
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
    gluOrtho2D(0, 500, 0, 500);//Related with 'glutInitWindowSize'
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
    glutInitWindowPosition (100, 100);
    glutCreateWindow ("kowsar_201-15-14238");
    init ();
    glutDisplayFunc(display);
    glutMainLoop();

    return 0; /* ISO C requires main to return int. */
}


