#include <SFML/Graphics.hpp>
#include <iostream>
#include <string>

using namespace sf;
using namespace std;


int main()
{
	setlocale(LC_ALL, "RUS");

	string Words[5] = { "Идёт", "Бычок", "Качается",
	"Вздыхает", "На ходу" };

	RenderWindow window(VideoMode(800, 600), "S");
	window.setFramerateLimit(60);


	Font font;
	Text Text1;
	Text1.setFont(font);
	Text1.setPosition(50,50);
	/*
	Text1.setCharacterSize(30);
	*/
	Text1.setString(Words[0]);
	

	if (!font.loadFromFile("DS-DIGIB.TTF"))
	{
		cout<<"Не могу загрузить шрифт";
	}
	for (int i = 0; i < 5; i++)
	{
		cout << << Words[i] << ::endl;
	}
	while (window.isOpen())
	{
		//1 обработка событий
		Event event;
		while (window.pollEvent(event))
		{
			if (event.type == Event::Closed)
				window.close();
		}
		//3 отрисовка объектов и обновление окна
		window.clear();
		
		window.draw(Text1);
		//window.draw(rightText);
		window.display();
	}

	return 0;
}


