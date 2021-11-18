#include <Windows.h>
//#include <iostream>
#include <thread>

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow) {
	bool clicked = false;

	while (true) {
		if ((GetKeyState(VK_CONTROL) & 0x8000) && (GetKeyState(VK_MENU) & 0x8000) && (GetKeyState(VK_F4) & 0x8000)) {
			if (!clicked) {
				clicked = true;

				HWND window = GetForegroundWindow();
				DWORD id;
				GetWindowThreadProcessId(window, &id);
				//std::cout << id << std::endl;

				HANDLE handle = OpenProcess(PROCESS_TERMINATE, false, id);
				TerminateProcess(handle, 1);
			}
		}
		else
			clicked = false;
		std::this_thread::sleep_for(std::chrono::milliseconds(15));
	}
}