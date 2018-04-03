#include<stdio.h>
#include<math.h>
#include<graphics.h>
#include<conio.h>
#include<dos.h>
#include<iostream.h>
#include<stdlib.h>

void dice(int );
void exitbutton();
void About();
void about();
void menu();
void help();
void snake3()
{
    setcolor(GREEN);
    setlinestyle(0,1,3);
    arc(130,220,150,180,40);
    arc(130,220,180,253,40);
    arc(105,328,273,80,70);
    arc(143,220,150,180,40);
    arc(143,215,180,230,40);
    arc(112,328,275,50,75);
    arc(80,354,45,72,115);
    line(118,402,108,398);

    line(95,200,110,185);
    line(110,185,109,200);
    circle(104,198,1);
    setfillstyle(1,12);
}


void snake()
{

setcolor(GREEN);
setlinestyle(0,1,3);
arc(120,110,10,85,60);
arc(258,85,190,240,80);
arc(112,118,10,80,60);
arc(250,93,190,290,80);
arc(275,100,250,270,70);
line(250,165,230,160);
line(230,160,218,155);
line(130,50,115,47);
line(121,59,106,52);
line(106,52,114,48);
circle(114,52,1);
}

void snake2()
{
setcolor(GREEN);
setlinestyle(0,1,3);
arc(155,128,320,0,170);
arc(165,128,330,0,170);
line(325,120,332,105);
line(332,105,335,120);
line(325,128,325,120);
line(335,128,335,120);
line(312,212,285,240);
circle(331,117,1);

arc(155+30,128+160,320,0,170);
arc(165+30,128+160,330,0,170);
line(325+30,120+160,332+30,105+160);
line(332+30,105+160,335+30,120+160);
line(325+30,128+160,325+30,120+160);
line(335+30,128+160,335+30,120+160);
line(312+30,212+160,285+30,240+160);
circle(331+30,117+160,1);

}

void help()
{   clearviewport();
About();
setcolor(4);
settextstyle(1,0,7);
outtextxy(250,30,"Help");
setcolor(1);
settextstyle(4,0,4);
outtextxy(105,125,"Objective:");
setcolor(0);
settextstyle(1,0,2);
outtextxy(237,135,"to acheive the home");
setcolor(1);
settextstyle(4,0,4);
outtextxy(105,200,"How To Play:");
setcolor(0);
settextstyle(1,0,2);
outtextxy(307,210,"Press space key to");
outtextxy(307,240,"roll the dice");
char c;
c=getch();
if(c=='b')
menu();
else
exit(0);
}
//----------------------------------------------------------
void About()
{  clearviewport();
setcolor(1);
setfillstyle(2,1);
floodfill(5,5,1);
rectangle(0,0,getmaxx(),getmaxy());
setfillstyle(1,14);
bar(0,460,639,479);
setcolor(1);
settextstyle(2,0,5);
outtextxy(10,460,"To go Back to the menu screen press B respectively");
outtextxy(400,460,"// To Exit from game press X ");

//Upper roller (rectangle)
setlinestyle(0,1,1);
setfillstyle(2,3);
bar(100,50,550,90);

//Elipse1(upperleft)
setcolor(4);
ellipse(100,70,0,360,10,20);
setfillstyle(7,12);
floodfill(101,71,4);

//Ellipse2(upper right)
ellipse(550,70,0,360,10,20);
setfillstyle(7,12);
floodfill(551,71,4);

//Middle Rectangle(sheet)
setcolor(7);
setlinestyle(0,1,3);
rectangle(100,93,550,387);
setfillstyle(1,7);
floodfill(200,100,7);

//Bottom Rectangle(Bottom roller)
setcolor(9);
setlinestyle(0,1,1);
setfillstyle(2,3);
bar(100,390,550,410);

//Ellipse3(Bottom left)
setcolor(4);
ellipse(100,400,0,360,5,10);
setfillstyle(7,12);
floodfill(102,402,4);
//Ellipse4(Bottom Right)
setcolor(4);
ellipse(550,400,0,360,5,10);
setfillstyle(7,12);
floodfill(552,402,4);
}
//----------------------------------------------------------
void about()
{
 About();
setcolor(10);
settextstyle(4,0,7);
outtextxy(245,28,"About");
setcolor(0);
settextstyle(1,0,1);
outtextxy(105,100,"This  game  'Snake And Ladder' is designed ");
outtextxy(105,125,"and programmed by PROGRAMMERS is an ");
outtextxy(105,150,"graphical animated game.This game is about a ");
outtextxy(105,175,"player who has to cross the obstacles(the ");
outtextxy(105,200,"snakes) during his journey and ladders to ");
outtextxy(105,225,"support him. it is an interesting fun game.");
outtextxy(105,250,"this short feature game may be played by ");
outtextxy(105,275,"the children in their relaxation time. ");
char c;
c=getch();
if(c=='b')
menu();
else
exit(0);
}




