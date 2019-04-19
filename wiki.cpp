#include <windows.h>

int main()
{
   ShellExecute(NULL, "open", "http://niobiocash.org",
                NULL, NULL, SW_SHOWNORMAL);
}
