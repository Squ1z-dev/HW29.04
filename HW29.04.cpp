#include <iostream>
#include <fstream> 
#include <string>
using namespace std;
int main()
{
	//ifstream f(); // для читання
//ofstream g(); // для запису
// ios::app режим додавання інфи до файлу
// ios::in режим для читання файлу
	//Taks1 copy files
	ofstream number("D:\\cplusplus\\number2.txt", ios::app );
	if (!number) {
		cerr << "Error opening file!" << endl;
		return 1;
	}
	string n;
	cout << "Enter a txt: ";
	cin >> n;
	number << n << endl;
	number.close();
	ifstream read("D:\\cplusplus\\number2.txt");
	ofstream write("D:\\cplusplus\\number3.txt", ios::app);
	if (!read || !write) {
		cerr << "Error opening file!" << endl;//що таке cerr я не знаю, це мені підказка висколчила
		return 1;
	}
	string line;
	while (getline(read, line)) {
		write << line << endl;
	}

	write.close();
	read.close();

	cout << "File copied successfully!" << endl;

	//Taks2 count chars
	ofstream number2("D:\\cplusplus\\number4.txt", ios::app);
	if (!number2) {
		cerr << "Error opening file!" << endl;
		return 1;
	}
	string txt;
	cout << "Enter a txt: ";
	cin >> txt;
	number2 << txt << endl;
	number2.close();
	ifstream count("D:\\cplusplus\\number4.txt");
	char ch;
	int charCount = 0;

	while (count.get(ch)) {
		charCount++;
	}

	count.close();
	cout << "Number of characters in the file: " << charCount << endl;


}

