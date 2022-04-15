// CPP program to demonstrate Morse code
#include <iostream>
using namespace std;
int main()
{
int month;
cout<<"Please enter your month:";
cin>>month;

	switch (month) {

	case 1:
		cout<< "You will meet mohamed salah";
		break;
	case 2:
		cout<< "You will meet CR7";
		break;
	case 3:
		cout<< "You will meet messi";
		break;
	case 4:
		cout<< "You will meet Abo Trika";
		break;
	case 5:
		cout<< "You will meet Elsaka";
		break;
	case 6:
		cout<< "You will meet Karara";
		break;
	case 7:
		cout<< "You will meet Tamer hosni";
		break;
	case 8:
		cout<< "You will meet wael gomaa";
		break;
	case 9:
		cout<< "You will meet shika";
		break;
	case 10:
		cout<< "You will meet shinnawy";
		break;
	case 11:
        cout<< "You will meet adel emam";
        break;
    case 12:
        cout<< "You will meet amr diab";
        break;


	default:
		cout<< "Found invalid character: ";
		break;
}
}
