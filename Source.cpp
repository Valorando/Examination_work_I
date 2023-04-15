/*Реализовать простейший файловый менеджер с использованием ООП (классы,
наследование и так далее).
Файловый менеджер должен иметь такие возможности:
■■ показывать содержимое дисков;
■■ создавать папки/файлы;
■■ удалять папки/файлы;
■■ переименовывать папки/файлы;
■■ копировать/переносить папки/файлы;
■■ вычислять размер папки/файла;
■■ производить поиск по маске (с поиском по подпапкам) и так далее.*/
#include<iostream>
#include<fstream>
using namespace std;

class File_manager
{
public:
	int key_one;
	string file_name;

	void Job()
	{
		cout << "\t\t\tWelcome to file manager." << endl;
		do
		{
			cout << endl;
			cout << "\t\t\tShow all created files - 1" << endl;
			cout << "\t\t\tCreate file - 2" << endl;
			cout << "\t\t\tRead file - 3" << endl;
			cout << "\t\t\tFill file - 4" << endl;
			cout << "\t\t\tClear file - 5" << endl;
			cout << "\t\t\tExit - 6" << endl;
			cout << endl;

			while (!(cin >> key_one)) {
				cout << endl;
				cout << "\t\t\tError repeat input!" << endl;
				cout << endl;
				cin.clear();
				cin.get();
			}

			if (key_one == 1)
			{
				cout << endl;
				cout << "\t\t\tAvailable files: " << endl;
				cout << endl;
				string path_three = "Files.txt";
				ifstream note_three;
				note_three.open(path_three);
				if (note_three.is_open())
				{
					char file;
					while (note_three.get(file))
					{
						cout << file;
					}
				}
				else
				{
					cout << endl;
					cout << "\t\t\tError!" << endl;
					cout << endl;
				}
				note_three.close();
			}

			if (key_one == 2)
			{
				cout << endl;
				cout << "\t\t\tEnter file name (add .txt at the end. Example: test.txt)." << endl;
				cout << endl;
				cin >> file_name;
				string path = file_name;
				ofstream note;
				note.open(file_name, ofstream::app);
				if (note.is_open())
				{
					cout << endl;
					cout << "\t\t\tFile " << file_name << " is created." << endl;
					cout << endl;
					string text;
					cout << endl;
					cout << "\t\t\tEnter text: " << endl;
					cout << endl;
					cin >> text;
					note << text;
					cout << endl;
					cout << "\t\t\t\Text is saved." << endl;
					cout << endl;

				}
				else
				{
					cout << endl;
					cout << "\t\t\tError!" << endl;
					cout << endl;
				}
				note.close();
				cout << endl;

				string path_two = "Files.txt";
				ofstream note_two;
				note_two.open(path_two, ofstream::app);
				if (note_two.is_open())
				{
					note_two << file_name << endl;
				}
				else
				{
					cout << endl;
					cout << "\t\t\tError!" << endl;
					cout << endl;
				}
				note_two.close();
			}

			if (key_one == 3)
			{
				cout << endl;
				cout << "\t\t\tAvailable files: " << endl;
				cout << endl;
				string path_four = "Files.txt";
				ifstream note_four;
				note_four.open(path_four);
				if (note_four.is_open())
				{
					char file;
					while (note_four.get(file))
					{
						cout << file;
					}
				}
				else
				{
					cout << endl;
					cout << "\t\t\tError!" << endl;
					cout << endl;
				}
				note_four.close();

				cout << endl;
				cout << "\t\t\tEnter file name." << endl;
				cout << endl;
				cin >> file_name;

				string path_five = file_name;
				ifstream note_five;
				note_five.open(path_five);
				cout << endl;
				cout << "\t\t\tInformation: " << endl;
				cout << "\t\t\tName: " << file_name << endl;
				cout << "\t\t\tText: " << endl;
				if (note_five.is_open())
				{
					char file_two;
					while (note_five.get(file_two))
					{
						cout << file_two;
					}
				}
				else
				{
					cout << endl;
					cout << "\t\t\tError!" << endl;
					cout << endl;
				}
				note_five.close();
				cout << endl;

			}

			if (key_one == 4)
			{
				cout << endl;
				cout << "\t\t\tAvailable files: " << endl;
				cout << endl;
				string path_ten = "Files.txt";
				ifstream note_ten;
				note_ten.open(path_ten);
				if (note_ten.is_open())
				{
					char file;
					while (note_ten.get(file))
					{
						cout << file;
					}
				}
				else
				{
					cout << endl;
					cout << "\t\t\tError!" << endl;
					cout << endl;
				}
				note_ten.close();

				cout << endl;
				cout << "\t\t\tEnter file name." << endl;
				cout << endl;
				cin >> file_name;

				string path_six = file_name;
				ofstream note_six;
				note_six.open(file_name, ofstream::app);
				if (note_six.is_open())
				{
					cout << endl;
					string text;
					cout << endl;
					cout << "\t\t\tEnter text:" << endl;
					cout << endl;
					cin >> text;
					note_six << "\n" << text << "\n";
					cout << endl;
					cout << "\t\t\tText is saved." << endl;
					cout << endl;

				}
				else
				{
					cout << endl;
					cout << "\t\t\tError!" << endl;
					cout << endl;
				}
				note_six.close();
				cout << endl;
			}

			if (key_one == 5)
			{
				cout << endl;
				cout << "\t\t\t\Available files: " << endl;
				cout << endl;
				string path_seven = "Files.txt";
				ifstream note_seven;
				note_seven.open(path_seven);
				if (note_seven.is_open())
				{
					char file;
					while (note_seven.get(file))
					{
						cout << file;
					}
				}
				else
				{
					cout << endl;
					cout << "\t\t\tError!" << endl;
					cout << endl;
				}
				note_seven.close();

				cout << endl;
				cout << "\t\t\tEnter file name." << endl;
				cout << endl;
				cin >> file_name;

				string path = file_name;
				ofstream note_eight;
				note_eight.open(file_name);
				if (note_eight.is_open())
				{
					cout << "\t\t\tFile " << file_name << " is cleaned." << endl;
				}
				else
				{
					cout << endl;
					cout << "\t\t\tError!" << endl;
					cout << endl;
				}
				note_eight.close();
				cout << endl;
			}

			if (key_one == 6)
			{
				exit(0);
			}



		} while (key_one != 0);
	}
};

int main()
{
	File_manager fm;
	fm.Job();
}