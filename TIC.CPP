#include<graphics.h>
#include<stdlib.h>
#include<conio.h>
#include<dos.h>
#include<stdio.h>
int flag[8]={3,3,3,3,3,3,3,3};
void win();
void lose();
void main()
{
clrscr();
int ch;
int a,diff();
void comint_in();
void draw();
void checkwin();
void take_in();
void com_in();
again:
int gd=DETECT,gm;
initgraph(&gd,&gm,"c:\\bgi");

a=diff();
setbkcolor(3);
setcolor(BLUE);
rectangle(110,10,620,479);
rectangle(0,10,109,479);
setcolor(YELLOW);
rectangle(140,40,490,300);
line(256,40,256,300);
line(372,40,372,300);
line(140,126,490,126);
line(140,212,490,212);
setcolor(WHITE);
outtextxy(256,20,"TIC TAC TOE(A Systackers product");
if(a==1)
{
take_in();
com_in();
take_in();
comint_in();
take_in();
checkwin();
com_in();
checkwin();
take_in();
checkwin();
comint_in();
checkwin();
draw();
}
else
{
take_in();
com_in();
take_in();
comint_in();
take_in();
checkwin();
comint_in();
checkwin();
take_in();
checkwin();
comint_in();
checkwin();
draw();
}
clrscr();
setbkcolor(0);
printf("\n\n\n\n\n\n\n\n\n\t\t\tWant to play More\n\t\t\t1.Yes\n\t\t\t2.NO");
scanf("%d",&ch);
if(ch==1)
{
goto again;
}
getch();
}
//-----------------------------------------------------------------------
void draw()
{
clrscr();
setbkcolor(10);
printf("\n\n\n\n\n\n\n\t\t\t\tSorry!GAME DRAW");

}
//---------------------------------------------------------------------
int diff()
{
clrscr();
int f;
setbkcolor(2);
printf("\n\n\n\n\n\n\n\t\t\tChoose difficulty.\n\t\t\t1.Easy\n\t\t\t2.Hard");
scanf("%d",&f);
clrscr();
return f;
}

