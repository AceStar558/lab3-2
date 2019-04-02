#include <iostream>
#include <string>
using namespace std;

int main()
{
	string d = "deb http://mirror.mephi.ru/debian/ stretch main contrib non-free\ndeb-src http://mirror.mephi.ru/debian/ stretch main contrib non-free\ndeb http://security.debian.org/ stretch/updates main contrib non-free\ndeb-src http://security.debian.org/ stretch/updates main contrib non-free\ndeb http://mirror.mephi.ru/debian/ stretch-updates main contrib non-free\ndeb-src http://mirror.mephi.ru/debian/ stretch-updates main contrib non-free\ndeb http://mirror.mephi.ru/debian stretch-backports main contrib non-free\ndeb-src http://mirror.mephi.ru/debian stretch-backports main contrib non-free";
string d1;
	string x, y;
	cout << "Введите слово которое хотите заменять\n";
	cin >> x;
	cout << "Введите слово на которое хотите заменять\n";
	cin >> y;
	for (int i = 0; i < d.length(); i++) {
		if (d.substr(i, x.length()) == x)
			d.replace(i, x.length(), y);
		if (d[i] == 'm' && d[i + 1] == 'e' && d[i + 2] == 'p' && d[i + 3] == 'h' && d[i + 4] == 'i') {
			d1 = d1 + "yandex";
			i = i + 4;
			d.replace(i, i + 4, "yandex");
		} else
			d1 = d1+d[i];
	}
	cout << d << endl;
	return 0;
}
