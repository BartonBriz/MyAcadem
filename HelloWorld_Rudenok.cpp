

#include <iostream>
#include <string>

using namespace std;

int main()
{
	string a;
	int b;
	cout << "Hello World and teacher!" << endl;
	cout << "I Misha Rudenok" << endl;
	cout << "What you name?" << ": " << endl;
	cin >> a;
	cout << "nice to meet you " << a <<"!" << endl;
	cout << "Me 27 age" << endl;;
	cout << "How old are you?" << endl;
	cin >> b;
	if (b <= 18 && b >= 0)
	{
		cout << " You teenager! Nice)";
	}
	else if (b >= 19 && b <= 44)
	{
		cout << "Ti Molodoy)" << endl;
	}
	else if (b >= 45 && b <= 59)
	{
		cout << "Stareesh, ponimay)" << endl;
	}
	else
		cout << "Boys' predstavit'" << endl;
	setlocale (LC_ALL, "Russian");
	cout << "Ладно, расскажу о себе немного в краце. с 2015 по 2019 учился в Минском Инновационном Университете по специальности ПОИТ." << endl;
	cout << "Мы проходили ООП в основном на C# и Java, были и другие предметы по веб-разработке, вообще специализация у нас была: веб разработка и дизайн мобильных приложений." << endl;
	cout << "Дипломную работу писал на php, там я создавал сайт на сервере по математическим уровнениям." << endl;
	cout << "После прошел курсы на Unreal Engine (разработка игр) но на Blueprint. Я изучал во время учебы и курсов с++, но... Поэтому щас хочу узичить его досконально, чтобы"
		<< " использовать его в геймдев)" << endl;

}

