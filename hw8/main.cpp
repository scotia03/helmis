#include <GL/glut.h>
#include <cmath>

float rotationX = 0.0f; // Translasi dalam sumbu X

void drawCube(float size) {
    glutWireCube(size);
}

void display() {
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glEnable(GL_DEPTH_TEST);

    // Rotasi sebelum rotasi (merah)
    glColor3f(1.0f, 0.0f, 0.0f);
    glPushMatrix();
    glRotatef(0.0f, 1.0f, 0.0f, 0.0f); // Rotasi awal
    drawCube(1.0f);
    glPopMatrix();

    // Rotasi setelah rotasi (hijau)
    glColor3f(0.0f, 1.0f, 1.0f);
    glPushMatrix();
    glRotatef(rotationX, 1.0f, 0.0f, 0.0f); // Rotasi sepanjang sumbu X
    drawCube(1.0f);
    glPopMatrix();

    glutSwapBuffers();
}

void init() {
    glMatrixMode(GL_PROJECTION);
    gluPerspective(45.0f, 1.0f, 1.0f, 10.0f); // Proyeksi perspektif

    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    gluLookAt(3.0f, 3.0f, 3.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 0.0f); // Atur matriks pandangan
}

void update(int value) {
    rotationX += 1.0f; // Tambahkan sudut rotasi
    glutPostRedisplay();
    glutTimerFunc(16, update, 0);
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH); // Tambahkan GLUT_DEPTH untuk buffer kedalaman
    glutInitWindowSize(400, 400);
    glutCreateWindow("OpenGL 3D Kubus dengan Translasi dan Warna");

    init();

    glutDisplayFunc(display);
    glutTimerFunc(25, update, 0); // Set timer untuk update secara periodik

    glutMainLoop();

    return 0;
}
