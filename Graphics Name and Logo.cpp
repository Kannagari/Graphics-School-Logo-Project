#include<GL/glut.h>

void init(void)
{
	glClearColor(1.0, 1.0, 1.0, 0.0);
	glMatrixMode(GL_PROJECTION);
	gluOrtho2D(-350, 350, -350, 350);
}

void create()
{
	//Creating the 'F' with lines
	glLineWidth(5); // Setting line width
	glColor3f(0.5, 0.3, 1.0); //Setting color
	glBegin(GL_LINES);
	glVertex2i(10.0, 80.0);
	glVertex2i(10.0, 10.0);
	glEnd();
	glBegin(GL_LINES);
	glVertex2i(10.0, 80.0);
	glVertex2i(30.0, 80.0);
	glEnd();
	glBegin(GL_LINES);
	glVertex2i(10.0, 50.0);
	glVertex2i(25.0, 50.0);
	glEnd();

	//Creating R
	glLineWidth(5);
	glColor3f(1.0, 0.5, 1.0);
	glBegin(GL_LINES);
	glVertex2i(35, 10);
	glVertex2i(35, 80);
	glEnd();
	glBegin(GL_LINES);
	glVertex2i(35, 80);
	glVertex2i(50, 80);
	glEnd();
	glBegin(GL_LINES);
	glVertex2i(35, 50);
	glVertex2i(50, 50);
	glEnd();
	glBegin(GL_LINES);
	glVertex2i(50, 50);
	glVertex2i(55, 10);
	glEnd();
	glBegin(GL_LINES);
	glVertex2i(50, 50);
	glVertex2i(55, 65);
	glEnd();
	glBegin(GL_LINES);
	glVertex2i(50, 80);
	glVertex2i(55, 65);
	glEnd();

	//Creating E
	glLineWidth(5);
	glColor3f(0.3, 1.0, 1.0);
	glBegin(GL_LINES);
	glVertex2i(60, 10);
	glVertex2i(60, 80);
	glEnd();
	glBegin(GL_LINES);
	glVertex2i(60, 80);
	glVertex2i(80, 80);
	glEnd();
	glBegin(GL_LINES);
	glVertex2i(60, 45);
	glVertex2i(75, 45);
	glEnd();
	glBegin(GL_LINES);
	glVertex2i(60, 10);
	glVertex2i(80, 10);
	glEnd();

	//Creating D
	glLineWidth(5);
	glColor3f(1.0, 0.2, 1.0);
	glBegin(GL_LINES);
	glVertex2i(85, 10);
	glVertex2i(85, 80);
	glEnd();
	glBegin(GL_LINES);
	glVertex2i(85, 10);
	glVertex2i(95, 10);
	glEnd();
	glBegin(GL_LINES);
	glVertex2i(85, 80);
	glVertex2i(95, 80);
	glEnd();
	glBegin(GL_LINES);
	glVertex2i(95, 10);
	glVertex2i(100, 30);
	glEnd();
	glBegin(GL_LINES);
	glVertex2i(95, 80);
	glVertex2i(100, 60);
	glEnd();
	glBegin(GL_LINES);
	glVertex2i(100, 60);
	glVertex2i(100, 30);
	glEnd();

	//Creating O
	glLineWidth(5);
	glColor3f(1.0, 0.0, 0.2);
	glBegin(GL_LINES);
	glVertex2i(105, 10);
	glVertex2i(125, 10);
	glEnd();
	glBegin(GL_LINES);
	glVertex2i(105, 80);
	glVertex2i(125, 80);
	glEnd();
	glBegin(GL_LINES);
	glVertex2i(105, 10);
	glVertex2i(105, 80);
	glEnd();
	glBegin(GL_LINES);
	glVertex2i(125, 80);
	glVertex2i(125, 10);
	glEnd();

	//Creating N
	glLineWidth(5);
	glColor3f(0.4, 1.0, 0.0);
	glBegin(GL_LINES);
	glVertex2i(130, 10);
	glVertex2i(130, 80);
	glEnd();
	glBegin(GL_LINES);
	glVertex2i(130, 80);
	glVertex2i(150, 10);
	glEnd();
	glBegin(GL_LINES);
	glVertex2i(150, 10);
	glVertex2i(150, 80);
	glEnd();
	glFlush();

	//Creating I
	glLineWidth(5);
	glColor3f(0.0, 1.0, 0.0);
	glBegin(GL_LINES);
	glVertex2i(155, 10);
	glVertex2i(175, 10);
	glEnd();
	glBegin(GL_LINES);
	glVertex2i(155, 80);
	glVertex2i(175, 80);
	glEnd();
	glBegin(GL_LINES);
	glVertex2i(165, 10);
	glVertex2i(165, 80);
	glEnd();

	//Creating A
	glLineWidth(5);
	glColor3f(1.0, 1.0, 1.0);
	glBegin(GL_LINES);
	glVertex2i(180, 10);
	glVertex2i(190, 80);
	glEnd();
	glBegin(GL_LINES);
	glVertex2i(190, 80);
	glVertex2i(200, 10);
	glEnd();
	glBegin(GL_LINES);
	glVertex2i(185, 45);
	glVertex2i(195, 45);
	glEnd();

	//LOGO?
	//White Part
	glColor3f(1.0, 1.0, 1.0);
	glBegin(GL_QUADS);
	glVertex3f(-100, 0, 0);
	glVertex3f(-100, 90, 0);
	glVertex3f(-95, 85, 0);
	glVertex3f(-95, -5, 0);

	glVertex3f(-95, 85, 0);
	glVertex3f(-75, 65, 0);
	glVertex3f(-75, 55, 0);
	glVertex3f(-95, 75, 0);

	glVertex3f(-95, 45, 0);
	glVertex3f(-75, 25, 0);
	glVertex3f(-75, 15, 0);
	glVertex3f(-95, 35, 0);

	glVertex3f(-70, 60, 0);
	glVertex3f(-55, 75, 0);
	glVertex3f(-55, 45, 0);
	glVertex3f(-70, 60, 0);

	////Blue Part
	glColor3f(0.0, 0.0, 1.0);
	glVertex3f(-100, 90, 0);
	glVertex3f(-75, 125, 0);
	glVertex3f(-50, 90, 0);
	glVertex3f(-75, 65, 0);

	glVertex3f(-55, 85, 0);
	glVertex3f(-50, 90, 0);
	glVertex3f(-50, 0, 0);
	glVertex3f(-55, -5, 0);

	glVertex3f(-55, 85, 0);
	glVertex3f(-55, 75, 0);
	glVertex3f(-75, 55, 0);
	glVertex3f(-75, 65, 0);

	glVertex3f(-75, 25, 0);
	glVertex3f(-55, 45, 0);
	glVertex3f(-55, 35, 0);
	glVertex3f(-75, 15, 0);

	glVertex3f(-75, 55, 0);
	glVertex3f(-75, 25, 0);
	glVertex3f(-95, 45, 0);
	glVertex3f(-95, 75, 0);

	glVertex3f(-75, 55, 0);
	glVertex3f(-70, 60, 0);
	glVertex3f(-55, 45, 0);
	glVertex3f(-75, 25, 0);

	glVertex3f(-77, 17, 0);
	glVertex3f(-95, 35, 0);
	glVertex3f(-95, -5, 0);
	glVertex3f(-77, 17, 0);

	glEnd();

	char mesg[15] = "Justin_Davison";
	for (int i = 0; i<15; i++)
	{
		glutBitmapCharacter(GLUT_BITMAP_8_BY_13, mesg[i]);
	}

}

int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowPosition(50, 100);
	glutInitWindowSize(1000, 400);
	glutCreateWindow("HW_1");
	glutDisplayFunc(create);
	init();

	glutMainLoop();
	return 0;
}