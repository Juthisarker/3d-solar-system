
#include <iostream>
#include <string>
#include <math.h>
#include<Windows.h>
using namespace std;
#include <GL/gl.h>
#include <GL/glut.h>
#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/GLAUX.h>

double merc = 0.0;
double ven = 0.0;
double ear = 0.0;
double mars = 0.0;
double ju = 0.0;



void Orbits()
{
	glColor3f(.5, .5, .5);

	const int segments = 72;
	int segangle = int(360.0/segments);
	const float DEG2RAD = 3.14159/180;
	float radius = 4.0;
	glBegin(GL_LINE_LOOP);
	for (int i=0; i < 360; i += segangle)
	{
		float deginRad = i*DEG2RAD;
		glVertex3f(cos(deginRad)*radius, 0.0, sin(deginRad)*radius);
	}
 	glEnd();
	radius = 6.0;
	glBegin(GL_LINE_LOOP);
	for (int i=0; i < 360; i += segangle)
	{
		float deginRad = i*DEG2RAD;
		glVertex3f(cos(deginRad)*radius, 0.0, sin(deginRad)*radius);
	}
 	glEnd();
	radius = 9.0;
	glBegin(GL_LINE_LOOP);
	for (int i=0; i < 360; i += segangle)
	{
		float deginRad = i*DEG2RAD;
		glVertex3f(cos(deginRad)*radius, 0.0, sin(deginRad)*radius);
	}
 	glEnd();
	radius = 12.0;
	glBegin(GL_LINE_LOOP);
	for (int i=0; i < 360; i += segangle)
	{
		float deginRad = i*DEG2RAD;
		glVertex3f(cos(deginRad)*radius, 0.0, sin(deginRad)*radius);
	}
 	glEnd();
 	radius = 15.00;
	glBegin(GL_LINE_LOOP);
	for (int i=0; i < 360; i += segangle)
	{
		float deginRad = i*DEG2RAD;
		glVertex3f(cos(deginRad)*radius, 0.0, sin(deginRad)*radius);
	}
 	glEnd();
}
double view_height = 8.0;
void display(void)
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	glMatrixMode(GL_MODELVIEW);
		glLoadIdentity();

	gluLookAt(
		0.0, view_height, 20.0,
		0.0, 1.0, 1.0,
        0.0, 4.0, 0.0
	);
	glPushMatrix();

	glLineWidth(1.0);
	glTranslatef(-3.0, 3.0, 1.50);
	glPushMatrix();

	Orbits();


	glColor3f(1.0, 1.0, 0.0);
	glutSolidSphere(1.0, 20, 20);


	glColor3f(0.8, 0.2, 0.2);
	glRotatef(merc, 0.0, 1.0, 0.0);
	glTranslatef(4.0, 0.0, 0.0);
	glutSolidSphere(0.3, 20, 20);
	glPopMatrix();


	glPushMatrix();
	glColor3f(0.7, 0.6, 0.1);
	glRotatef(ven, 0.0, 1.0, 0.0);
	glTranslatef(6.0, 0.0, 0.0);
	glutSolidSphere(0.4, 20, 20);
	glPopMatrix();


	glPushMatrix();
	glColor3f(0.2, 0.6, 1.0);
	glRotatef(ear, 0.0, 1.0, 0.0);
	glTranslatef(9.0, 0.0, 0.0);
	glutSolidSphere(0.5, 20, 20);
	glPopMatrix();


	glPushMatrix();
	glColor3f(1.0, 0.2, 0.2);
	glRotatef(mars, 0.0, 1.0, 0.0);
	glTranslatef(12.0, 0.0, 0.0);
	glutSolidSphere(0.3, 20, 20);
    glPopMatrix();


	glPushMatrix();
	glColor3f(.870, 0.872, 0.872);
	glRotatef(ju, 0.0, 1.0, 0.0);
	glTranslatef(15.0, 0.0, 0.0);
	glutSolidSphere(0.9, 50, 50);

	glPopMatrix();
	//glPopMatrix();




	glPushMatrix();
	glColor3f(1.0f, 1.0f, 1.0f);
	glPointSize(1.5);
