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
setcolor(6);
arc(350,350,-30,210,10);
line(341,355,350,365);
line(359,355,350,365);
arc(350,350,-30,210,9);
line(342,355,350,365);
line(358,355,350,365);
arc(350,350,-30,210,8);
line(343,355,350,365);
line(357,355,350,365);
arc(350,350,-30,210,7);
line(344,355,350,365);
line(356,355,350,365);
getch();
}


