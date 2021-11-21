#include<windows.h>
#include <GL/glu.h>
#include <GL/glut.h>
#include<math.h>

float n;
float bi;
int boat = 0;

void sun(void)
{
    float theta;
    glPushMatrix();
    glColor3f(1.0,0.0,0.0);
    glBegin(GL_POLYGON);
    for(int i=0;i<360;i++)
    {
        theta = i*3.142/180;
        glVertex2f(1.5*cos(theta),7+1.5*sin(theta));
    }
    glEnd();
    glPopMatrix();

}

void treeHead(float x, float y)
{
    float theta;
    glPushMatrix();
    glColor3f(0.123,0.63,0.0);
    glBegin(GL_POLYGON);
    for(int i=0;i<360;i++)
    {
        theta = i*3.142/180;
        glVertex2f(x+1.5*cos(theta),y+1.5*sin(theta));
    }
    glEnd();
    glPopMatrix();
}


void smallBoat(void)
{
    glPushMatrix();
    glBegin(GL_TRIANGLES);

    glColor3f(1.0,0.0,1.0);


    glVertex3f(-8.0+bi, 2.0, 0.0);
    glVertex3f(-6.0+bi, 2.0, 0.0);
    glVertex3f(-7.0+bi, 3.5, 0.0);

    glEnd();
    glPopMatrix();

    glPushMatrix();
    glBegin(GL_QUADS);

    glColor3f(0.0,0.0,1.0);

    glVertex3f(-8.0+bi, 0.9, 0.0);
    glVertex3f(-6.0+bi, 0.9, 0.0);
    glVertex3f(-5.0+bi,2.0, 0.0);
    glVertex3f(-9.0+bi, 2.0, 0.0);

    glEnd();
    glPopMatrix();
}

void redrawSmallBoat()
{	if(boat==0)
	{
		if(bi<9)
		{

			bi+=0.005;
			glutPostRedisplay();
		}
		else
		{	bi=bi-9;
		glutPostRedisplay();
		}
	}
}


void largeBoat(void)
{
    glPushMatrix();
    glBegin(GL_TRIANGLES);

    glColor3f(1.0,0.0,0.0);

    glVertex3f(-7.5+n, -1.0, 0.0);
    glVertex3f(-5.5+n, -1.0, 0.0);
    glVertex3f(-6.5+n, 0.5, 0.0);

    glEnd();
    glPopMatrix();

    glPushMatrix();
    glBegin(GL_QUADS);

    glColor3f(0.0, 0.6, 0.05);

    glVertex3f(-8.0+n, -3.0, 0.0);
    glVertex3f(-5.0+n, -3.0, 0.0);
    glVertex3f(-4.0+n,-1.0, 0.0);
    glVertex3f(-9.0+n, -1.0, 0.0);

    glEnd();
    glPopMatrix();
}

void redrawLargeBoat()
{	if(boat==0)
	{
		if(n<9)
		{

			n+=0.005;
			glutPostRedisplay();
		}
		else
		{	n=n-9;
		glutPostRedisplay();
		}
	}
}


void Tree(void)
{

    glPushMatrix();
    glBegin(GL_QUADS);

    glColor3f(0.60,0.40,0.12);

    glVertex3f(-7.0, -9.0, 0.0);
    glVertex3f(-6.0, -9.0, 0.0);
    glVertex3f(-6.0, -6.0, 0.0);
    glVertex3f(-7.0, -6.0, 0.0);

    glEnd();
    glPopMatrix();
    treeHead(-6.5,-6);


    glPushMatrix();
    glBegin(GL_QUADS);

    glColor3f(0.60,0.40,0.12);

    glVertex3f(-3.0, -9.0, 0.0);
    glVertex3f(-2.0, -9.0, 0.0);
    glVertex3f(-2.0, -6.0, 0.0);
    glVertex3f(-3.0, -6.0, 0.0);

    glEnd();
    glPopMatrix();
    treeHead(-2.5,-6);


    glPushMatrix();
    glBegin(GL_QUADS);

    glColor3f(0.60,0.40,0.12);

    glVertex3f(3.0, -9.0, 0.0);
    glVertex3f(2.0, -9.0, 0.0);
    glVertex3f(2.0, -6.0, 0.0);
    glVertex3f(3.0, -6.0, 0.0);

    glEnd();
    glPopMatrix();
    treeHead(2.5,-6);



    glPushMatrix();
    glBegin(GL_QUADS);

    glColor3f(0.60,0.40,0.12);

    glVertex3f(7.0, -9.0, 0.0);
    glVertex3f(6.0, -9.0, 0.0);
    glVertex3f(6.0, -6.0, 0.0);
    glVertex3f(7.0, -6.0, 0.0);

    glEnd();
    treeHead(6.5,-6);
    glPopMatrix();
}



