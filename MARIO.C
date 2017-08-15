#include<dos.h>
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<graphics.h>
//moveto(250,50);
void main()
{
 int i,x,y;
 char w,s;
 int gdrive=DETECT,gmode,f=80,h=15,l=15,k=0;
 initgraph(&gdrive,&gmode,"C:\\Turboc3\\BGI");
// line(0,380,800,380);
 setbkcolor(LIGHTBLUE);
 setfillstyle(1,BROWN);
 bar(0,380,800,500);
 //line(10,380,10,470);
 x=0;
 //ellipse(100,100,0,360,60,25);
 for(i=1;i<=5;i++)
 {
   line(10+x,380,10+x,500);
   line(20+x,380,20+x,500);
   x=x+150;
 }
 line(0,430,800,430);
 x=250;y=200;
 setfillstyle(1,YELLOW);
 //setcolor(RED);

 bar(350,100,390,130);
 settextstyle(0,0,2);
 setcolor(RED);
 outtextxy(360,110,"?");
 for(i=1;i<=3;i++)
 {
  //outtextxy(x+10,y+10,"?");
  bar(x,y,x+40,y+30);
  //setcolor(RED);
   outtextxy(x+10,y+10,"?");
  x=x+100;
 }
  setcolor(YELLOW);
// setfillstyle(1,BLACK);
ellipse(90,50,60,240,10,15);
ellipse(115,40,345,165,20,15);
ellipse(152,47,340,160,20,15);
ellipse(158,66,230,50,20,15);
ellipse(127,70,185,350,20,15);
ellipse(90,70,120,350,20,17);
 setfillstyle(1,LIGHTRED);
 setcolor(LIGHTGRAY);
 outtextxy(200,280,"1 player game");
 outtextxy(200,320,"2 player game");
 setcolor(RED);
 settextstyle(1,0,4);
  outtextxy(190,40,"SUPER MARIO BROS");
  settextstyle(0,0,1);
  outtextxy(410,80,"BY RACHIT VERMA");     /*
 setbkcolor(LIGHTBLUE);
  getch();
  setbkcolor(CYAN);
  getch();
  setbkcolor(GREEN);
  getch();
  setbkcolor(MAGENTA); */
  bar(170,280,190,297);
    while(!kbhit())
  {
    setcolor(MAGENTA);
   // ellipse(f,300,0,180,50,30);
   // line(f-50,300,f+50,300);
    circle(f-20,315,15);
    circle(f-15,320,3);
    ellipse(f-20,346,0,360,17,15); // line(f,300,f,350);
    //line(f-20,330,f-20,375);
    //line(f-20,375,f-20-l,380);
    //line(f-20,375,f-20+l,380);
    line(f-20,340,f,350);
    line(f-18,345,f+2,355);
    line(f-30,340,f-30-h,345);
    line(f,350,f+2,355);
    ellipse(f-3,350,305,50,8,5);
    line(f+1,350,f+4,348);
    setcolor(0);
 /*   delay(50);
    //move the man
    ellipse(f,300,0,180,50,30);
    line(f-50,300,f+50,300);
    line(f,300,f,350);
    circle(f-20,315,15);
    circle(f-15,320,3);
    line(f-20,330,f-20,375);
    line(f-20,375,f-20-l,380);
    line(f-20,375,f-20+l,380);
    line(f-20,340,f,350);
    line(f-20,340,f-20-h,360);
    f++;
    l--;
    if(l==-15)
    l=15;
    if(k==1)
    h++;
    else
    h--;
    if(h==15)
    k=0;
    else if(h==-15)
    k=1;
    if(f==640)
    exit;
  }*/
}

 getch();
}