void rolldice()
{
  for(int i=0;i<12;i++)
  {     dice((i+1)%6);
  delay(40);
  }
}

void dice(int z=4)
{
setfillstyle(1,2);
setlinestyle(2,1,3);
bar3d(550,30,600,80,10,1);
if(z==1)
{circle(575,55,2);
}
else if(z==2)
{circle(565,55,2);
circle(585,55,2);
}
else if(z==3)
{
circle(575,40,2);
circle(575,55,2);
circle(575,70,2);
}
else if(z==4)
{
circle(565,45,2);
circle(585,45,2);
circle(565,65,2);
circle(585,65,2);
}
else if(z==5)
{
circle(565,45,2);
circle(585,45,2);
circle(565,65,2);
circle(585,65,2);
circle(575,55,2);
}
else if(z==6)
{
 circle(565,40,2);
circle(565,55,2);
circle(565,70,2);
circle(585,40,2);
circle(585,55,2);
circle(585,70,2);
}


}
void board(int l,int p, int p1,int active)
{
clearviewport();

   setcolor(2);
setlinestyle(0,1,3);
//setfillstyle(2,1);
//floodfill(5,5,1);
setcolor(CYAN);
rectangle(0,0,getmaxx(),getmaxy());
 setcolor(WHITE);
   for(int i=20;i<=420;i+=40)
   {
   line(i,20,i,420);
   }
   for(int y=20;y<=420;y+=40)
   {            line(20,y,420,y);
   }
   settextstyle(0,0,1);
   outtextxy(40,400,"1    2    3    4    5    6    7    8    9   10");
   outtextxy(40,360,"20  19   18   17   16   15   14   13   12   11");
   outtextxy(40,320,"21  22   23   24   25   26   27   28   29   30");
  outtextxy(40,280,"40  39   38   37   36   35   34   33   32   31");
   outtextxy(40,240,"41  42   43   44   45   46   47   48   49   50");
   outtextxy(40,200,"60  59   58   57   56   55   54   53   52   51");
   outtextxy(40,160,"61  62   63   64   65   66   67   68   69   70");
   outtextxy(40,120,"80  79   78   77   76   75   74   73   72   71");
   outtextxy(40,80,"81  82   83   84   85   86   87   88   89   90");
   outtextxy(30,40,"100  99   98   97   96   95   94   93   92   91");
   dice(l);
   snake();
   snake2();
   snake3();
   setlinestyle(0,1,3);
   rectangle(460,200,630,240);
   settextstyle(1,0,3);
   setcolor(RED);
   char c[4],c1[4];
   sprintf(c,"%d",p);
   sprintf(c1,"%d",p1);
   outtextxy(470,205,"Player 1: ");
   outtextxy(580,205,c);
   setcolor(2);
   rectangle(460,300,630,340);
   setcolor(BLUE);
   outtextxy(470,305,"Player 2: ");
   outtextxy(580,305,c1);
   setcolor(WHITE);
   if(active==0)
   outtextxy(445,205,">");
   else
   outtextxy(445,305,">");
}


