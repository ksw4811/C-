#include "Booksystem.h"
#include "FileClass.h"

//start
void BookSystem::GetName()
{
	cout << endl << "책의 이름(영문 100자 이내, 한글 30자 이내, 공백포함, 처음에 공백이 있으면 실행실패) : ";
}

void BookSystem::GetWriter()
{
	cout << endl << "책의 작가(영문 100자 이내, 한글 30자 이내, 공백포함, 처음에 공백이 있으면 실행실패) : ";
}

void BookSystem::GetYear()
{
	cout << endl << "출판 년도(0~9999까지의 숫자를 입력하여 주세요) : ";
}

void BookSystem::GetInformation()
{
	cout << endl << "\t\t\t책의 정보(영문 100자 이내, 한글 30자 이내, 공백포함, 처음에 공백이 있으면 실행실패) : ";
}

void BookSystem::HowInitialize()
{
	cout << "\t\t\t\t\t== 전체 도서 목록을 초기화 하시겠습니까?? ==" << endl << endl << "\t\t\t\t\t== 희망 하시는 경우 'y'를 입력 후 엔터를 눌러주세요 ==" << endl << endl;
}

// menu
int BookSystem::menu()
{
	system("cls");
	int nButton;
	cout << "=====================================================================================================================" << endl;
	cout << "=====================================================================================================================" << endl;
	cout << "\t\t\t\t\t환영합니다. 도서관리 프로그램입니다." << endl;
	cout << "=====================================================================================================================" << endl;
	cout << "=====================================================================================================================" << endl;
	cout << "\t\t\t\t\t\t\t메뉴" << endl;
	cout << "=====================================================================================================================" << endl;
	cout << "\t\t\t\t\t\t1. 전체 도서 목록 불러오기" << endl;
	cout << "=====================================================================================================================" << endl;
	cout << "\t\t\t\t\t\t2. 도서 추가하기" << endl;
	cout << "=====================================================================================================================" << endl;
	cout << "\t\t\t\t\t\t3. 도서 삭제하기" << endl;
	cout << "=====================================================================================================================" << endl;
	cout << "\t\t\t\t\t\t4. 도서 정보 검색하기" << endl;
	cout << "=====================================================================================================================" << endl;
	cout << "\t\t\t\t\t\t5. 도서 목록 저장하기" << endl;
	cout << "=====================================================================================================================" << endl;
	cout << "\t\t\t\t\t\t6. 저장 및 종료" << endl;
	cout << "=====================================================================================================================" << endl;
	cout << "사용할 기능의 번호를 입력하고 Enter를 눌러 주세요(7번을 누르거나 다른것을 누를시 프로그램이 종료됩니다.) : ";
	cin >> nButton;

	if (nButton >= 1 && nButton <= 6)
	{
		return nButton;
	}
	else
	{
		return 0;
	}
}

void BookSystem::Process()
{
	File myfile;
	while (1)
	{
		switch (menu())
		{
		case 1:
			myfile.printallindex();
			break;
		case 2:
			myfile.insertbook();
			break;
		case 3:
			myfile.deletebook();
			break;
		case 4:
			myfile.searchbook();
			break;
		case 5:
			myfile.savefile();
			break;
		case 6:
			myfile.savefile();
			return;
		default:
			myfile.savefile();
			return;
		}

	}
}

//end
void BookSystem::Information()
{
	cout << endl << "\t\t\t\t\t 제목     /     작가     /     출판년도" << endl << endl;
}
void BookSystem::error()
{
	cout << endl << "\t\t\t\t\t== 다시 시도하여주세요 ==" << endl;
	system("pause");
}

void BookSystem::NoBook()
{
	cout << endl << "\t\t\t\t\t == 도서가 없습니다. 메인 화면으로 돌아갑니다. == " << endl;
	system("pause");
}

void BookSystem::CompleteDelete()
{
	cout << endl << "\t\t\t\t\t== 도서 삭제가 완료되었습니다!! ==" << endl;
	system("pause");
}

void BookSystem::CompleteInsert()
{
	cout << endl << "\t\t\t\t\t== 도서 추가가 완료되었습니다!! ==" << endl;
	system("pause");
}

void BookSystem::saveComplete()
{
	cout << "\t\t\t\t\t== 저장이 완료 되었습니다!! ==" << endl;
	system("pause");
}