glBegin(GL_POINTS);
        glVertex3d(2.0, -1.0,6.0);
        glVertex3d(5.0, 5.0,8.0);
        glVertex3d(5.0, 6.0,8.0);
        glVertex3d(0.0, 0.0,8.0);

        glVertex3d(0.0, 5.0,8);
        glVertex3d(8.0, 9.0,8);
        glVertex3d(5.0, 2.0,8);
          glVertex3d(7.0, 2.0,8);
        glVertex3d(6.9, 4.0,8);
        glVertex3d(2.1, 3.55,8);
        glVertex3d(5.0, 4.0,8);
        glVertex3d(4.0, 2.0,8);
         glVertex3d(5.0, 5.0,8);
        glVertex3d(1.0, 9.0,8);
        glVertex3d(1.0, 2.0,8);
          glVertex3d(3.0, 3.0,8);

 glVertex3d(8.0, 8.0,8);
        glVertex3d(8.0, 9.0,8);
        glVertex3d(7.0, 7.0,8);
          glVertex3d(7.0, 2.0,8);
        glVertex3d(6.9, 4.0,8);
        glVertex3d(7.1, 7.55,8);
        glVertex3d(9.0, 8.0,8);
        glVertex3d(7.0, 8.0,8);
         glVertex3d(7.0, 9.0,8);
        glVertex3d(8.0, 9.0,8);
        glVertex3d(7.0, 9.0,8);
          glVertex3d(7.0, 8.60,8);





           glVertex3d(5.0, 5.0,8);
          glVertex3d(7.0, 5.0,8);
        glVertex3d(6.9, 5.0,8);
        glVertex3d(2.1, 4.55,8);
        glVertex3d(5.0, 4.0,8);
        glVertex3d(4.0, 3.0,8);
         glVertex3d(5.0, 5.0,8);
        glVertex3d(1.0, 6.0,8);
        glVertex3d(1.0, 6.0,8);
          glVertex3d(3.0, 6.0,8);






          glVertex3d(1.1, 3.55,8);

         glVertex3d(2.02, 0.02,8);
        glVertex3d(3.0, 3.0,8);
        glVertex3d(2.66, 2.44,8);
          glVertex3d(8.90, 3.10,8);
        glVertex3d(6.19, 4.22,8);
        glVertex3d(2.1, 4.55,8);


          glVertex3d(4.1, 3.55,8);
        glVertex3d(2.0, 0.0,8);

        glVertex3d(3.0, 2.0,8);
        glVertex3d(4.66, 3.44,8);
          glVertex3d(1.90, 5.10,8);


          glVertex3d(1.1, 1.55,8);
        glVertex3d(2.0,- 2.0,8);

         glVertex3d(2.02, -5.02,8);
        glVertex3d(3.0, 1.0,8);
        glVertex3d(4.66, 1.44,8);
          glVertex3d(1.90, 3.10,8);
        glVertex3d(3.19, 14.22,8);
        glVertex3d(2.1, 1.55,8);


          glVertex3d(4.1, 1.55,8);
        glVertex3d(2.0, 4.0,8);
        glVertex3d(2.01, -5.01,8);
         glVertex3d(2.02, 1.92,8);
        glVertex3d(3.0, 4.0,8);
        glVertex3d(4.66, 3.44,8);
          glVertex3d(1.90, 1.10,8);

        glVertex3d(2.19, 3.22,8);

 glVertex3d(0.0, 5.0,8);
        glVertex3d(5.67, 5.34,8);
        glVertex3d(5.09, -3.20,8);
        glVertex3d(0.99, 1.220,8);
         glVertex3d(1.088, 1.70,8);
        glVertex3d(1.67, 1.78,8);
        glVertex3d(5.98, 1.50,8);
          glVertex3d(1.33, 3.89,8);

            glVertex3d(1.67, 5.34,8);
        glVertex3d(1.09, 4.20,8);
        glVertex3d(1.99, -0.220,8);
         glVertex3d(4.088, 1.70,8);
        glVertex3d(1.67, 1.78,8);
        glVertex3d(1.92, 2.50,8);
          glVertex3d(1.39, 3.89,8);
          glVertex3d(1.65, 1.78,8);
        glVertex3d(1.96, 2.50,8);
          glVertex3d(1.36, 3.89,8);

        glVertex3d(6.19, 4.22,8);
        glVertex3d(2.1, 1.55,8);


         glVertex3d(1.39, 3.89,8);
          glVertex3d(1.65, -1.78,8);
        glVertex3d(1.96, 2.50,8);
          glVertex3d(1.36,- 3.89,8);

        glVertex3d(1.19,- 4.22,8);
        glVertex3d(2.1,- 4.55,8);




          glVertex3d(2.1,- 1.55,8);
        glVertex3d(2.0, -1.0,8);
        glVertex3d(2.01, 4.01,8);
         glVertex3d(2.02, -1.02,8);
        glVertex3d(3.0, 1.0,8);
        glVertex3d(2.66, 1.44,8);
          glVertex3d(1.90, 3.10,8);
        glVertex3d(6.19, 1.22,8);
        glVertex3d(2.1, 1.55,8);


          glVertex3d(4.1, 1.55,8);
        glVertex3d(2.0, 4.0,8);
        glVertex3d(2.01, 5.01,8);
         glVertex3d(2.02, 4.92,8);
        glVertex3d(3.0, 2.0,8);
        glVertex3d(4.66, 1.44,8);
          glVertex3d(3.90, 0.10,8);

        glVertex3d(1.19, 5.22,8);

 glVertex3d(0.0, 4.0,8);
        glVertex3d(-2.67, -3.34,8);
        glVertex3d(-3.09, -4.20,8);
        glVertex3d(-0.99, -0.220,8);
         glVertex3d(4.088, -5.70,8);
        glVertex3d(3.67, -4.78,8);
        glVertex3d(2.98, -2.50,8);
          glVertex3d(3.33, -3.89,8);

            glVertex3d(0.67, -3.34,8);
        glVertex3d(1.09, 4.20,8);
        glVertex3d(3.99, -0.220,8);
         glVertex3d(14.088, -15.70,8);
        glVertex3d(5.67, -19.78,8);
        glVertex3d(5.92, 2.50,8);
          glVertex3d(3.39, 3.89,8);
          glVertex3d(4.65, 2.78,8);
        glVertex3d(7.96, 2.50,8);
          glVertex3d(8.36, 3.89,8);

 glVertex3d(4.1, -1.55,8);
        glVertex3d(3.0,2.0,8);
        glVertex3d(2.01,-3.01,8);
         glVertex3d(2.02, 6.92,8);
        glVertex3d(3.0,4.0,8);
        glVertex3d(4.66, -3.44,8);
          glVertex3d(8.90, 1.10,8);

        glVertex3d(-6.19, 8.22,8);
         glVertex3d(-1.67, 5.34,8);
        glVertex3d(-2.09, 9.20,8);
        glVertex3d(-3.99, 10.220,8);
         glVertex3d(-1.088, 15.70,8);
        glVertex3d(-4.67, 19.78,8);
        glVertex3d(-5.98, 12.50,8);
          glVertex3d(-7.33, 13.89,8);
 glVertex3d(-2.19, 19.20,8);
        glVertex3d(-3.29, 18.220,8);
         glVertex3d(-1.688, 19.70,8);
        glVertex3d(-4.67, 17.78,8);
        glVertex3d(-5.98, 18.50,8);
          glVertex3d(-7.33, -19.89,8);

