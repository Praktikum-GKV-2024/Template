#define FREEGLUT_STATIC
#include <GL/freeglut.h> 

void segitiga(void) {
    glClear(GL_COLOR_BUFFER_BIT);
    
    glBegin(GL_TRIANGLES);
        // vertex 1
        glColor3f(1.0f, 0.0f, 0.0f);
        glVertex3f(-0.10, -0.10, 0.00);
        // vertex 2
        glColor3f(0.0f, 1.0f, 0.0f);
        glVertex3f(0.10, -0.10, 0.00);

        // vertex
        glColor3f(0.0f, 0.0f, 1.0f);
        glVertex3f(0.00, 0.10, 0.00);
    glEnd();
    
    glFlush();
}


int main(int argc, char* argv[]) {
    glutInit(&argc, argv);
    glutInitWindowSize(640, 480);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
    glutCreateWindow("Blue Screen");
    glutDisplayFunc(segitiga);

    glClearColor(0.0f, 0.0f, 1.0f, 1.0f);

    glutMainLoop();
    return 0;
}