void pointer(int i,int y,int player)
{
if(player==0)
{setcolor(RED);
}else
{setcolor(BLUE);
circle(i,y,2);
}
setlinestyle(7,1,1);
setfillstyle(2,1);
arc(i,y,-30,210,10);
line(i-9,y+5,i,y+15);
line(i-9,y+5,i,y+15);
arc(i,y,-30,210,9);
line(i-8,y+5,i,y+15);
line(i+8,y+5,i,y+15);
arc(i,y,-30,210,8);
line(i-7,y+5,i,y+15);
line(i+7,y+5,i,y+15);
arc(i,y,-30,210,7);
line(i-6,y+5,i,y+15);
line(i+6,y+5,i,y+15);

}
void movepointer(int i,int y,int j, int k,int l,int i1,int y1,int pp,int pp1,int player,int act)
{
int player1;
if(player==0)
player1=1;
else
player1=0;
  if(i==j)
  {
    if(y>k)
    {
     for(int q=1;q<=abs(y-k)/4;q+=2)
     {
      board(l,pp,pp1,act);
      pointer(i,y-(q*4),player);
      pointer(i1,y1,player1);
  //    delay(10);

     }
    board(l,pp,pp1,act);
    pointer(j,k,player);
    pointer(i1,y1,player1);
    }
    else
    { for(int q=1;q<=abs(y-k)/4;q+=2)
     {
      board(l,pp,pp1,act);
      pointer(i,y+(q*4),player);
      pointer(i1,y1,player1);
  //    delay(10);
     }
    board(l,pp,pp1,act);
    pointer(j,k,player);
    pointer(i1,y1,player1);
    }

  }
  else if(y==k)
  { if(i>j)
   {
    for(int q=1;q<=abs(i-j)/4;q+=2)
    {board(l,pp,pp1,act);
    pointer(i-(q*4),y,player);
    pointer(i1,y1,player1);
   // delay(5);
    }
   board(l,pp,pp1,act);
   pointer(j,k,player);
    pointer(i1,y1,player1);
   }
   else
   {
   for(int q=1;q<=abs(j-i)/4;q+=2)
    {board(l,pp,pp1,act);
    pointer(i+(q*4),y,player);
    pointer(i1,y1,player1);
    //delay(5);
    }
    board(l,pp,pp1,act);
    pointer(j,k,player);
    pointer(i1,y1,player1);
   }
  }
}

