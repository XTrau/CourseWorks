#include "menu.h"
#include "graphics.h"

using namespace std;

int main()
{
   initwindow(WIDTH, HEIGHT, "2048");
   load();
   start();
   menu();
   closegraph();
   return 0;
}

