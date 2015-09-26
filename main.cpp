#include <stdlib.h>
#include "KernelLib.h"
#include <conio.h>
#include <glut.h>

DrawStack *MyDrawStack = new DrawStack();

void render(){
	while (1)
	{
		DrawStack.UpdateData();
	}
}
int  main()
{

	Application *MyApplication = new Application();
	MyApplication->Init(0, 0, 100, 100, "MyGame");
	glutDisplayFunc(render);
	glutMainLoop();
	system("pause");
	getch();
	return 0;

}