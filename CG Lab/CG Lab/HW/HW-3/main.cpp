#include <GL/gl.h>
#include <GL/glut.h>
void display(void)
{
/* clear all pixels */
glClear (GL_COLOR_BUFFER_BIT);
/* draw white polygon (rectangle) with corners at
* (0.25, 0.25, 0.0) and (0.75, 0.75, 0.0)
*/

//Sky
glColor3ub (23, 164, 254);
glBegin(GL_POLYGON);
glVertex2d (0, 195);
glVertex2d (700, 195);
glVertex2d (700, 340);
glVertex2d (0, 340);
glEnd();

//Left Hill-1
glColor3ub (202, 105, 50);
glBegin(GL_POLYGON);
glVertex2d (-50, 195);
glVertex2d (80, 195);
glVertex2d (34.5, 233);
glVertex2d (-50, 195);
glEnd();

//Left Hill-2
glColor3ub (202, 105, 50);
glBegin(GL_POLYGON);
glVertex2d (34.5, 195);
glVertex2d (173, 195);
glVertex2d (119, 229);
glVertex2d (34.5, 195);
glEnd();

//Left Hill-3
glColor3ub (202, 105, 50);
glBegin(GL_POLYGON);
glVertex2d (132, 195);
glVertex2d (311, 195);
glVertex2d (212, 242);
glVertex2d (132, 195);
glEnd();

//Left Hill-4
glColor3ub (202, 105, 50);
glBegin(GL_POLYGON);
glVertex2d (265, 195);
glVertex2d (403, 195);
glVertex2d (351, 251);
glVertex2d (265, 195);
glEnd();

//Left Hill-5
glColor3ub (202, 105, 50);
glBegin(GL_POLYGON);
glVertex2d (378, 195);
glVertex2d (533, 195);
glVertex2d (471, 242);
glVertex2d (378, 195);
glEnd();

//Left Hill-6
glColor3ub (202, 105, 50);
glBegin(GL_POLYGON);
glVertex2d (500, 195);
glVertex2d (615, 195);
glVertex2d (571, 233);
glVertex2d (500, 195);
glEnd();

//Left Hill-7
glColor3ub (202, 105, 50);
glBegin(GL_POLYGON);
glVertex2d (588, 195);
glVertex2d (785, 195);
glVertex2d (646, 235);
glVertex2d (588, 195);
glEnd();

//GROUND
glColor3ub (128, 159, 39);
glBegin(GL_POLYGON);
glVertex2d (0, 68);
glVertex2d (700, 140);
glVertex2d (700, 195);
glVertex2d (0, 195);
glEnd();

//Upper part of the Left Back Cottage
glColor3ub (122, 60, 1);
glBegin(GL_POLYGON);
glVertex2d (106.5, 176);
glVertex2d (229, 176);
glVertex2d (216, 203);
glVertex2d (118, 203);
glEnd();

//Lower part of the Left Back Cottage
glColor3ub (255, 65, 0);
glBegin(GL_POLYGON);
glVertex2d (118, 128);
glVertex2d (216, 128);
glVertex2d (216, 176);
glVertex2d (118, 176);
glEnd();

//Left Window of the Left Back Cottage
glColor3ub (0, 84 , 97);
glBegin(GL_POLYGON);
glVertex2d (118, 153.5);
glVertex2d (145.5, 153.5);
glVertex2d (145.5, 173);
glVertex2d (118, 173);
glEnd();

//Right Window of the Left Back Cottage
glColor3ub (0, 84 , 97);
glBegin(GL_POLYGON);
glVertex2d (185, 153.5);
glVertex2d (209, 153.5);
glVertex2d (209, 173);
glVertex2d (185, 173);
glEnd();

//Door of the Left Cottage
glColor3ub (0, 84 , 97);
glBegin(GL_POLYGON);
glVertex2d (150, 128);
glVertex2d (180, 128);
glVertex2d (180, 172);
glVertex2d (150, 172);
glEnd();

//Left Side Left Tree Upper Part-1
glColor3ub (0, 112 , 0);
glBegin(GL_POLYGON);
glVertex2d (171, 123);
glVertex2d (208, 123);
glVertex2d (189.5, 160);
glVertex2d (171, 123);
glEnd();

//Left Side Left Tree Upper Part-2
glColor3ub (0, 112 , 0);
glBegin(GL_POLYGON);
glVertex2d (170, 129.5);
glVertex2d (208, 129.5);
glVertex2d (189.5, 160);
glVertex2d (170, 129.5);
glEnd();

//Left Side Left Tree Upper Part-3
glColor3ub (0, 112 , 0);
glBegin(GL_POLYGON);
glVertex2d (170, 137.5);
glVertex2d (208, 137.5);
glVertex2d (189.5, 160);
glVertex2d (170, 137.5);
glEnd();

//Left Side Left Tree Lower Part
glColor3ub (110, 60 , 0);
glBegin(GL_POLYGON);
glVertex2d (189, 111);
glVertex2d (191, 111);
glVertex2d (191, 127.5);
glVertex2d (189, 127.5);
glEnd();

//Left Side Middle Tree Lower Part
glColor3ub (120, 59, 2);
glBegin(GL_POLYGON);
glVertex2d (256, 108);
glVertex2d (260, 108);
glVertex2d (260, 138);
glVertex2d (256, 138);
glEnd();

//Left Side Middle Tree Upper Part-1
glColor3ub (0, 112 , 0);
glBegin(GL_POLYGON);
glVertex2d (225, 138);
glVertex2d (292, 138);
glVertex2d (258, 210);
glVertex2d (225, 138);
glEnd();

//Left Side Middle Tree Upper Part-2
glColor3ub (0, 112 , 0);
glBegin(GL_POLYGON);
glVertex2d (224, 153);
glVertex2d (293, 153);
glVertex2d (258, 210);
glVertex2d (224, 153);
glEnd();

//Left Side Middle Tree Upper Part-3
glColor3ub (0, 112 , 0);
glBegin(GL_POLYGON);
glVertex2d (224, 169);
glVertex2d (290, 169);
glVertex2d (258, 210);
glVertex2d (224, 169);
glEnd();

//Left Side Right Tree Lower Part
glColor3ub (112, 86 , 12);
glBegin(GL_POLYGON);
glVertex2d (325, 124);
glVertex2d (329, 124);
glVertex2d (329, 160);
glVertex2d (325, 160);
glEnd();

//Left Side Right Tree Upper Part-1
glColor3ub (0, 112 , 0);
glBegin(GL_POLYGON);
glVertex2d (289, 160);
glVertex2d (367, 160);
glVertex2d (327, 230);
glVertex2d (289, 160);
glEnd();

//Left Side Right Tree Upper Part-2
glColor3ub (0, 112 , 0);
glBegin(GL_POLYGON);
glVertex2d (289, 176.5);
glVertex2d (368, 176.5);
glVertex2d (327, 230);
glVertex2d (289, 176.5);
glEnd();

//Left Side Right Tree Upper Part-3
glColor3ub (0, 112 , 0);
glBegin(GL_POLYGON);
glVertex2d (289, 190);
glVertex2d (369, 190);
glVertex2d (327, 230);
glVertex2d (289, 190);
glEnd();

//Upper part of the Left Front Cottage
glColor3ub (123, 60, 0);
glBegin(GL_POLYGON);
glVertex2d (18, 153.5);
glVertex2d (142, 153.5);
glVertex2d (128, 177);
glVertex2d (33, 177);
glEnd();

//Lower part of the Left Front Cottage
glColor3ub (255, 61, 0);
glBegin(GL_POLYGON);
glVertex2d (33, 103);
glVertex2d (128, 103);
glVertex2d (128, 153.5);
glVertex2d (33, 153.5);
glEnd();

//Left Window of the Left Front Cottage
glColor3ub (0, 84 , 97);
glBegin(GL_POLYGON);
glVertex2d (37.5, 124.5);
glVertex2d (60, 124.5);
glVertex2d (60, 145);
glVertex2d (37.5, 145);
glEnd();

//Right Window of the Left Front Cottage
glColor3ub (0, 84 , 97);
glBegin(GL_POLYGON);
glVertex2d (98, 124.5);
glVertex2d (121, 124.5);
glVertex2d (121, 145);
glVertex2d (98, 145);
glEnd();

//Door of the Left Front Cottage
glColor3ub (0, 84 , 97);
glBegin(GL_POLYGON);
glVertex2d (66, 103);
glVertex2d (93, 103);
glVertex2d (93, 144);
glVertex2d (66, 144);
glEnd();

//Upper part of the Right Cottage
glColor3ub (122, 59, 5);
glBegin(GL_POLYGON);
glVertex2d (395, 186);
glVertex2d (515, 186);
glVertex2d (502, 208);
glVertex2d (407, 208);
glEnd();

//Lower part of the Right Cottage
glColor3ub (0, 176, 127);
glBegin(GL_POLYGON);
glVertex2d (407, 120);
glVertex2d (502, 120);
glVertex2d (502, 186);
glVertex2d (407, 186);
glEnd();

//Left Window of the Right Cottage
glColor3ub (0, 86 , 96);
glBegin(GL_POLYGON);
glVertex2d (411, 163);
glVertex2d (433.5, 163);
glVertex2d (433.5, 180);
glVertex2d (411, 180);
glEnd();

//Right Window of the Right Cottage
glColor3ub (0, 86 , 96);
glBegin(GL_POLYGON);
glVertex2d (476, 163);
glVertex2d (498.5, 163);
glVertex2d (498.5, 180);
glVertex2d (476, 180);
glEnd();

//Door of the Right Cottage
glColor3ub (0, 84 , 97);
glBegin(GL_POLYGON);
glVertex2d (442, 120);
glVertex2d (467.5, 120);
glVertex2d (467.5, 180);
glVertex2d (442, 180);
glEnd();

//Right Side Left Tree Lower Part
glColor3ub (112, 86 , 12);
glBegin(GL_POLYGON);
glVertex2d (532, 164);
glVertex2d (535, 164);
glVertex2d (535, 181.5);
glVertex2d (532, 181.5);
glEnd();

//Right Side Left Tree Upper Part-1
glColor3ub (0, 112 , 0);
glBegin(GL_POLYGON);
glVertex2d (513, 181.5);
glVertex2d (553, 181.5);
glVertex2d (533, 250);
glVertex2d (513, 181.5);
glEnd();

//Right Side Middle Tree Lower Part
glColor3ub (112, 86 , 12);
glBegin(GL_POLYGON);
glVertex2d (594, 164);
glVertex2d (597, 164);
glVertex2d (597, 181.5);
glVertex2d (594, 181.5);
glEnd();

//Right Side Middle Tree Upper Part-1
glColor3ub (0, 112 , 0);
glBegin(GL_POLYGON);
glVertex2d (575, 181.5);
glVertex2d (615, 181.5);
glVertex2d (595, 250);
glVertex2d (575, 181.5);
glEnd();

//Right Side Right Tree Lower Part
glColor3ub (112, 86 , 12);
glBegin(GL_POLYGON);
glVertex2d (655, 164);
glVertex2d (658, 164);
glVertex2d (658, 181.5);
glVertex2d (655, 181.5);
glEnd();

//Right Side Right Tree Upper Part-1
glColor3ub (0, 112 , 0);
glBegin(GL_POLYGON);
glVertex2d (636, 181.5);
glVertex2d (678, 181.5);
glVertex2d (656.5, 250);
glVertex2d (636, 181.5);
glEnd();

//River
glColor3ub (74, 129, 255);
glBegin(GL_POLYGON);
glVertex2d (0, 0);
glVertex2d (700, 0);
glVertex2d (700, 140);
glVertex2d (0, 68);
glEnd();

//Boat
glColor3ub (4, 8, 160);
glBegin(GL_POLYGON);
glVertex2d (53, 2);
glVertex2d (174, 2);
glVertex2d (190, 24);
glVertex2d (36, 24);
glEnd();

//Sail of the Boat
glColor3ub (228, 58, 43);
glBegin(GL_POLYGON);
glVertex2d (22, 24.5);
glVertex2d (111, 24.5);
glVertex2d (111, 59);
glVertex2d (22, 24.5);
glEnd();

//Left Pole of the Boat
glColor3ub (40, 92, 110);
glBegin(GL_POLYGON);
glVertex2d (124, 24);
glVertex2d (126, 24);
glVertex2d (126, 59);
glVertex2d (124, 59);
glEnd();

//Right Pole of the Boat
glColor3ub (40, 92, 110);
glBegin(GL_POLYGON);
glVertex2d (140, 24);
glVertex2d (142, 24);
glVertex2d (142, 59);
glVertex2d (140, 59);
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
gluOrtho2D(0, 700, 0, 340);
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
glutInitWindowSize (700, 340);
glutInitWindowPosition (100, 100);
glutCreateWindow ("kowsar_201-15-14238");
init ();
glutDisplayFunc(display);
glutMainLoop();
return 0; /* ISO C requires main to return int. */
}

