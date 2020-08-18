

#include<windows.h>
#include<GL/glut.h>

void PolygonDraw()
{
     glClearColor(0.3,0.2,0.4,1); //background color
      glClear(GL_COLOR_BUFFER_BIT); //clear the frame buffer with specified background color.

      glBegin(GL_TRIANGLE_FAN);

          glVertex2f(0,0);
          glColor3f(0.6,0.4,0);
          glVertex2f(0.4,0.8);

          glColor3f(0,0.8,0);
          glVertex2f(0.6,0.6);

          glColor3f(0,0,1);
          glVertex2f(0.8,0.4);

          glColor3f(1,0,0);
          glVertex2f(0.9,0.2);

     glEnd();


     glFlush();

}

int main(int c,char ** v)
{
    glutInit(&c,v);

    glutInitWindowSize(700,700);
    glutInitWindowPosition(10,10);
    glutCreateWindow("POLYGON");

    glutDisplayFunc(PolygonDraw);

    glutMainLoop();

    return 0;

}
