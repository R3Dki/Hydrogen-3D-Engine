#include "Engine.h"
#include <filesystem>
#include <iostream>

int APIENTRY wWinMain(
	_In_ HINSTANCE hInstance, 
	_In_opt_ HINSTANCE hPrevInstance, 
	_In_ LPWSTR lpCmdLine,
	_In_ int    nCmdShow)
{
	Engine engine;
	engine.Initialize(hInstance, "Hydrogen", "Hydrogen_Class", 500, 500);
	while (engine.ProcessMessages() == true)
	{
		engine.Update();
		engine.RenderFrame();
	}
	return 0;
}