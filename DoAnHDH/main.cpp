// DoAnHDH.cpp : Defines the entry point for the console application.


#include "stdafx.h"
#include <stdlib.h>
#include <gl/glut.h>
#include "MyShape.h"
#include <Windows.h>
#define SCREEN_WIDTH 800
#define SCREEN_HEIGHT 600
void display(void)
{
	glColor3f(1.0, 1.0, 1.0);
	MyGraphics::MyShape::MyRotate(15, 0, 0, 1);

	MyGraphics::MyShape::MyRectangle_Filled(100, 100, 200, 200);
	MyGraphics::MyShape::MyRectangle(100, 100, 400, 400);
	MyGraphics::MyShape::MyCircle(200, 200, 100);

	
	
	
}
/* hàm thực hiện các khởi tạo */
void init(void)
{
	/* chọn màu để xóa nền (tức là sẽ phủ nền bằng màu này)  */
	glClearColor(0.0, 0.0, 0.0, 0.0); /* màu đen */
	/* thiết lập các thông số cho view */
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0, SCREEN_WIDTH, 0, SCREEN_HEIGHT);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	return;
}
int main(int argc, char** argv)
{
	
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB); /* khởi tạo chế độ vẽ
												 single buffer và hệ màu RGB */
	glutInitWindowSize(SCREEN_WIDTH, SCREEN_HEIGHT); /* khởi tạo window */
	glutInitWindowPosition(100, 100);  /* khởi tạo window tại ví trí
									   (100,100) trên screen */
	glutCreateWindow("DoAn"); /* tên của window là ‘rectangle’ */
	init();  /* khởi tạo một số chế độ đồ họa */
	glutDisplayFunc(display); /* thiết lập hàm vẽ là hàm display() */
	glutMainLoop(); /* bắt đầu chu trình lặp thể hiện vẽ */
	return 0;
}