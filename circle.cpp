#include<graphics.h>

int main()
{
  int gd = DETECT,gm;
  initgraph(&gd, &gm, " ");
  ciicle(200,200,100);
  getch();
  closegraph();
  return 0;
}
