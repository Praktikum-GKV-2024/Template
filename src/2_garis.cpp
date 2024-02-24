#define FREEGLUT_STATIC
#include <GL/freeglut.h> 

void garis(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    glLineWidth(2.0f);

    glBegin(GL_LINES);
        // garis pertama warna merah
        glColor3f(1.0f, 0.0f, 0.0f);
        glVertex3f(0.5,  0.20, 0.0);
        glVertex3f(0.5, -0.20, 0.0);
        
        // garis kedua warna hijau
        glColor3f(0.0f, 1.0f, 0.0f);
        glVertex3f(-0.5,  0.20, 0.0);
        glVertex3f(-0.5, -0.20, 0.0);
    glEnd();

    glFlush();
}


int main(int argc, char* argv[]) {
    glutInit(&argc, argv);
    glutInitWindowSize(640, 480);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
    glutCreateWindow("Blue Screen");
    glutDisplayFunc(garis);

    glClearColor(0.0f, 0.0f, 1.0f, 1.0f);

    glutMainLoop();
    return 0;
}

