#include<iostream>;
#include<Windows.h>;

// This is the old version.

int main() {
	while (1 == 1) {
		::ShowWindow(::GetConsoleWindow(), SW_HIDE);
		if (GetKeyState(' ') & 0x8000)
		{
			keybd_event('S', 0, 0, 0);
			keybd_event('P', 0, 0, 0);
			keybd_event('A', 0, 0, 0);
			keybd_event('C', 0, 0, 0);
			keybd_event('E', 0, 0, 0);
			Sleep(100);
		}
	}
	return 0;
}
