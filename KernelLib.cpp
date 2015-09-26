#include <iostream>
#include "KernelLib.h"
#include "glut.h"
using namespace std;
Application::Application()
{
	
};
void Application::Init(int WindowPositionX, int WindowPositionY, int WindowSizeX, int WindowSizeY, char WindowName[])
{
	char fakeParam[] = "fake";
	char *fakeargv[] = { fakeParam, NULL };
	int fakeargc = 1;

	glutInit(&fakeargc, fakeargv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowPosition(WindowPositionX, WindowPositionY);
	glutInitWindowSize( WindowSizeX, WindowSizeY);
	glutCreateWindow(WindowName);


}

Scene::Scene()
{
	
};
void DrawStack::UpdateData(){

}