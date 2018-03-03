#include<stdio.h>
#include<graphics.h>
#include<conio.h>
#include<dos.h>
#include<iostream.h>
#include<stdlib.h>

void loading(int x,int y,int z)
{
//0
if(z==0)
circle(x+25,y,3);
//30
if(z==30)
circle(x+22,y-25/2,3);
//60
if(z==60)
circle(x+25/2,y-22,3);
//90
if(z==90)
circle(x,y-25,3);
//120
if(z==120)
circle(x-25/2,y-22,3);
//150
if(z==150)
circle(x-22,y-25/2,3);
//180
if(z==180)
circle(x-25,y,3);
//210
if(z==210)
circle(x-22,y+25/2,3);
//240
if(z==240)
circle(x-25/2,y+22,3);
//270
if(z==270)
circle(x,y+25,3);
//300
if(z==300)
circle(x+25/2,y+22,3);
//330
if(z==330)
circle(x+22,y+25/2,3);
}

  void welcome()
  {


int edge1[]={130,30,30,30,30,100,100,100,100,130,30,130,30,150,130,150,130,80,60,80,60,50,130,50,130,30};
int edge2[]={150,150,150,30,180,30,230,130,230,30,250,30,250,150,220,150,170,50,170,150,150,150 };
int edge3[]={270,150,310,30,330,30,370,150,350,150,335,110,305,110,290,150,270,150};
int edge33[]={310,95,330,95,320,50,310,95};
int edge4[]={390,30,390,150,410,150,410,100,480,150,490,140,420,90,490,40,480,30,410,80,410,30,390,30};
int edge5[]={510,30,510,150,610,150,610,130,530,130,530,100,590,100,590,80,530,80,530,50,610,50,610,30,510,30};
int edge6[]={235,240,260,180,285,240,275,240,267,220,253,220,245,240,235,240};
int edge66[]={256,212,263,212,260,200,256,212};
int edge7[]={295,240,295,180,310,180,335,230,335,180,345,180,345,240,330,240,305,190,305,240,295,240};
int edge8[]={20,270,20,370,100,370,100,350,40,350,40,270,20,270};
int edge9[]={120,370,170,270,220,370,200,370,185,340,155,340,140,370,120,370};
int edge99[]={160,325,180,325,170,300,160,325};
int edge10[]={380,270,380,370,460,370,460,355,395,355,395,328,430,328,430,312,395,312,395,285,460,285,460,270,380,270};
int edge11[]={480,370,480,270,580,270,580,320,510,320,580,360,570,370,500,330,500,370,480,370};
int edge111[]={505,285,505,305,565,305,565,285,505,285};
//S
setcolor(4);
setlinestyle(0,1,3);
drawpoly(13,edge1);
setfillstyle(5,12);
floodfill(40,40,4);
delay(100);

//N
setcolor(1);
drawpoly(11,edge2);
setfillstyle(4,9);
floodfill(160,50,1);
delay(100);

//A
setcolor(2);
drawpoly(9,edge3);
//inner A
drawpoly(4,edge33);
setfillstyle(5,10);
floodfill(320,40,2);
delay(100);

//K
setcolor(4);
drawpoly(12,edge4);
setfillstyle(5,12);
floodfill(400,40,4);
delay(100);

//E
setcolor(5);
drawpoly(13,edge5);
setfillstyle(5,5);
floodfill(520,40,5);
delay(100);


//A
setcolor(14);
drawpoly(8,edge6);
//inner A
drawpoly(4,edge66);
setfillstyle(2,14);
floodfill(260,185,14);
delay(100);

//N
setcolor(11);
drawpoly(11,edge7);
setfillstyle(5,11);
floodfill(300,185,11);
delay(100);

//I
setcolor(12);
arc(355,210,270,90,30);
arc(355,210,310,60,20);
line(355,180,355,240);
line(365,195,365,227);
setfillstyle(5,4);
floodfill(360,190,12);
delay(100);

//L
setcolor(14);
drawpoly(7,edge8);
setfillstyle(4,14);
floodfill(30,280,14);
delay(100);

//A
setcolor(5);
drawpoly(8,edge9);
//A Inner body
drawpoly(4,edge99);
setfillstyle(5,13);
floodfill(130,360,5);
delay(100);

//D
setcolor(6);
arc(240,320,270,90,50);
arc(240,320,290,67,38);
line(240,270,240,370);
line(253,285,253,355);
setfillstyle(4,6);
floodfill(250,300,6);
delay(100);
setcolor(9);
arc(310,320,270,90,50);
arc(310,320,290,67,38);
line(310,270,310,370);
line(323,285,323,355);
setfillstyle(4,9);
floodfill(320,300,9);
delay(100);
//E
setcolor(RED);
drawpoly(13,edge10);
setfillstyle(5,RED);
floodfill(390,280,RED);
delay(100);

//R
setcolor(GREEN);
drawpoly(10,edge11);
drawpoly(5,edge111);
setfillstyle(5,GREEN);
floodfill(500,280,GREEN);
delay(100);


//developed By
setcolor(WHITE);
settextstyle(2,0,6);
outtextxy(385,455,"Powered By : Programmers");
setcolor(7);
settextstyle(4,0,3);
//outtextxy(331,451,"Developed By : Bhai & Sons");

//loading
setcolor(2);
//circle(150,440,25);
//ellipse(125,440,0,360,2,5);
int x=320,y=435;
int  z=0;
char str[4];
for(int i=3030;i>0;i-=30)
{
setfillstyle(0,1);
bar(x-30,y-30,x+30,y+30);
setcolor(1);
loading(x,y,(i+30)%360);
setcolor(2);
loading(x,y,(i+60)%360);
setcolor(3);
loading(x,y,(i+90)%360);
setcolor(4);
loading(x,y,(i+120)%360);
setcolor(5);
loading(x,y,(i+150)%360);
setcolor(6);
loading(x,y,(i+180)%360);
setcolor(WHITE);
settextstyle(2,0,7);
if(z<10)
sprintf(str,"0%d%",z);
else
sprintf(str,"%d%",z);
outtextxy(303,422,str);
z+=1;
delay(40);
}

}

