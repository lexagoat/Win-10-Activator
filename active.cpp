#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
	system("MODE CON COLS=45 LINES=19");

Start:
	system("cls");

	cout << "Choose your Windows 10 Version: \n\n";
	cout << "[1] Home \n";
	cout << "[2] Home N \n";
	cout << "[3] Home Single Language \n";
	cout << "[4] Home Country Specific \n";
	cout << "[5] Professional \n";
	cout << "[6] Professional N \n";
	cout << "[7] Education \n";
	cout << "[8] Education N \n";
	cout << "[9] Enterprise \n";
	cout << "[10] Enterprise N \n\n";
	cout << "[!] Exit \n\n";

	int WindowsKey;
	cout << "[!] Windows 10 : ";
	cin >> WindowsKey;

	if (WindowsKey < 0 || WindowsKey > 10) goto Start;

	string Home = "Home Key",
		HomeN = "Home N Key",
		HomeSL = "Home SL Key",
		HomeCS = "Home CS Key",
		Pro = "Pro Key",
		ProN = "Pro N Key",
		Edu = "Edu Key",
		EduN = "Edu N Key",
		Ent = "Ent Key",
		EntN = "Ent N Key,
		WindowsKeyChoice, WindowsName;
		
	switch (WindowsKey) {
	case 0: exit(0);
	case 1: WindowsKeyChoice = Home; WindowsName = "Home"; break;
	case 2: WindowsKeyChoice = HomeN; WindowsName = "Home N"; break;
	case 3: WindowsKeyChoice = HomeSL; WindowsName = "Home SL"; break;
	case 4: WindowsKeyChoice = HomeCS; WindowsName = "Home CS"; break;
	case 5: WindowsKeyChoice = Pro; WindowsName = "Pro"; break;
	case 6: WindowsKeyChoice = ProN; WindowsName = "Pro N"; break;
	case 7: WindowsKeyChoice = Edu; WindowsName = "Edu"; break;
	case 8: WindowsKeyChoice = EduN; WindowsName = "Edu N"; break;
	case 9: WindowsKeyChoice = Ent; WindowsName = "Ent"; break;
	case 10: WindowsKeyChoice = EntN; WindowsName = "Ent N"; break;
	default: exit(1); break;
	}

	system("cls");
	cout << "[!] Activating Windows 10" << WindowsName << "\n\n";

	cout << "[?] Entering the key to the system \n";
	system(("slmgr /ipk" + WindowsKeyChoice).c_str());

	cout << "[!] Getting connections with the server... \n";
	system("runas /user:Administrator@domain slmgr /skms kms8.msguides.com");

	cout << "[!] Activating Windows 10 \n";
	system("slmgr /ato");

	system("cls");
	cout << "[!] You successfully activated Windows 10!" << WindowsName << "! \n";
}