//--------------------------------------------------------
void com_in()
{
int p;
randomize();
point:
p=random(9);
 if(flag[p]==0||flag[p]==1)
 {
 goto point;
 }
setcolor(WHITE);
switch (p)
{
case 0:
circle(198,83,23);
flag[0]=1;
break;
case 1:
circle(314,83,23);
flag[1]=1;
break;
case 2:
circle(431,83,23);
flag[2]=1;
break;
case 3:
flag[3]=1;
circle(198,169,23);
break;
case 4:
circle(314,169,23);
flag[4]=1;
break;
case 5:
circle(431,169,23);
flag[5]=1;
break;
case 6:
circle(198,256,23);
flag[6]=1;
break;
case 7:
circle(314,256,23);
flag[7]=1;
break;
case 8:
circle(431,256,23);
flag[8]=1;
break;
default : printf("NOOOOOOOOOOOOOOOOOOOooo");
}

}
//-----------------------------------------------
void take_in()
{
int f;
printf("\n\n Enter\n field:");
scanf("%d",&f);
sound(100);
delay(10);
setcolor(BLUE);
switch (f)
{
case 1:
circle(198,83,23);
flag[0]=0;
break;
case 2:
circle(314,83,23);
flag[1]=0;
break;
case 3:
circle(431,83,23);
flag[2]=0;
break;
case 4:
flag[3]=0;
circle(198,169,23);
break;
case 5:
circle(314,169,23);
flag[4]=0;
break;
case 6:
circle(431,169,23);
flag[5]=0;
break;
case 7:
circle(198,256,23);
flag[6]=0;
break;
case 8:
circle(314,256,23);
flag[7]=0;
break;
case 9:
circle(431,256,23);
flag[8]=0;
break;
}
nosound();
}
//-----------------------------------------------------------------------
void comint_in()
{
setcolor(WHITE);
 if((flag[0]==0)&&(flag[1]==0))
 {
  if((flag[2]==0)||(flag[2]==1))
  {
   com_in();
   goto dest;
  }
  circle(431,83,23);
  flag[2]=1;
  goto dest;
 }
 if((flag[1]==0)&&(flag[2]==0))
 {
  if(flag[0]==0||flag[0]==1)
   {
    com_in();
    goto dest;
   }
 circle(198,83,23);
 flag[0]=1;
 goto dest;
 }
 if((flag[0]==0)&&(flag[2]==0))
 {
  if(flag[1]==0||flag[1]==1)
  {
   com_in();
   goto dest;
  }
 circle(314,83,23);
 flag[1]=1;
 goto dest;
 }
 if((flag[3]==0)&&(flag[4]==0))
 {
   if(flag[5]==0||flag[5]==1)
  {
   com_in();
   goto dest;
  }
 circle(431,169,23);
 flag[5]=1;
 goto dest;
 }
 if((flag[4]==0)&&(flag[5]==0))
 {
   if(flag[3]==0||flag[3]==1)
   {
    com_in();
    goto dest;
   }
  flag[3]=1;
  circle(198,169,23);
 goto dest;
 }
 if((flag[3]==0)&&(flag[5]==0))
 {
   if(flag[4]==0||flag[4]==1)
  {
   com_in();
   goto dest;
  }
 circle(314,169,23);
 flag[4]=1;
 goto dest;
 }
 if((flag[6]==0)&&(flag[7]==0))
 {
    if(flag[8]==0||flag[8]==1)
  {
   com_in();
   goto dest;
  }
  circle(431,256,23);
 flag[8]=1;
 goto dest;
 }
 if((flag[7]==0)&&(flag[8]==0))
 {
    if(flag[6]==0||flag[6]==1)
  {
   com_in();
   goto dest;
  }
  circle(198,256,23);
  flag[6]=1;
 goto dest;
 }
 if((flag[6]==0)&&(flag[8]==0))
 {
     if(flag[7]==0||flag[7]==1)
  {
   com_in();
   goto dest;
  }
  circle(314,256,23);
  flag[7]=1;
 goto dest;
 }
 if((flag[0]==0)&&(flag[3]==0))
 {
     if(flag[6]==0||flag[6]==1)
  {
   com_in();
   goto dest;
  }
  circle(198,256,23);
  flag[6]=1;
 goto dest;
 }
 if((flag[0]==0)&&(flag[6]==0))
 {
   if(flag[3]==0||flag[3]==1)
  {
   com_in();
   goto dest;
  }
  flag[3]=1;
  circle(198,169,23);
 goto dest;
 }
 if((flag[3]==0)&&(flag[6]==0))
 {
     if(flag[0]==0||flag[0]==1)
  {
   com_in();
   goto dest;
  }
 circle(198,83,23);
 flag[0]=1;
 goto dest;
 }
 if((flag[1]==0)&&(flag[4]==0))
 {
     if(flag[7]==0||flag[7]==1)
  {
   com_in();
   goto dest;
  }
 circle(314,256,23);
  flag[7]=1;
  goto dest;
 }
 if((flag[1]==0)&&(flag[7]==0))
 {
    if(flag[4]==0||flag[4]==1)
    {
     com_in();
     goto dest;
    }
  circle(314,169,23);
 flag[4]=1;
 goto dest;
 }
 if((flag[4]==0)&&(flag[7]==0))
 {
    if(flag[1]==0||flag[1]==1)
  {
   com_in();
   goto dest;
  }
 circle(314,83,23);
 flag[1]=1;
 goto dest;
 }
 if((flag[2]==0)&&(flag[5]==0))
 {
    if(flag[8]==0||flag[8]==1)
    {
     com_in();
     goto dest;
    }
 circle(431,256,23);
 flag[8]=1;
 goto dest;
 }
 if((flag[5]==0)&&(flag[8]==0))
 {
    if(flag[2]==0||flag[2]==1)
  {
   com_in();
   goto dest;
  }
   circle(431,83,23);
  flag[2]=1;
  goto dest;
 }
 if((flag[2]==0)&&(flag[8]==0))
 {
    if(flag[5]==0||flag[5]==1)
    {
     com_in();
     goto dest;
    }
  circle(431,169,23);
 flag[5]=1;
  goto dest;
 }
 if((flag[0]==0)&&(flag[4]==0))
 {
    if(flag[8]==0||flag[8]==1)
  {
   com_in();
   goto dest;
  }
  circle(431,256,23);
 flag[8]=1;
  goto dest;
 }
 if((flag[5]==0)&&(flag[8]==0))
 {
     if(flag[0]==0||flag[0]==1)
  {
   com_in();
   goto dest;
  }
  circle(198,83,23);
 flag[0]=1;
  goto dest;
 }
 if((flag[0]==0)&&(flag[8]==0))
 {
     if(flag[4]==0||flag[4]==1)
  {
   com_in();
   goto dest;
  }
  circle(314,169,23);
   flag[4]=1;
  goto dest;
 }
 if((flag[2]==0)&&(flag[4]==0))
 {
      if(flag[6]==0||flag[6]==1)
  {
   com_in();
   goto dest;
  }
  circle(198,256,23);
  flag[6]=1;
  goto dest;
 }
 if((flag[4]==0)&&(flag[6]==0))
 {
      if(flag[2]==0||flag[2]==1)
  {
   com_in();
   goto dest;
  }
  circle(431,83,23);
  flag[2]=1;
  goto dest;
 }
 if((flag[2]==0)&&(flag[6]==0))
 {
     if(flag[4]==0||flag[4]==1)
  {
   com_in();
   goto dest;
  }
 circle(314,169,23);
 flag[4]=1;
  goto dest;
 }
dest:
}
//--------------------------------------------------------------------------
void checkwin()
{
for(int i=0;i<=6;i=i+3)      //for horizontal
{
if((flag[i]==flag[i+1])&&(flag[i+1]==flag[i+2]))
{
 if(flag[i]==0)
 {
 win();
 }
 if(flag[i]==1)
 {
 lose();
 }
}
}
for(int j=0;j<=2;j++)           //for vertical
{
 if((flag[j]==flag[j+3])&&(flag[j+3]==flag[j+6]))
 {
  if(flag[j]==0)
  {
  win();
  }
  if(flag[j]==1)
  {
  lose();
  }
 }
}
		 //for diagnolly
if((flag[0]==flag[4])&&(flag[4]==flag[8]))
 {
  if(flag[0]==0)
  {
  win();
  }
  if(flag[0]==1)
  {
  lose();
  }
 }

if((flag[2]==flag[4])&&(flag[4]==flag[6]))
 {
  if(flag[2]==0)
  {
  win();
  }
  if(flag[2]==1)
  {
  lose();
  }
 }

}
//-----------------------------------------------------------------------
void win()
{
delay(20);
clrscr();
setbkcolor(5);
printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\tYOU WIN");
getch();
exit(0);
}
void lose()
{
delay(20);
clrscr();
setbkcolor(10);
printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\tYOU LOSE");
getch();
exit(0);
}