void menu()
{                           clrscr();
int a[30]={210,510,480,215,210,200,500,470,215,200,210,465,490,205,210,210,465,500,200,210,220,460,485,210,220,253,450,440,280,255};
int b[30]={50,50,105,90,50,150,150,195,185,150,205,205,245,240,205,265,265,310,305,265,325,330,360,370,325,380,375,415,430,380};
int cords1[]={a[5],b[5],a[6],b[6],a[7],b[7],a[8],b[8],a[9],b[9]};
int cords2[]={a[10],b[10],a[11],b[11],a[12],b[12],a[13],b[13],a[14],b[14]};
int cords3[]={a[15],b[15],a[16],b[16],a[17],b[17],a[18],b[18],a[19],b[19]};
int cords4[]={a[20],b[20],a[21],b[21],a[22],b[22],a[23],b[23],a[24],b[24]};
int cords5[]={a[25],b[25],a[26],b[26],a[27],b[27],a[28],b[28],a[29],b[29]};
setcolor(1);
setlinestyle(0,1,3);
setfillstyle(2,1);
floodfill(5,5,1);
rectangle(0,0,getmaxx(),getmaxy());
//Down dialog box
setfillstyle(1,14);
bar(0,460,639,479);
setcolor(1);
settextstyle(2,0,5);
outtextxy(10,460,"To Move UP or DOWN press W or S respectively");
outtextxy(360,460,"// To Enter any option press E");


//Tweeter Bird
setcolor(11);
settextstyle(4,0,8);
outtextxy(10,35,"Snake And ladder");

//Continue
setcolor(6);
setfillstyle(1,9);
setlinestyle(0,1,3);
fillpoly(5,cords1);

setcolor(14);
settextstyle(8,0,5);
outtextxy(240,140,"Continue");

//Newgame
setcolor(6);
setfillstyle(1,3);
setlinestyle(0,1,3);
fillpoly(5,cords2);

setcolor(14);
settextstyle(8,0,5);
outtextxy(240,187,"Newgame");

//High score
setcolor(6);
setfillstyle(1,3);
setlinestyle(0,1,3);
fillpoly(5,cords3);

setcolor(14);
settextstyle(8,0,5);
outtextxy(240,250,"HighScore");

//Help
setcolor(6);
setfillstyle(1,3);
setlinestyle(0,1,3);
fillpoly(5,cords4);

setcolor(14);
settextstyle(8,0,5);
outtextxy(290,310,"Help");

//About
setcolor(6);
setfillstyle(1,11);
setlinestyle(0,1,3);
fillpoly(5,cords5);

setcolor(14);
settextstyle(8,0,5);
outtextxy(300,365,"About");


}

void load()
{int gd=DETECT,gm;
initgraph(&gd,&gm,"c://turboc3//bgi");
rectangle(0,0,getmaxx(),getmaxy());
}
void main()
{load();

welcome();
//menu();
getch();
}
