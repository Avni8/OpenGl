#include<windows.h>//for window API
#include<GL/glut.h>//for using OpenGL function

void Disp()
{
    glClearColor(0.0,0.0,0.0,1);//to specify background color.RGB  R:0-1, G:0-1, B:0-1, opacity:0-1.
    glClear(GL_COLOR_BUFFER_BIT);//Assign background color to pixels inside the drawing window.
    //glPointSize(10.0); //To vary size of the pixel.

    glBegin(GL_POLYGON);//to specify graphical object to be drawn(GL_POINTS, GL_POLYGON, GL_LINES, GL_TRIANGLE etc.)
    glColor3f(0,1,0); //to specify drawing color R,G,B:0 to 1.
    glVertex3f(0, 0, 0);        //to draw vertex in 3d. x,y,z:-1 to 1.
    glVertex3f(-0.5, -0.6, 0.5);

    glColor3f(0,0,1);
    glVertex3f(0.5,0.5,0.5);
    glVertex3f(-0.4,-0.3,0.2);

    glEnd(); //end of object drawing.

    glFlush(); //for rendering.

}




int main(int counter, char ** argv)
{
    glutInit(&counter,argv);    //To initialize glut library(mandatory).

    glutInitWindowSize(400,500);//to specify height and width of drawing window,
                                //if it is not included default window size will be provided.

    glutInitWindowPosition(100,100);//to specify starting point of the drawing window.
    glutCreateWindow("First OpenGL Program");//to provide title of the drawing window.

    glutDisplayFunc(Disp); //Callback function to respond to user event. Responsible for calling user defined function.
                           //mandatory

    glutMainLoop();


}
