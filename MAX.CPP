 #include<stdio.h>
#include<graphics.h>
#include<conio.h>
#include<dos.h>
#include<iostream.h>
#include<stdlib.h>

void load()
{int gd=DETECT,gm;
initgraph(&gd,&gm,"c://turboc3//bgi");
rectangle(0,0,getmaxx(),getmaxy());
}
void main()
{load();
 cout<<getmaxx()<<" "<<getmaxy();
 getch();
}