void playlogic()
{         int points=0;
int pointsb=0;
randomize();
board(0,0,0,0);
char s[4];
pointer(40,440,0);
pointer(70,440,1);
int active=0;
int flaga=0,flagb=0,p;
int xa=40,ya=440,xb=40,yb=440;
int chance=0;
char c;
 C:
 if(chance==0)
 {active=0;
 goto A;
 }else
 {active=1;
 goto B;
 }



A:
active=0;
board(p,points,pointsb,active);
pointer(xa,ya,0);
 pointer(xb,yb,1);
 c=getch();
if(c==27)
{ menu();
}
else
{     a:
  p= random(7);
 if(p==0)
 goto a;
 rolldice();
 dice(p);
	/*setfillstyle(2,1);
       bar(475,35,495,75);
      sprintf(s,"%d",p);
      settextstyle(3,0,3);
      setcolor(WHITE);
  outtextxy(480,40,s);*/

  if(flaga==0)
   {if(p==1)
    {     points++;
     movepointer(40,440,40,400,p,xb,yb,points,pointsb,0,active);
	xa=40;
	ya=400;
     flaga=1;
     goto A;
    }
    active=1;
   }
    else if(flaga==1)
   { // board();
      points+=p;
      for(int u=0;u<p;u++)
      {
	  if(xa==400&&ya%80==0)
	  {movepointer(xa,ya,xa,ya-40,p,xb,yb,points,pointsb,0,active);
	  ya-=40;
	  }
	  else if(xa==40 && ya%80!=0)
	  {    movepointer(xa,ya,xa,ya-40,p,xb,yb,points,pointsb,0,active);
	  ya-=40;
	  }
	  else if(ya%80==0)
	  {movepointer(xa,ya,xa+40,ya,p,xb,yb,points,pointsb,0,active);
	   xa+=40;
	  }
	  else
	  {
	  movepointer(xa,ya,xa-40,ya,p,xb,yb,points,pointsb,0,active);
	  xa-=40;
	  }
	//  delay(100);
      }

   if((xa==120&&ya==40)||(xa==320&&ya==120)||(xa==120&&ya==200)||(xa==360||ya==280))
    {if(xa==120&&ya==40)
     { points=67;
      movepointer(xa,ya,280,160,p,xb,yb,points,pointsb,0,active);
	   xa=280;
	   ya=160;
     }
     else if(xa=320&&ya==120)
     {   points=47;
      movepointer(xa,ya,280,240,p,xb,yb,points,pointsb,0,active);
	   xa=280;
	   ya=240;
     }
     else if(xa=120&&ya==200)
     {   points=3;
      movepointer(xa,ya,120,400,p,xb,yb,points,pointsb,0,active);
	   xa=120;
	   ya=400;
     }
     else if(xa=360&&ya==280)
     {   points=8;
      movepointer(xa,ya,320,400,p,xb,yb,points,pointsb,0,active);
	   xa=320;
	   ya=400;
     }
   }


      if(p==6)
      {goto A;
      }
   }
   chance=1;
   active=1;
  goto C;
 }


 //player 2
 B:
 active=1;
 board(p,points,pointsb,active);
 pointer(xa,ya,0);
 pointer(xb,yb,1);

c=getch();
if(c==27)
{ menu();
}
else
{     b:
  p= random(7);
 if(p==0)
 goto b;
 rolldice();
 dice(p);
	/*setfillstyle(2,1);
       bar(475,35,495,75);
      sprintf(s,"%d",p);
      settextstyle(3,0,3);
      setcolor(WHITE);
  outtextxy(480,40,s);*/

  if(flagb==0)
   {if(p==1)
    {     pointsb++;
    xb=40;
    yb=400;
     movepointer(40,440,xb,yb,p,xa,ya,points,pointsb,1,active);
     flagb=1;
     goto B;
    }
    active=0;
   }
    else if(flagb==1)


   { // board();
   pointsb+=p;
      for(int u=0;u<p;u++)
      {
	  if(xb==400&&yb%80==0)
	  {movepointer(xb,yb,xb,yb-40,p,xa,ya,points,pointsb,1,active);
	  yb-=40;
	  }
	  else if(xb==40 && yb%80!=0)
	  {    movepointer(xb,yb,xb,yb-40,p,xa,ya,points,pointsb,1,active);
	  yb-=40;
	  }
	  else if(yb%80==0)
	  {movepointer(xb,yb,xb+40,yb,p,xa,ya,points,pointsb,1,active);
	   xb+=40;
	  }
	  else
	  {
	  movepointer(xb,yb,xb-40,yb,p,xa,ya,points,pointsb,1,active);
	  xb-=40;
	  }
	  //delay(100);
      }
   if((xb==120&&yb==40)||(xb==320&&yb==120)||(xb==120&&yb==200)||(xb==360||yb==280))
    {if(xb==120&&yb==40)
     { pointsb=67;
      movepointer(xb,yb,280,160,p,xa,ya,points,pointsb,1,active);
	   xb=280;
	   yb=160;
     }
     else if(xb=320&&yb==120)
     {   pointsb=47;
      movepointer(xb,yb,280,240,p,xa,ya,points,pointsb,1,active);
	   xb=280;
	   yb=240;
     }
     else if(xb=120&&yb==200)
     {   pointsb=3;
      movepointer(xb,yb,120,400,p,xa,ya,points,pointsb,1,active);
	   xb=120;
	   yb=400;
     }
     else if(xb=360&&yb==280)
     {   pointsb=8;
      movepointer(xb,yb,320,400,p,xa,ya,points,pointsb,1,active);
	   xb=320;
	   yb=400;
     }
   }
      if(p==6)
      {goto B;
      }
   }
   chance=0;
   active=0;
  goto C;
 }


}