void mountains(void)
{
    sun();
    glPushMatrix();
    glBegin(GL_TRIANGLES);

    glColor3f(0.60,0.40,0.12);

    glVertex3f(-9.0, 4.0, 0.0);
    glVertex3f(-4.5, 4.0, 0.0);
    glVertex3f(-6.75, 9.0, 0.0);

    glEnd();
    glPopMatrix();


    glPushMatrix();
    glBegin(GL_TRIANGLES);

    glColor3f(0.60,0.40,0.12);

    glVertex3f(-4.5, 4.0, 0.0);
    glVertex3f(0.0, 4.0, 0.0);
    glVertex3f(-2.25, 9.0, 0.0);

    glEnd();
    glPopMatrix();

    //sun();


    glPushMatrix();
    glBegin(GL_TRIANGLES);

    glColor3f(0.60,0.40,0.12);

    glVertex3f(0.0, 4.0, 0.0);
    glVertex3f(4.5, 4.0, 0.0);
    glVertex3f(2.25, 9.0, 0.0);

    glEnd();
    glPopMatrix();


    glPushMatrix();
    glBegin(GL_TRIANGLES);

    glColor3f(0.60,0.40,0.12);

    glVertex3f(4.5, 4.0, 0.0);
    glVertex3f(9.0, 4.0, 0.0);
    glVertex3f(6.75, 9.0, 0.0);

    glEnd();
    glPopMatrix();

}

void background_Colors(void)
{

    glClear (GL_COLOR_BUFFER_BIT); //Clear previous color buffers

    glPushMatrix();
    glBegin(GL_QUADS); //Begin drawing quad
    glColor3f(0.99,0.56,0.31);//Color of quad
    //Define verticess of quad
    glVertex3f(-9.0, 4.0, 1.0);
    glVertex3f(9.0, 4.0, 1.0);
    glVertex3f(9.0, 9.0, 1.0);
    glVertex3f(-9.0, 9.0, 1.0);
    glEnd();//End drawing quad
    glPopMatrix();


    mountains();



    glPushMatrix();
    glBegin(GL_QUADS); //Begin drawing quad
    glColor3f (0.52, 0.80, 0.92);//Color of quad
    //Define verticess of quad
    glVertex3f(-9.0, -4.0, 1.0);
    glVertex3f(9.0, -4.0, 1.0);
    glVertex3f(9.0, 4.0, 1.0);
    glVertex3f(-9.0, 4.0, 1.0);
    glEnd();//End drawing quad
    glPopMatrix();

    smallBoat();
    largeBoat();


    glPushMatrix();
    glBegin(GL_QUADS); //Begin drawing quad
    glColor3f (0.0, 1.0, 0.0);//Color of quad
    //Define verticess of quad
    glVertex3f(-9.0, -9.0, 1.0);
    glVertex3f(9.0, -9.0, 1.0);
    glVertex3f(9.0, -4.0, 1.0);
    glVertex3f(-9.0, -4.0, 1.0);
    glEnd();//End drawing quad
    glPopMatrix();

    Tree();

    glFlush();

}


void display(void)
{
    background_Colors();

    redrawSmallBoat();
    redrawLargeBoat();

}

void init (void)
{
    glClearColor (1.0, 1.0, 1.0, 1.0); //Background color
    glMatrixMode(GL_MODELVIEW); //Sets up the current model_view matrix
    glMatrixMode(GL_PROJECTION); //Sets up the current projection matrix
    glLoadIdentity(); //Loads the identity matrix
    glPushMatrix();
    glOrtho(-9.0, 9.0, -9.0, 9.0, -10.0, 10.0); //Boundary of window
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(600,600);
    glutInitWindowPosition(100,100);
    glutCreateWindow("BoatWithMountain");
    init();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
