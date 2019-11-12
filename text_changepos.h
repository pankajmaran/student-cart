void textSize(int a,int b)
{
	CONSOLE_FONT_INFOEX cfi;
cfi.cbSize = sizeof(cfi);
cfi.nFont = 0;
cfi.dwFontSize.X = 0;                   // Width of each character in the font
cfi.dwFontSize.Y = 24;                  // Height
cfi.FontFamily = FF_DONTCARE;
cfi.FontWeight = FW_NORMAL;
std::wcscpy(cfi.FaceName, L"Consolas"); // Choose your font
SetCurrentConsoleFontEx(GetStdHandle(STD_OUTPUT_HANDLE), FALSE, &cfi);
}
void changePos(int a,int b)
{
	COORD cord;
cord.X=a;
cord.Y=b;
SetConsoleCursorPosition(GetStdHandle( STD_OUTPUT_HANDLE ),cord);
}
