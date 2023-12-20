#include"Chat.h"
#include"Application.h"





int main()
{

	Application* app = new Application();

	app->Run();

	delete app;

}
/*Создание объекта типа Application, запуск метода Run(), удаление указателя app*/