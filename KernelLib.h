#pragma once
class DrawStack
{
public:
	void Display();
	void AddElement(char Type[]);
	void UpdateData();

};
class Application
{
public:
	Application();
	void Init(int WindowPositionX, int WindowPositionY, int WindowSizeX, int WindowSizeY, char WindowName[]);
	void Render();

};
class Scene
{
public:
	Scene();
	
};
class Actor
{
	void Add(char Type[],float PosX, float PosY);
	void Draw();
};
class UserInterface
{

};
