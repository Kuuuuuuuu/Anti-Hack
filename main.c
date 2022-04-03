#include <stdlib.h>

int WinMain() {
    while (1) {
        if (system("tasklist | findstr HorionInjector.exe") == 0) {
            system("taskkill /f /im HorionInjector.exe");
            system("taskkill /f /im minecraft.windows.exe");
        }
        if (system("tasklist | findstr nitr0.exe") == 0) {
            system("taskkill /f /im nitr0.exe");
            system("taskkill /f /im minecraft.windows.exe");
        }
    }
}