glVertex3d(-6.9, 9.20,8);
        glVertex3d(-4.99, -10.220,8);
         glVertex3d(-3.088,- 18.70,8);
        glVertex3d(-4.97, -17.98,8);
        glVertex3d(-6.98, -15.59,8);
          glVertex3d(-5.33, -13.20,8);
 glVertex3d(-2.19, -19.20,8);
        glVertex3d(-3.29, -16.220,8);
         glVertex3d(-7.688, -17.70,8);
        glVertex3d(-4.67, -18.68,8);
        glVertex3d(-5.78, -15.980,8);
          glVertex3d(-6.43,- 16.69,8);

           glVertex3d(-6.19, -0.22,8);
         glVertex3d(-1.67,- 1.34,8);
        glVertex3d(-2.09, -1.20,8);
        glVertex3d(-3.99,- 1.220,8);
         glVertex3d(-1.088, -1.70,8);
        glVertex3d(-4.67, -2.78,8);
        glVertex3d(-5.98, -1.50,8);
          glVertex3d(-5.33, -0.89,8);
 glVertex3d(-2.19, 5.20,8);
        glVertex3d(-3.29, -5.220,8);
         glVertex3d(-1.688, -6.70,8);
        glVertex3d(-4.67, -5.78,8);
        glVertex3d(-5.98, -4.50,8);
          glVertex3d(-7.33, -3.89,8);

