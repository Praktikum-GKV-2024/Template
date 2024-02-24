#define FREEGLUT_STATIC
#include <GL/freeglut.h> 

void persegi_panjang(void) {
    glClear(GL_COLOR_BUFFER_BIT);

    glColor3f(1.0f, 0.0f, 0.0f);
    glRectf(-0.18, -0.18, 0.18, 0.18);

    glFlush();
}


int main(int argc, char* argv[]) {
    glutInit(&argc, argv);
    glutInitWindowSize(640, 480);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
    glutCreateWindow("Blue Screen");
    glutDisplayFunc(persegi_panjang);

    glClearColor(0.0f, 0.0f, 1.0f, 1.0f);

    glutMainLoop();
    return 0;
}

