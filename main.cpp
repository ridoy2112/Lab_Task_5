#include <GL/glut.h>
#include <stdio.h>
#include <GL/gl.h>

void init(void)
{
    glClearColor(0.0,0.0,0.0,0.0); //GLfloat red,green,blue,alpha initial value 0 alpha values used by glclear to clear the color buffers
    glMatrixMode(GL_PROJECTION);  // To specify which matrix is the current matrix & projection applies subsequent matrix to projecton matrix stack
    glLoadIdentity();
    glOrtho(0.0, 500.0, 0.0, 500.0, -1.0, 1.0);
}


void Draw()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(0.1, 0.1, 0.2) ;
    glBegin(GL_POLYGON);
    glVertex2i(20, 0);
    glVertex2i (340, 0);
    glVertex2i (340, 0);
    glVertex2i (340, 10);
    glVertex2i (340, 10);
    glVertex2i (20, 10);
    glVertex2i (20, 10);
    glVertex2i (20, 0);
    glEnd();

    glColor3f(0.1, 0.1, 0.2) ;
    glBegin(GL_POLYGON);
    glVertex2i(30, 10);
    glVertex2i (330, 10);
    glVertex2i (330, 10);
    glVertex2i (330, 20);
    glVertex2i (330, 20);
    glVertex2i (30, 20);
    glVertex2i (30, 20);
    glVertex2i (30, 10);
    glEnd();

    glColor3f(0.2, 0.1, 0.1) ;
    glBegin(GL_POLYGON);
    glVertex2i(40, 20);
    glVertex2i (320, 20);
    glVertex2i (320, 20);
    glVertex2i (320, 30);
    glVertex2i (320, 30);
    glVertex2i (40, 30);
    glVertex2i (40, 30);
    glVertex2i (40, 20);
    glEnd();

    glColor3f(0.1, 0.2, 0.1) ;
    glBegin(GL_POLYGON);
    glVertex2i(40, 30);
    glVertex2i (180, 62);
    glVertex2i (180, 62);
    glVertex2i (320, 30);
    glVertex2i (320, 30);
    glVertex2i (40, 30);
    glEnd();

    glColor3f(0.2, 0.1, 0.1) ;
    glBegin(GL_POLYGON);
    glVertex2i(43, 30);
    glVertex2i (317, 30);
    glVertex2i (317, 30);
    glVertex2i (180, 60);
    glVertex2i (180, 60);
    glVertex2i (43, 30);
    glEnd();

    glColor3f(0.1, 0.1, 0.2) ;
    glBegin(GL_POLYGON);
    glVertex2i(60, 30);
    glVertex2i (180, 102);
    glVertex2i (180, 102);
    glVertex2i (300, 30);
    glVertex2i (300, 30);
    glVertex2i (60, 30);
    glEnd();

    glColor3f(0.1, 0.2, 0.1) ;
    glBegin(GL_POLYGON);
    glVertex2i(62, 30);
    glVertex2i (180, 100);
    glVertex2i (180, 100);
    glVertex2i (298, 30);
    glVertex2i (298, 30);
    glVertex2i (62, 30);
    glEnd();

    glColor3f(0.2, 0.1, 0.1) ;
    glBegin(GL_POLYGON);
    glVertex2i(80, 30);
    glVertex2i (180, 152);
    glVertex2i (180, 152);
    glVertex2i (280, 30);
    glVertex2i (280, 30);
    glVertex2i (80, 30);
    glEnd();

    glColor3f(0.1, 0.1, 0.2) ;
    glBegin(GL_POLYGON);
    glVertex2i(81, 30);
    glVertex2i (180, 150);
    glVertex2i (180, 150);
    glVertex2i (279, 30);
    glVertex2i (279, 30);
    glVertex2i (81, 30);
    glEnd();


    glColor3f(0.1, 0.2, 0.1) ;
    glBegin(GL_POLYGON);
    glVertex2i(100, 30);
    glVertex2i (180, 202);
    glVertex2i (180, 202);
    glVertex2i (260, 30);
    glVertex2i (260, 30);
    glVertex2i (100, 30);
    glEnd();

    glColor3f(0.2, 0.1, 0.1) ;
    glBegin(GL_POLYGON);
    glVertex2i(101, 30);
    glVertex2i (180, 200);
    glVertex2i (180, 200);
    glVertex2i (259, 30);
    glVertex2i (259, 30);
    glVertex2i (101, 30);
    glEnd();

    glColor3f(0.1, 0.1, 0.2) ;
    glBegin(GL_POLYGON);
    glVertex2i(120, 30);
    glVertex2i (180, 252);
    glVertex2i (180, 252);
    glVertex2i (240, 30);
    glVertex2i (240, 30);
    glVertex2i (120, 30);
    glEnd();

    glColor3f(0.2, 0.1, 0.1) ;
    glBegin(GL_POLYGON);
    glVertex2i(121, 30);
    glVertex2i (180, 250);
    glVertex2i (180, 250);
    glVertex2i (239, 30);
    glVertex2i (239, 30);
    glVertex2i (121, 30);
    glEnd();

    glColor3f(0.1, 0.1, 0.2) ;
    glBegin(GL_POLYGON);
    glVertex2i(140, 30);
    glVertex2i (180, 302);
    glVertex2i (180, 302);
    glVertex2i (220, 30);
    glVertex2i (220, 30);
    glVertex2i (140, 30);
    glEnd();


    glColor3f(0.2, 0.1, 0.1) ;
    glBegin(GL_POLYGON);
    glVertex2i(141, 30);
    glVertex2i (180, 300);
    glVertex2i (180, 300);
    glVertex2i (219, 30);
    glVertex2i (219, 30);
    glVertex2i (141, 30);
    glEnd();

    glColor3f(1.1, 1.1, 1.2) ;
    glBegin(GL_POLYGON);
    glVertex2i(160, 30);
    glVertex2i (180, 351);
    glVertex2i (180, 351);
    glVertex2i (200, 30);
    glVertex2i (200, 30);
    glVertex2i (160, 30);
    glEnd();

    glColor3f(0.1, 0.2, 0.1) ;
    glBegin(GL_POLYGON);
    glVertex2i(161, 30);
    glVertex2i (180, 350);
    glVertex2i (180, 350);
    glVertex2i (199, 30);
    glVertex2i (199, 30);
    glVertex2i (161, 30);
    glEnd();

    glutSwapBuffers();
}

int main(int argc,char **argv)
{

    glutInit(&argc,argv);
    glutInitDisplayMode ( GLUT_RGB | GLUT_DOUBLE );
    glutInitWindowPosition(0,0);
    glutInitWindowSize(500,500);
    glutCreateWindow("Lab Final");
    init();
    glutDisplayFunc(Draw);
    glutMainLoop();
    return 0;
}