glVertex3d(-6.9, 7.20,8);
        glVertex3d(-4.99, -2.220,8);
         glVertex3d(-3.088, -3.70,8);
        glVertex3d(-4.97, -6.98,8);
        glVertex3d(-5.98, -1.59,8);
          glVertex3d(-5.33, -3.20,8);
 glVertex3d(-2.19, 1.20,8);
        glVertex3d(-3.29, -4.98,8);
         glVertex3d(-7.688, -4.50,8);
        glVertex3d(-4.67, -3.68,8);
        glVertex3d(-5.78, -2.980,8);
          glVertex3d(-6.43, -2.69,8);

          glVertex3d(-6.9, 0.20,8);
        glVertex3d(-7.99, 0.220,8);
         glVertex3d(-5.088, 1.70,8);
        glVertex3d(-6.97, 5.98,8);
        glVertex3d(-6.98, 5.59,8);
          glVertex3d(-6.33, 3.20,8);
 glVertex3d(-1.19, 1.20,8);
        glVertex3d(-2.29, -3.98,8);
         glVertex3d(-1.688, -7.50,8);
        glVertex3d(-4.67, -3.68,8);
        glVertex3d(-6.78, -4.980,8);
          glVertex3d(-6.43, -6.69,8);


             glVertex3d(-2.9, 1.20,8);
        glVertex3d(-5.99, 1.220,8);
         glVertex3d(-3.088, 1.70,8);
        glVertex3d(-4.97, 4.98,8);
        glVertex3d(-3.98, 3.59,8);
          glVertex3d(-2.33, 2.20,8);


             glVertex3d(-0.9, 5.20,8);
        glVertex3d(1.99, 4.220,8);
         glVertex3d(-0.088, 4.70,8);
        glVertex3d(-1.97, 5.98,8);
        glVertex3d(-2.98, 1.59,8);
          glVertex3d(-3.33, 4.20,8);

              glVertex3d(-4.9, 5.20,8);
        glVertex3d(-5.99, 1.220,8);
         glVertex3d(-4.088, 2.70,8);
        glVertex3d(-1.97, 3.98,8);
        glVertex3d(-3.98, 5.59,8);
          glVertex3d(-2.33, 1.20,8);


             glVertex3d(-1.9, 2.20,8);
        glVertex3d(6.99, 1.220,8);
         glVertex3d(1.088, 2.70,8);
        glVertex3d(.97, 3.98,8);
        glVertex3d(3.98, 4.59,8);
          glVertex3d(-2.33, 5.20,8);

        glEnd();
        	glPushMatrix();
glBegin(GL_POLYGON);
		glColor3f(0.0,0.0,0.0);
		glVertex3f(4.5,11.5,8.0);
		glColor3f(0.0,0.0,0.0);
		glVertex3f(4.5,25.5,8.0);
		glColor3f(0.35,0.35,0.35);
		//glColor3f(0.42,0.42,0.42);
		glVertex3f(25.5,25.5,8.0);
		//glColor3f(0.42,0.42,0.42);
		glColor3f(0.0,0.0,0.0);
		glVertex3f(25.5,11.5,8.0);

	glEnd();
glPopMatrix();

glPopMatrix();
glPopMatrix();
	glFlush();
	glutSwapBuffers();
}

void reshape (int w, int h)
{
	glViewport(0, 0, w, h);
	float aspect_ratio = ((float) w)/h;

	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluPerspective(60.0, aspect_ratio, 0.0, 500.0);
 display();
 }


bool mouse_tracking = false;
int prev_y;

void mouse(int button, int state, int x, int y)
{
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		prev_y = y;
		mouse_tracking = true;
	}
	else if (button == GLUT_LEFT_BUTTON && state == GLUT_UP)
		mouse_tracking = false;
	else if (button == GLUT_RIGHT_BUTTON && state == GLUT_UP)
		exit(EXIT_SUCCESS);
}

void motion(int x, int y)
{
	if (mouse_tracking)
	{
		view_height += (y - prev_y)/50.0;
	}
	prev_y = y;
}


void idle()
{
	merc += 9.0;
	ven += 6.0;
	ear += 2.0;
	mars += 1.0;
    ju +=0.8;
	glutPostRedisplay();
	Sleep(33);
}



int main(int argc, char **argv)
{

	glutInit(&argc, argv);
	glutInitDisplayMode (GLUT_RGB | GLUT_DOUBLE);
   glutInitWindowSize (1000, 500);
	glutInitWindowPosition (300, 100);
	glutCreateWindow (argv[0]);

//	printGLversion();
	glClearColor(0.0, 0.0, 0.0, 0.0);
	glClearDepth(1.0);
    glShadeModel(GL_SMOOTH);
	glutDisplayFunc(display);
	glutReshapeFunc(reshape);
//	glutKeyboardFunc(keyboard);
		glutMouseFunc(mouse);
        glutMotionFunc(motion);
        	glutIdleFunc(idle);


	glutMainLoop();
	return 0;
}