//end of playlogic function



void exitbutton()
{
//Exit button
setcolor(4);
circle(+600,30,20);
setfillstyle(1,4);
floodfill(600,30,4);

setcolor(14);
settextstyle(4,0,5);
outtextxy(587,4,"X");
}

void loading(int x,int y,int z,int k)
{
//0
if(z==0)
circle(x+25,y,k);
//30
if(z==30)
circle(x+22,y-25/2,k);
//60
if(z==60)
circle(x+25/2,y-22,k);
//90
if(z==90)
circle(x,y-25,k);
//120
if(z==120)
circle(x-25/2,y-22,k);
//150
if(z==150)
circle(x-22,y-25/2,k);
//180
if(z==180)
circle(x-25,y,k);
//210
if(z==210)
circle(x-22,y+25/2,k);
//240
if(z==240)
circle(x-25/2,y+22,k);
//270
if(z==270)
circle(x,y+25,k);
//300
if(z==300)
circle(x+25/2,y+22,k);
//330
if(z==330)
circle(x+22,y+25/2,k);
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
int x=320,y=435,k=3;
int  z=0;
char str[4];
for(int i=3030;i>0;i-=30)
{
setfillstyle(0,1);
bar(x-30,y-30,x+30,y+30);
setcolor(1);
loading(x,y,(i+30)%360,k);
setcolor(2);
loading(x,y,(i+60)%360,k);
setcolor(3);
loading(x,y,(i+90)%360,k);
setcolor(4);
loading(x,y,(i+120)%360,k);
setcolor(5);
loading(x,y,(i+150)%360,k);
setcolor(6);
loading(x,y,(i+180)%360,k);
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
} //end of welcome

void menu()
{clearviewport();
int cords1[]={200,150,500,155,470,195,215,190,200,150};
int cords2[]={210,200,465,205,490,245,205,240,210,205};
int cords3[]={210,255,465,265,500,310,200,309,210,255};
int cords4[]={220,320,460,325,485,365,210,370,220,320};
int cords5[]={253,380,450,375,440,415,280,430,255,380};
//backround
setcolor(2);
setlinestyle(0,1,3);
setfillstyle(2,1);
floodfill(5,5,1);
rectangle(0,0,getmaxx(),getmaxy());

//exitbutton
exitbutton();

//Down dialog box
setfillstyle(1,14);
bar(2,460,637,477);
setcolor(1);
settextstyle(2,0,5);
outtextxy(10,460,"To Move UP or DOWN press W or S respectively");
outtextxy(390,460," To Enter any option press E");


//snake and ladder

settextstyle(4,0,8);
setcolor(11);
outtextxy(22,52,"snake And ladder");
setcolor(11);
outtextxy(25,55,"snake And ladder");
setcolor(11);
outtextxy(24,54,"snake And ladder");
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

settextstyle(10,0,6);
int yy=100;
outtextxy(150,yy,">");
while(1)
{
  char ch;
  ch=getch();
  if(ch=='s')
  { setfillstyle(2,1);
   bar(150,yy+33,200,yy+120);
   if(yy==340)
	 yy=100;
	 else
	 yy+=60;
  }
  else
  {
    if(yy==280)
    about();
    else if(yy==340)
    help();
    else if(yy==160)
    playlogic();
             
  exit(0);
  }
outtextxy(150,yy,">");
}

}

void load()
{int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\tc\\bgi");
rectangle(0,0,getmaxx(),getmaxy());
}
void main()
{load();

//welcome();
menu();
//board();
//playlogic();
getch();
}
