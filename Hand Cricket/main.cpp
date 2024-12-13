#include<graphics.h>
#include<iostream>
#include<time.h>
#include<queue>


using namespace std;

struct{
	double nrr;
	int p1c,p2c,p3c,p4c;
	int p1p,p2p,p3p,p4p;
}stt;
int menu();
int help();
int helpTR();
int helpKpUp();
int play(int,int,int,int,int);
int hand(int,int);
int tournament();
int country(int,int,int);
int country2(int);
int country3(int,int);
int country4(int,int,int);
int plpc(int,int,int,int,int);
int countrytrn(int,int,int,int);
int delivery();
int toss();
int flag(int,int,int,int,int);
void name(int,int,int);
int HCmenu();
int KUmenu();
int pause();
int pauseKpUp();
int HCplay();
int Table();
int TRpause();
int KpUp(int,int);
int KpUphelp();
int KpUppause();
int tossWin();
int KpUplevel();
int main()
{
	initwindow(900,650,"Hand Cricket");
	readimagefile("Open.jpg",0,0,900,650);
	delay(2000);
	menu();
}
int menu()
{	
	int end=0,opt=0,cnt=0;
	while(1)
	{
		setcolor(WHITE);
		delay(10);
		cnt++;
		if(cnt==2)opt=1;
		readimagefile("Main menu.jpg",0,0,900,650);
			if(opt==1)
			{
				rectangle(190,90,610,210);
			}
			else if(opt==2)
			{
				rectangle(190,290,610,410);
			}	
			else if(opt==3)
			{
				rectangle(190,490,610,610);
			}
		delay(10);
		if(GetAsyncKeyState(VK_DOWN)&&opt<3&&opt>0)
		opt++;
		if(GetAsyncKeyState(VK_UP)&&opt>1)
		opt--;
		
		if(GetAsyncKeyState(VK_RETURN))
		{
			if(opt==1)
			{	
				end=HCmenu();			
			}
			else if(opt==2)
			{
				end=KUmenu();		
			}
			else if(opt==3)return 0;
			
			cnt=0;
			opt=0;
		}
	}
	}

int HCmenu()
{

	int end=0,opt=0,cnt=0;
	while(1)
	{
		delay(10);
		cnt++;
		if(cnt==2)opt++;
		if(end==1)return 1;
		readimagefile("HMenu.jpg",0,0,900,650);
			if(opt==1)
			{
				rectangle(190,90,610,210);
			}
			else if(opt==2)
			{
				rectangle(190,290,610,410);
			}	
			else if(opt==3)
			{
				rectangle(190,490,610,610);
			}
			delay(10);
		if(GetAsyncKeyState(VK_DOWN)&&opt<3&&opt>0)opt++;
		
		if(GetAsyncKeyState(VK_UP)&&opt>1)opt--;

		
		if(GetAsyncKeyState(VK_RETURN))
		{
			if(opt==1)
			{
				end=HCplay();
			}
			else if(opt==2)
			{
				end=help();

			}
			else if(opt==3)end =1;			
		}

	}
}
int HCplay(){
	
	delay(10);
	int end=0,opt=0,cnt=0;
	while(1)
	{
		delay(10);
		cnt++;
		if(cnt==2)opt++;
		if(end==1)return 1;
		readimagefile("Hand menu.jpg",0,0,900,650);
			if(opt==1)
			{
				rectangle(190,90,610,210);
			}
			else if(opt==2)
			{
				rectangle(190,290,610,410);
			}	
			else if(opt==3)
			{
				rectangle(190,490,610,610);
			}
		if(GetAsyncKeyState(VK_DOWN)&&opt<3&&opt>0)opt++;
		if(GetAsyncKeyState(VK_UP)&&opt>1)opt--;
		
		if(GetAsyncKeyState(VK_RETURN))
		{
			if(opt==1)
			{
				delay(200);
				closegraph();
				end = play(0,0,0,0,0);
			}
			else if(opt==2)
			{
				cleardevice();
				end=tournament();
			}
			else if(opt==3)end =1;
		}

	}
}
int help()
{
	readimagefile("Help1.jpg",0,0,900,650);
	while(1)
	{
	if(GetAsyncKeyState(VK_ESCAPE))
		{
				cleardevice();
				return 0;			
		}
	}
}

int helpTR()
{
	readimagefile("HelpTR.jpg",0,0,900,650);
	while(1)
	{
	if(GetAsyncKeyState(VK_ESCAPE))
		{
				cleardevice();
				return 0;			
		}
	}
}
int helpKpUp()
{
	readimagefile("HelpKU.jpg",0,0,900,650);
	while(1)
	{
	if(GetAsyncKeyState(VK_ESCAPE))
		{
				cleardevice();
				return 0;			
		}
	}
}

int KpUppause()
{
	int opt=0,end=0,cnt=0;
	while(1)
	{
		setcolor(WHITE);
		delay(10);
		cnt++;
		if(cnt==5)opt=1;
		if(end==1)return 1;
		readimagefile("pauseKU.jpg",0,0,900,650);
			if(opt==1)
			{
				rectangle(290,90,610,160);
			}
			else if(opt==2)
			{
				rectangle(290,240,610,310);
			}	
			else if(opt==3)
			{
				rectangle(290,390,610,460);
			}
			else if(opt==4)
			{
				rectangle(290,540,610,610);
			}
		if(GetAsyncKeyState(VK_DOWN)&&opt<4&&opt>0)opt++;
		if(GetAsyncKeyState(VK_UP)&&opt>1)opt--;
		
		if(GetAsyncKeyState(VK_RETURN))
		{
			if(opt==1)
			{
				cleardevice();
				return 0;
			}
			else if(opt==2)return -1;
			else if(opt==3)end=helpKpUp();
			else if(opt==4)return 1;
		}
		delay(100);
	}
}


int flag(int p1,int x1,int y1,int x2,int y2)
{
	
	if(p1==1)readimagefile("AUS.jpg",x1,y1,x2,y2);
	else if(p1==2)readimagefile("BAN.jpg",x1,y1,x2,y2);
	else if(p1==3)readimagefile("ENG.jpg",x1,y1,x2,y2);
	else if(p1==4)readimagefile("IND.jpg",x1,y1,x2,y2);
	else if(p1==5)readimagefile("NZ.jpg",x1,y1,x2,y2);
	else if(p1==6)readimagefile("PAK.jpg",x1,y1,x2,y2);
	else if(p1==7)readimagefile("SA.jpg",x1,y1,x2,y2);
	else if(p1==8)readimagefile("SL.jpg",x1,y1,x2,y2);
	else if(p1==9)readimagefile("WI.jpg",x1,y1,x2,y2);
}
int hand(int run,int op)
{
	
	cleardevice();
	outtextxy(600,200,"You :");
	delay(200);
	if(run==1)readimagefile("1.jpg",500,300,800,600);
		else if(run==2)readimagefile("2.jpg",500,300,800,600);
		else if(run==3)readimagefile("3.jpg",500,300,800,600);
		else if(run==4)readimagefile("4.jpg",500,300,800,600);
		else if(run==5)readimagefile("5.jpg",500,300,800,600);
		else if(run==6)readimagefile("6.jpg",500,300,800,600);
		delay(500);
		outtextxy(100,200,"Opponent :");
		delay(200);
		if(op==1)readimagefile("1.jpg",100,300,400,600);
		else if(op==2)readimagefile("2.jpg",100,300,400,600);
		else if(op==3)readimagefile("3.jpg",100,300,400,600);
		else if(op==4)readimagefile("4.jpg",100,300,400,600);
		else if(op==5)readimagefile("5.jpg",100,300,400,600);
		else if(op==6)readimagefile("6.jpg",100,300,400,600);
		delay(500);
		if(run==op)
		outtextxy(350,125,"Wicket!");
		outtextxy(200,50,"Press space to continue");
		while(1)
		{
		if(GetAsyncKeyState(VK_SPACE))
		{			
				return 1;		
		}
	}
}
int KUmenu()
{
		
	delay(10);
	int end=0,opt=0,cnt=0;
	while(1)
	{
		setcolor(WHITE);
		delay(100);
		cnt++;
		if(cnt==2)opt++;
		if(end==1)return 1;
		readimagefile("KMenu.jpg",0,0,900,650);
			if(opt==1)
			{
				rectangle(190,90,610,210);
			}
			else if(opt==2)
			{
				rectangle(190,290,610,410);
			}	
			else if(opt==3)
			{
				rectangle(190,490,610,610);
			}
		if(GetAsyncKeyState(VK_DOWN)&&opt<3)opt++;
		if(GetAsyncKeyState(VK_UP)&&opt>1)opt--;
		
		if(GetAsyncKeyState(VK_RETURN))
		{
			if(opt==1)
			{
				end = KpUplevel();
			}
			else if(opt==2)
			{
				cleardevice();
				end=helpKpUp();
			}
			else if(opt==3)end =1;
		}
	}
}
int KpUplevel()
{
		delay(10);
	int end=0,opt=0,cnt=0;
	while(1)
	{
		delay(100);
		cnt++;
		if(cnt==2)opt++;
		if(end==1)return 1;
		if(end==2)end=0;
		readimagefile("KUlevel.jpg",0,0,900,650);
			if(opt==1)
			{
				rectangle(190,90,610,210);
			}
			else if(opt==2)
			{
				rectangle(190,290,610,410);
			}	
			else if(opt==3)
			{
				rectangle(190,490,610,610);
			}
		if(GetAsyncKeyState(VK_DOWN)&&opt<3)opt++;
		if(GetAsyncKeyState(VK_UP)&&opt>1)opt--;
		
		if(GetAsyncKeyState(VK_RETURN))
		{
			if(opt==1)
			{
				delay(200);
				closegraph();
				end = KpUp(1,0);
			}
			else if(opt==2)
			{
				closegraph();
				end=KpUp(2,0);
			}
			else if(opt==3)
			{
				closegraph();
				end=KpUp(3,0);
			}
		}
}
}
void name(int ct,int x,int y)
{
	if(ct==1)outtextxy(x,y,"(AUS)");
	else if(ct==2)outtextxy(x,y,"(BAN)");
	else if(ct==3)outtextxy(x,y,"(ENG)");
	else if(ct==4)outtextxy(x,y,"(IND)");
	else if(ct==5)outtextxy(x,y,"(NZ)");
	else if(ct==6)outtextxy(x,y,"(PAK)");
	else if(ct==7)outtextxy(x,y,"(SA)");
	else if(ct==8)outtextxy(x,y,"(SL)");
	else if(ct==9)outtextxy(x,y,"(WI)");
}
int pause(){
	int opt=0,end=0,cnt=0;
	while(1)
	{
		delay(10);
		cnt++;
		if(cnt==2)opt=1;
		if(end==1)return 1;
		readimagefile("Pause.jpg",0,0,900,650);
			if(opt==1)
			{
				rectangle(190,90,610,210);
			}
			else if(opt==2)
			{
				rectangle(190,290,610,410);
			}	
			else if(opt==3)
			{
				rectangle(190,490,610,610);
			}
		if(GetAsyncKeyState(VK_DOWN)&&opt<3&&opt>0)opt++;
		if(GetAsyncKeyState(VK_UP)&&opt>1)opt--;
		
		if(GetAsyncKeyState(VK_RETURN))
		{
			if(opt==1)
			{
				cleardevice();
				return 0;
			}
			else if(opt==2)end=help();
			else if(opt==3)end=1;
		}
		delay(100);
	}
}
int play(int p1,int p2,int ct1,int ct2,int dl)
{
	
	int ts,ts0,pbf=0,chnc,delv,target,wkc,plr,run1=0,op,ball1=-1,wicket=0,run2=0,ball2=-1,head=0;
	char scoreboard[100];
	int opc;
	srand(time(0));
	initwindow(900,650,"Hand Cricket");
	cleardevice();
	settextstyle(GOTHIC_FONT,HORIZ_DIR,5);
	POINT curPos;
	if(dl==0){
	ct1=country(0,0,0);
	delay(200);
	ct2=country(ct1,0,0);
	closegraph();
	}
	initwindow(900,650,"Hand Cricket");
	cleardevice();
	delay(500);	
	flag(ct1,0,0,300,300);
	flag(ct2,600,350,900,650);
	settextstyle(GOTHIC_FONT,HORIZ_DIR,5);
	outtextxy(400,320,"VS");
	delay(1000);
	cleardevice();
	if(dl==0)
	delv=delivery();
	else delv=dl;
	cleardevice();
    head=toss();
	cleardevice();
	ts = rand()%2;
	if(ts==1)
	{
		readimagefile("Heads.jpg",0,0,900,650);
	}
	else if(ts==0)
	{
		readimagefile("Tails.jpg",0,0,900,650);
	}
	delay(1000);
	cleardevice();
	if(ts==head)
	{
		pbf=tossWin();
	}
	if(ts==head&&pbf==1)
	{
		readimagefile("BatFirstChoice.jpg",0,0,900,650);
		delay(2500);
		cleardevice();
	}
	else if(ts==head&&pbf==0)
	{
		readimagefile("BowlFirstChoice.jpg",0,0,900,650);
		delay(2500);
		cleardevice();
	}
	ts0=rand()%2;
	if(ts!=head&&ts0==0)
	{
		readimagefile("OppoBat.jpg",0,0,900,650);
		delay(2500);
		cleardevice();
	}
	else if(ts!=head&&ts0==1)
	{
		pbf++;
		readimagefile("OppoBowl.jpg",0,0,900,650);
		delay(2500);
		cleardevice();
	}
	queue <int> q1;//queue for storing last 5 balls
	int score[7]={0},sc,prc[7],pr,frnt,max,end=0;//score stores frequency of the index(run)
	double over1;
	//1st innings
	while(1)
	{		
		if(end==1)return -2;
		int temp=0,pos,prdct,sl=0;
		ball1++;
		settextstyle(GOTHIC_FONT,HORIZ_DIR,4);
		if(ball1>0)
		{
			if(pbf==1)
			{
			q1.push(plr);
			score[plr]++;
			}
			if(plr==op){
			wicket++;
			}
			else if(pbf==1)run1+=plr;
			else if(pbf==0)run1+=op;
		
		}
		if(ball1==delv)break;
		else if(wicket==5)break;
		if(q1.size()>5)
		{
			frnt=q1.front();
			q1.pop();
			score[frnt]--;
		}
		if(q1.size()>0){
		for(int i=1;i<7;i++)
		{
			pr=score[i]*100;
            pr/=q1.size();
            prc[i]=pr;
            if(pr>temp)
            {
			temp=pr;
			pos=i;
			}
		}
		}
		max=temp;	
		prdct=rand()%5;
		if(q1.size()==5&&max==60&&prdct%2!=0&&pbf==1)op=pos;
		else if(q1.size()==5&&max==80&&prdct%2==0&pbf==1)op=pos;
		else if(q1.size()==5&&max==100&&prdct<4&&pbf==1)op=pos;	
		else
		{
		op=rand()%3;
		chnc=rand()%10;//chance for bigger number
		if(chnc>2)
		op+=4;
		else if(chnc<=2)
		op+=1;
		}
	int cnt=0,opt=0,brk=0;
	plr=0;
	
	while(1)
	{
	delay(10);
	
	if(brk==1)break;
	if(cnt==2)opt=1;
	settextstyle(GOTHIC_FONT,HORIZ_DIR,4);
	readimagefile("Choice.jpg",0,0,900,650);
	over1=(ball1/6)+(double)(ball1%6)*0.1;
	sprintf(scoreboard,"     %d-%d     Ov-%0.1f",run1,wicket,over1);
	outtextxy(240,200,scoreboard);
	rectangle(100,190,800,240);
	if(pbf==1)outtextxy(100,50,"Batting now: Player");
	else outtextxy(100,50,"Batting now: Opponent");
	if(pbf==1)
	{
		settextstyle(GOTHIC_FONT,HORIZ_DIR,4);
		name(ct1,160,200);
		name(ct2,610,200);
		flag(ct1,105,200,155,230);
		flag(ct2,745,200,795,230);
	}
	if(pbf==0)
	{
		settextstyle(GOTHIC_FONT,HORIZ_DIR,4);
		name(ct1,610,200);
		name(ct2,160,200);
		flag(ct2,105,200,155,230);
		flag(ct1,745,200,795,230);
	}		
			if(opt==1)
			{
				rectangle(190,290,310,410);
			}
			else if(opt==2)
			{
				rectangle(390,290,510,410);
			}			
			else if(opt==3)
			{
				rectangle(590,290,710,410);
			}
			else if(opt==4)
			{
				rectangle(190,490,310,610);
			}
			else if(opt==5)
			{
				rectangle(390,490,510,610);
			}
			else if(opt==6)
			{
				rectangle(590,490,710,610);
			}
		while(1)
		{
		if(GetAsyncKeyState(VK_DOWN)&&opt<4&&opt>0)
		{
			opt+=3;
			break;
		}
		if(GetAsyncKeyState(VK_UP)&&opt>3)
		{
			opt-=3;
			break;
		}
		if(GetAsyncKeyState(VK_RIGHT)&&opt<6)
		{
			opt++;
			break;
		}
		if(GetAsyncKeyState(VK_LEFT)&&opt>1)
		{
			opt--;
			break;
		}
		if(GetAsyncKeyState(VK_ESCAPE)&&dl==0)
		{
			cleardevice();
			sl=pause();
			if(sl==1)return 1;//quit in the pause menu returns 1
			if(sl==0)//resume in the pause menu return 0
			break;
		}
		if(GetAsyncKeyState(VK_ESCAPE)&&dl!=0)
		{
				cleardevice();
				sl=TRpause();
				if(sl==1)return -2;
				if(sl==0)
				break;
		}
		if(GetAsyncKeyState(VK_RETURN))
		{
			if(opt==1)
			{
				plr+=1;		
			}
			else if(opt==2)
			{
				plr+=2;	
			}
			else if(opt==3)
			{
				plr+=3;	
			}
			else if(opt==4)
			{
				plr+=4;				
			}
			else if(opt==5)
			{
				plr+=5;		
			}
			else if(opt==6)
			{
				plr+=6;		
			}
			else 
			{
				continue;
			}
				sl=hand(plr,op);
				brk=1;
				if(sl==1)	
				break;
		}
		if(cnt<2)break;
		}
		cnt++;
	}	
}

cleardevice();
int wckt1,wckt2;
readimagefile("inningsbrk.jpg",0,0,900,650);
target=run1+1;
char trgt[50],runs[50];
sprintf(runs,"1st Innings runs: %d",run1);
outtextxy(50,200,runs);
sprintf(trgt,"Target :%d",target);
outtextxy(50,300,trgt);
delay(5000);
cleardevice();
wckt1=wicket;
wicket=0;
	queue <int> q2;
	int score2[7]={0},sc2,prc2[7],pr2,frnt2,max2;
	double over2;
//2nd innings
while(1)
		{	
		if(end==1)return 1;	
		int temp2=0,pos2,prdct2,sl2=0;
		ball2++;
		
		if(ball2>0)
		{
			if(pbf==0)
			{
			q2.push(plr);
			score2[plr]++;
			}
			if(plr==op){
			wicket++;
			}
			else if(pbf==0)run2+=plr;
			else if(pbf==1)run2+=op;	
		}
		if(ball2==delv)break;
		else if(target<=run2)break;
		else if(wicket==5)break;
		if(q2.size()>5)
		{
			frnt2=q2.front();
			q2.pop();
			score2[frnt2]--;
		}
		if(q2.size()>0){
		for(int i=1;i<7;i++)
		{
			pr2=score2[i]*100;
            pr2/=q2.size();
            prc2[i]=pr2;
            if(pr2>temp2)
            {
			temp2=pr2;
			pos2=i;
			}
		}
		}
		max2=temp2;
		
		prdct2=rand()%5;
		if(q2.size()==5&&max2==60&&prdct2%2!=0&&pbf==0)op=pos2;
		else if(q2.size()==5&&max2==80&&prdct2%2==0&pbf==0)op=pos2;
		else if(q2.size()==5&&max2==100&&prdct2<4&&pbf==0)op=pos2;	
		else if(ball2==delv-1&&target-run2<6)
		{
			int dif1,dif2;
			dif2=target-run2;
			dif1=6-dif2+1;
			op= rand()%dif1;
			op+=dif2;
		}
		else if(target-run2==6)
		{
			int lbc=rand()%2;
			if(lbc==0)op=6;
			if(lbc==1)op=5;
		}
		else{
		op=rand()%3;
		chnc=rand()%10;
		if(chnc>2)
		op+=4;
		else if(chnc<=2)
		op+=1;
		}
	
		int cnt=0,opt=0,brk=0;
		over2=(ball2/6)+(double)(ball2%6)*0.1;
	
		plr=0;
	while(1)
	{
	delay(10);
	if(brk==1)break;
	if(cnt==2)opt=1;
	settextstyle(GOTHIC_FONT,HORIZ_DIR,4);
	readimagefile("Choice.jpg",0,0,900,650);
	
	sprintf(scoreboard,"     %d-%d     Ov-%0.1f",run2,wicket,over2);
	outtextxy(240,200,scoreboard);
	rectangle(100,190,800,240);
	outtextxy(500,100,trgt);
	if(pbf==0)outtextxy(100,50,"Batting now: Player");
	else outtextxy(100,50,"Batting now: Opponent");
	if(pbf==0)
	{
		settextstyle(GOTHIC_FONT,HORIZ_DIR,4);
		name(ct1,160,200);
		name(ct2,610,200);
		flag(ct1,105,200,155,230);
		flag(ct2,745,200,795,230);
	}
	else if(pbf==1)
	{
		settextstyle(GOTHIC_FONT,HORIZ_DIR,4);
		name(ct1,610,200);
		name(ct2,160,200);
		flag(ct2,105,200,155,230);
		flag(ct1,745,200,795,230);
	}

			if(opt==1)
			{
				rectangle(190,290,310,410);
			}
			else if(opt==2)
			{
				rectangle(390,290,510,410);
			}			
			else if(opt==3)
			{
				rectangle(590,290,710,410);
			}
			else if(opt==4)
			{
				rectangle(190,490,310,610);
			}
			else if(opt==5)
			{
				rectangle(390,490,510,610);
			}
			else if(opt==6)
			{
				rectangle(590,490,710,610);
			}
		while(1)
		{
	
		//cleardevice();
		if(GetAsyncKeyState(VK_DOWN)&&opt<4&&opt>0)
		{
			opt+=3;
			break;
		}
		if(GetAsyncKeyState(VK_UP)&&opt>3)
		{
			opt-=3;
			break;
		}
		if(GetAsyncKeyState(VK_RIGHT)&&opt<6)
		{
			opt++;
			break;
		}
		if(GetAsyncKeyState(VK_LEFT)&&opt>1)
		{
			opt--;
			break;
		}
		if(GetAsyncKeyState(VK_ESCAPE)&&dl==0)
		{
			cleardevice();
			sl2=pause();
			if(sl2==1)return 1;//quit in the pause menu returns 1
			if(sl2==0)//resume in the pause menu return 0
			break;
		}
		if(GetAsyncKeyState(VK_ESCAPE)&&dl!=0)
		{
				cleardevice();
				sl2=TRpause();
				if(sl2==1)return -2;
				if(sl2==0)
				break;
		}
		if(GetAsyncKeyState(VK_RETURN))
		{
			if(opt==1)
			{
				plr+=1;		
			}
			else if(opt==2)
			{
				plr+=2;	
			}
			else if(opt==3)
			{
				plr+=3;	
			}
			else if(opt==4)
			{
				plr+=4;				
			}
			else if(opt==5)
			{
				plr+=5;		
			}
			else if(opt==6)
			{
				plr+=6;		
			}
			else 
			{
				continue;
			}
				sl2=hand(plr,op);
				brk=1;
				if(sl2==1)	
				break;
		}
		if(cnt<2)break;
		}
		cnt++;
	}	
	
}
		cleardevice();
		wckt2=wicket;
		double rr1,rr2,nr;
		over1=(double)ball1/6;
		over2=(double)ball2/6;
		if(wckt1==5){
		over1=(double)delv/6;
		}
		
		if(wckt2==5){
		over2=(double)delv/6;
		}
		
		rr1=(double)run1/over1;//run rate of team which batted first
		rr2=(double)run2/over2;//run rate of team which batted second
		if(pbf==1)
		{
		nr=rr1-rr2;
		stt.nrr=nr;
		}
		else if(pbf==0)
		{
		nr=rr2-rr1;
		stt.nrr=nr;
		}
		readimagefile("MatchOver.jpg",0,0,900,650);
		int win,winct;
		char res[100];
		if(target<=run2)
		{
			if(pbf==1){
				win=p2;
				flag(ct2,100,500,200,600);
				sprintf(res,"has won the match with %d",5-wckt2);
				outtextxy(250,500,res);
				outtextxy(250,550,"wickets remaining!");
			}
			else if(pbf==0){
				win=p1;
				flag(ct1,100,500,200,600);
				sprintf(res,"has won the match with %d",5-wckt2);
				outtextxy(250,500,res);
				outtextxy(250,550,"wickets remaining!");
		}
		}
		else if(run2<run1)
		{
			if(pbf==1){
				win=p1;
				flag(ct1,100,500,200,600);
	
				sprintf(res,"has won the match by %d runs",run1-run2);
				outtextxy(250,500,res);		
			}
			else if(pbf==0)
			{
				win=p2;
				flag(ct2,100,500,200,600);
				sprintf(res,"has won the match by %d runs",run1-run2);
				outtextxy(250,500,res);
		}
		}
		else if(run1==run2)
		{
			win = -1;
			outtextxy(250,500,"The match has been tied");
		}
		
		char xy[50],yz[50];
		if(pbf==1)flag(ct1,100,100,200,200);
		else if(pbf==0)flag(ct1,100,300,200,400);
		sprintf(xy,"1st innings:%d-%d",run1,wckt1);
		outtextxy(250,100,xy);
		if(pbf==0)flag(ct2,100,100,200,200);
		else if(pbf==1)flag(ct2,100,300,200,400);
		sprintf(yz,"2nd innings:%d-%d",run2,wckt2);
		outtextxy(250,300,yz);
		int pl;
		delay(5000);
		closegraph();
		if(dl==0&&win==-1)
		{
			pl=KpUp(2,1);
			cleardevice();
			if(pl==1)
			{
				flag(ct1,100,300,200,400);	
				outtextxy(250,325,"Has won the match in a tiebreaker");
				delay(5000);	
			}
			else 
			{
				flag(ct2,100,300,200,400);
				outtextxy(250,325,"Has won the match in a tiebreaker");
				delay(5000);	
			}
		}
		if(dl==0)
		{
			return 1;
		}
		
	else return win;		
}
int Table()
{	
		char pos1[50],pos2[50],pos3[50],pos4[50];
		cleardevice();
		delay(100);
		settextstyle(GOTHIC_FONT,HORIZ_DIR,4);
		outtextxy(20,10,"<-(Esc)");
		outtextxy(90,50,"Team                  Points");
		flag(stt.p1c,100,100,200,200);
        sprintf(pos1,"%d ",stt.p1p);
        outtextxy(500,120,pos1);
        flag(stt.p2c,100,250,200,350);
        sprintf(pos2,"%d ",stt.p2p);
        outtextxy(500,270,pos2);
        flag(stt.p3c,100,400,200,500);
        sprintf(pos3,"%d ",stt.p3p);
        outtextxy(500,420,pos3);
        flag(stt.p4c,100,550,200,650);
        sprintf(pos4,"%d",stt.p4p);
        outtextxy(500,570,pos4);
        while(1){
		if(GetAsyncKeyState(VK_ESCAPE))return 0;
	}
}
int tournament()
{
int team[4]={0},stnd[4],win[4]={0},wn,delv,wnp;
double nr,nrr[4]={0};
    for(int i=0;i<4;i++)
    {
        stnd[i]=i;
    }
    for(int i=0;i<4;i++)
    {
        if(i==0)team[i]=country(0,0,0);
        else if(i==1)team[i]=country(team[i-1],0,0);
        else if(i==2)team[i]=country(team[i-2],team[i-1],0);
        else if(i==3)team[i]=country(team[i-3],team[i-2],team[i-1]);
        cleardevice();
        delay(100);
    }
    stt.p1c=team[0];
    stt.p2c=team[1];
    stt.p3c=team[2];
    stt.p4c=team[3];
    stt.p1p=0;
	stt.p2p=0;
	stt.p3p=0;
	stt.p4p=0;
    closegraph();
    initwindow(900,650,"Hand Cricket");
    delv=delivery();
    closegraph();
    for(int i=1;i<4;i++)
    {
        int cur[4]={0},wintmp[4],nrrtmp[4];
        wn=play(0,4-i,team[0],team[4-i],delv);
        if(wn==-2)return 1;
        if(wn>=0)win[wn]+=3;
        else if(wn==-1)
        {
            win[0]+=1;
            win[4-i]+=1;
        }
        cur[0]=1;
        cur[4-i]=1;
        nr=stt.nrr;
        nrr[0]+=nr;
        nrr[4-i]+=nr*(-1);
        int c1=0,c2=0,c1pos,c2pos;
        for(int i=1;i<4;i++)
        {
            if(cur[i]==0)
            {
                if(c1==1){
                c2=1;
                c2pos=i;
                }
                else {
                c1=1;
                c1pos=i;
                }
                cur[i]=1;
            }
        }
        wnp=plpc(c1pos,c2pos,team[c1pos],team[c2pos],delv);
        nr=stt.nrr;
        cleardevice();
        delay(1000);
        nrr[c1pos]+=nr;
        nrr[c2pos]+=nr*(-1);
        if(wnp>0)win[wnp]+=3;
        else
        {
            win[c1pos]+=1;
            win[c2pos]+=1;
        }
        for(int i=0;i<4;i++)wintmp[i]=win[i];
        for(int i=0;i<4;i++)nrrtmp[i]=nrr[i];
        
        for(int i=0;i<4;i++){
            stnd[i]=i;
        }
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3-i;j++)
            {
                if(wintmp[j]<wintmp[j+1])
                {
                    swap(wintmp[j],wintmp[j+1]);
                    swap(stnd[j],stnd[j+1]);
                    swap(nrrtmp[j],nrrtmp[j+1]);
                }
            }
        }
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3-i;j++)
            {
                if(wintmp[j]==wintmp[j+1])
                {
                if(nrrtmp[j]<nrrtmp[j+1])
                {
                    swap(nrrtmp[j],nrrtmp[j+1]);
                    swap(stnd[j],stnd[j+1]);
                }
                }
            }
        }
        
   
        closegraph();
        stt.p1c=team[stnd[0]];
        stt.p2c=team[stnd[1]];
        stt.p3c=team[stnd[2]];
        stt.p4c=team[stnd[3]];
        stt.p1p=wintmp[0];
        stt.p2p=wintmp[1];
        stt.p3p=wintmp[2];
        stt.p4p=wintmp[3];
    }
    	
    	initwindow(900,650,"Hand Cricket");
        char pos1[50],pos2[50],pos3[50],pos4[50];
        settextstyle(GOTHIC_FONT,HORIZ_DIR,4);
		outtextxy(90,50,"Team                  Points");
		flag(stt.p1c,100,100,200,200);
        sprintf(pos1,"%d ",stt.p1p);
        outtextxy(500,120,pos1);
        flag(stt.p2c,100,250,200,350);
        sprintf(pos2,"%d ",stt.p2p);
        outtextxy(500,270,pos2);
        flag(stt.p3c,100,400,200,500);
        sprintf(pos3,"%d ",stt.p3p);
        outtextxy(500,420,pos3);
        flag(stt.p4c,100,550,200,650);
        sprintf(pos4,"%d",stt.p4p);
        outtextxy(500,570,pos4);
        delay(5000);
        closegraph();
        int final[2],p1,p2;
        final[0]=stnd[0];
        final[1]=stnd[1];
        if(final[0]==0||final[1]==0)
        {
            p1=0;
            for(int i=0;i<2;i++)
            {
                if(final[i]!=0)
                p2=final[i];
            }
            wn=play(p1,p2,team[p1],team[p2],delv);
            initwindow(900,650,"Hand Cricket");
			if(wn==0)
			{
				readimagefile("trwin",0,0,900,650);
			}
			else if(wn==-1){
            	wn=team[final[0]];
            	settextstyle(GOTHIC_FONT,HORIZ_DIR,5);
       			outtextxy(50,50,"Winner of the tournament: ");
            	flag(team[wn],0,200,900,650);
			}
            else
            {
            	settextstyle(GOTHIC_FONT,HORIZ_DIR,5);
            	outtextxy(50,50,"Winner of the tournament: ");
            	flag(team[wn],0,200,900,650);
			}
            delay(5000);
            cleardevice();
			
        }
        else
        {
			initwindow(900,650,"Hand Cricket");
            wn=plpc(final[0],final[1],team[final[0]],team[final[1]],delv);
            if(wn==-1){
            	wn=team[final[0]];
			}
            cleardevice();
            settextstyle(GOTHIC_FONT,HORIZ_DIR,5);
           	outtextxy(50,50,"Winner of the tournament: ");
           	flag(team[wn],0,200,900,650);
            delay(5000);
            cleardevice();
        }
        
    }

int TRpause()
{
	int opt=0,end=0,cnt=0;
	while(1)
	{
		delay(10);
		cnt++;
		if(cnt==2)opt=1;
		if(end==1)return 1;
		readimagefile("TRpause.jpg",0,0,900,650);
			if(opt==1)
			{
				rectangle(290,90,610,160);
			}
			else if(opt==2)
			{
				rectangle(290,240,610,310);
			}	
			else if(opt==3)
			{
				rectangle(290,390,610,460);
			}
			else if(opt==4)
			{
				rectangle(290,540,610,610);
			}
		if(GetAsyncKeyState(VK_DOWN)&&opt<4&&opt>0)opt++;
		if(GetAsyncKeyState(VK_UP)&&opt>1)opt--;
		
		if(GetAsyncKeyState(VK_RETURN))
		{
			if(opt==1)
			{
				cleardevice();
				return 0;
			}
			else if(opt==2)end=Table();
			else if(opt==3)end=helpTR();
			else if(opt==4)return 1;
		}
		delay(100);
	}
}

int country(int plc,int plc2,int plc3)
{	
	
	int end=0,opt=0,cnt=0,page=0;
	while(1)
	{
		delay(10);
		cnt++;
		setactivepage(page);
	   	setvisualpage(1-page);
	   	cleardevice();
		if(cnt==2)opt++;
		if(end==1)return 1;
		readimagefile("Country.jpg",0,0,900,650);
		settextstyle(GOTHIC_FONT,HORIZ_DIR,5);
		if(plc==0&&plc2==0&&plc3==0)
		outtextxy(25,40,"Choose your team: ");
		else
		outtextxy(25,40,"Choose Opponent's team: ");
		setcolor(WHITE);
			if(opt==1)
			{
				rectangle(190,90,310,210);
			}
			else if(opt==2)
			{
				rectangle(390,90,510,210);
			}	
			else if(opt==3)
			{
				rectangle(590,90,710,210);
			}
			else if(opt==4)
			{
				rectangle(190,290,310,410);
			}
			else if(opt==5)
			{
				rectangle(390,290,510,410);
			}			
			else if(opt==6)
			{
				rectangle(590,290,710,410);
			}
			else if(opt==7)
			{
				rectangle(190,490,310,610);
			}
			else if(opt==8)
			{
				rectangle(390,490,510,610);
			}
			else if(opt==9)
			{
				rectangle(590,490,710,610);
			}
			
		setfillstyle(SOLID_FILL,WHITE);
		setcolor(WHITE);
		if(plc==1||plc2==1||plc3==1)
		{
			
			rectangle(200,100,300,200);
			floodfill(250,150,WHITE);
		}
		if(plc==2||plc2==2||plc3==2)
		{
			rectangle(400,100,500,200);
			floodfill(450,150,WHITE);
		}
		if(plc==3||plc2==3||plc3==3)
		{
			rectangle(600,100,700,200);
			floodfill(650,150,WHITE);
		}
		if(plc==4||plc2==4||plc3==4)
		{
			rectangle(200,300,300,400);
			floodfill(250,350,WHITE);
		}
		if(plc==5||plc2==5||plc3==5)
		{
			rectangle(400,300,500,400);
			floodfill(450,350,WHITE);
		}
		if(plc==6||plc2==6||plc3==6)
		{
			rectangle(600,300,700,400);
			floodfill(650,350,WHITE);
		}
		if(plc==7||plc2==7||plc3==7)
		{
			rectangle(200,500,300,600);
			floodfill(250,550,WHITE);
		}
		if(plc==8||plc2==8||plc3==8)
		{
			rectangle(400,500,500,600);
			floodfill(450,550,WHITE);
		}
		if(plc==9||plc2==9||plc3==9)
		{
			rectangle(600,500,700,600);
			floodfill(650,550,WHITE);
		}
		if(GetAsyncKeyState(VK_DOWN)&&opt<7&&opt>0)opt+=3;
		if(GetAsyncKeyState(VK_UP)&&opt>3)opt-=3;
		if(GetAsyncKeyState(VK_RIGHT)&&opt<9)opt++;
		if(GetAsyncKeyState(VK_LEFT)&&opt>1)opt--;
		
		if(GetAsyncKeyState(VK_RETURN))
		{
			if(opt==1&&plc!=1&&plc2!=1&&plc3!=1)
			{
				return opt;
			}
			else if(opt==2&&plc!=2&&plc2!=2&&plc3!=2)
			{
				return opt;
			}
			else if(opt==3&&plc!=3&&plc2!=3&&plc3!=3)
			{
				return opt;
			}
			else if(opt==4&&plc!=4&&plc2!=4&&plc3!=4)
			{
				return opt;
			}
			else if(opt==5&&plc!=5&&plc2!=5&&plc3!=5)
			{
				return opt;
			}
			else if(opt==6&&plc!=6&&plc2!=6&&plc3!=6)
			{
				return opt;
			}
			else if(opt==7&&plc!=7&&plc2!=7&&plc3!=7)
			{
				return opt;
			}
			else if(opt==8&&plc!=8&&plc2!=8&&plc3!=8)
			{
				return opt;
			}
			else if(opt==9&&plc!=9&&plc2!=9&&plc3!=9)
			{
				return opt;
			}
		}

		page=1-page;
	}
	
}

int toss()
{	
	int opt=0,cnt=0;
	while(1)
	{
		delay(10);
		cnt++;
		if(cnt==2)opt=1;
		readimagefile("Toss.jpg",0,0,900,650);
			if(opt==1)
			{
				rectangle(190,390,310,510);
			}
			else if(opt==2)
			{
				rectangle(565,390,685,510);
			}
		delay(10);
		if(GetAsyncKeyState(VK_LEFT)&&opt==2)
		opt--;
		if(GetAsyncKeyState(VK_RIGHT)&&opt==1)
		opt++;
		
		if(GetAsyncKeyState(VK_RETURN))
		{
			if(opt==1)
			{	
				return 1;			
			}
			else if(opt==2)
			{
				return 0;		
			}
		}
	}		
}
int tossWin()
{
	int opt=0,cnt=0;
	while(1)
	{
		delay(10);
		cnt++;
		if(cnt==2)opt=1;
		readimagefile("TossWin.jpg",0,0,900,650);
			if(opt==1)
			{
				rectangle(140,340,360,510);
			}
			else if(opt==2)
			{
				rectangle(590,340,810,510);
			}
		delay(10);
		if(GetAsyncKeyState(VK_LEFT)&&opt==2)
		opt--;
		if(GetAsyncKeyState(VK_RIGHT)&&opt==1)
		opt++;
		
		if(GetAsyncKeyState(VK_RETURN))
		{
			if(opt==1)
			{	
				return 1;			
			}
			else if(opt==2)
			{
				return 0;		
			}
		}
	}		
}

int delivery()
{
	delay(10);
	int end=0,opt=0,cnt=0;
	while(1)
	{
		delay(10);
		cnt++;
		if(cnt==2)opt++;
		readimagefile("Deliveries.jpg",0,0,900,650);
			if(opt==1)
			{
				rectangle(190,90,610,210);
			}
			else if(opt==2)
			{
				rectangle(190,290,610,410);
			}	
			else if(opt==3)
			{
				rectangle(190,490,610,610);
			}
		if(GetAsyncKeyState(VK_DOWN)&&opt<3&&opt>0)opt++;
		if(GetAsyncKeyState(VK_UP)&&opt>1)opt--;
		
		if(GetAsyncKeyState(VK_RETURN))
		{
			if(opt==1)
			{
				return 12;
			}
			else if(opt==2)
			{
				return 30;
			}
			else if(opt==3)
			{
				return 60;
			}
		}
	}
}
 int plpc(int p1,int p2,int c1,int c2,int delv)
{
	int bat,ball1=-1,ball2=-1,wck1=0,wck2=0,run1=0,run2=0,op1,op2,win=0;
	double over1,over2,nr,rr1,rr2;
	srand(time(0));
	cleardevice();
	flag(c1,0,0,300,300);
	flag(c2,600,350,900,650);
	settextstyle(GOTHIC_FONT,HORIZ_DIR,5);
	outtextxy(400,320,"VS");
	delay(1000);
	int toss=rand()%2;
	if(toss==0)bat=0;
	else bat=1;
	//1st innings
	while(1)
	{
		ball1++;
		if(wck1==5)break;
		else if(ball1==delv)break;
		op1=rand()%6;
		op2=rand()%6;
		op1++;
		op2++;
		if(op1==op2)wck1++;
		else if(op1!=op2)
		{
			if(bat==0)run1+=op1;
			else run1+=op2;
		}
	}
	int target=run1+1;

	//2nd innings
	while(1)
	{
		ball2++;
		if(wck2==5)break;
		else if(ball2==delv)break;
		else if(run2>=target)break;
		op1=rand()%6;
		op2=rand()%6;
		op1++;
		op2++;
		if(op1==op2)wck2++;
		else if(op1!=op2)
		{
			if(bat==1)run2+=op1;
			else run2+=op2;
		}
	}
	//run1=1st innings run,run2=2nd innings run
	if((bat==0&&run1>run2)||(bat==1&&run2>=target))win=p1;
	else if((bat==1&&run1>run2)||(bat==0&&run2>=target))win=p2;
	else if(run1==run2)win=-1;
	
	over1=(double)ball1/6;
	over2=(double)ball2/6;
	
	if(wck1==5){
		over1=(double)delv/6;
	}
	if(wck2==5){
		over2=(double)delv/6;
	}
	rr1=(double)run1/over1;
	rr2=(double)run2/over2;
	if(bat==0)
	{
		nr=rr1-rr2;
		stt.nrr=nr;
	}
	if(bat==1)
	{
		nr=rr2-rr1;
		stt.nrr=nr;
	}
	cleardevice();
	char xy[50],yz[50];
	settextstyle(GOTHIC_FONT,HORIZ_DIR,4);
		if(bat==0)flag(c1,100,100,200,200);
		else if(bat==1)flag(c1,100,300,200,400);
		sprintf(xy,"1st innings:%d-%d",run1,wck1);
		outtextxy(250,100,xy);
		if(bat==1)flag(c2,100,100,200,200);
		else if(bat==0)flag(c2,100,300,200,400);
		sprintf(yz,"2nd innings:%d-%d",run2,wck2);
		outtextxy(250,300,yz);
		
		char res[100];
		if(target<=run2)
		{
			if(bat==0){
				win=p2;
				flag(c2,100,500,200,600);
				sprintf(res,"has won the match with %d",5-wck2);
				outtextxy(250,500,res);
				outtextxy(250,550,"wickets remaining!");
			}
			else if(bat==1){
				win=p1;
				flag(c1,100,500,200,600);
				sprintf(res,"has won the match with %d",5-wck2);
				outtextxy(250,500,res);
				outtextxy(250,550,"wickets remaining!");
		}
		}
		else if(run2<run1)
		{
			if(bat==0){
				win=p1;
				flag(c1,100,500,200,600);
	
				sprintf(res,"has won the match by %d runs",run1-run2);
				outtextxy(250,500,res);
		
			}
			else if(bat==1)
			{
				win=p2;
				flag(c2,100,500,200,600);
				sprintf(res,"has won the match by %d runs",run1-run2);
				outtextxy(250,500,res);
		}
		}
		else if(run1==run2)
		{
			win = -1;
			outtextxy(250,500,"The match has been tied");
		}
	delay(5000);
	cleardevice();
	return win;
}

int KpUp(int dif,int sng)
{
	srand(time(0));
	initwindow(900,650,"Keepie Uppie");
	char xy[100],yz[100];
	int b1,b2,b3,b4,dec,yspd,target;
	
	if(sng==1)
	{
		target=rand()%50;
		target+=50;
	}
	int end=0;
		if(dif==1)
	{
		b1=-1;
		b2=-3;
		b3=1;
		b4=4;
		yspd=15;
		dec=3;
	}else if(dif==2)
	{
		b1=-2;
		b2=-4;
		b3=2;
		b4=4;
		yspd=18;
		dec=2;
	}else if(dif==3)
	{
		b1=-2;
		b2=-5;
		b3=3;
		b4=5;
		yspd=20;
		dec=2;
	}	
	while(1)
	{
	cleardevice();
	int xinc=0,yinc=5,xdir=xinc,ydir=yinc;
	int x1=getmaxx()/2,x2=x1+200,y1=getmaxy()-100,y2,shutx=0,shuty=0;
	int x=getmaxx()/2,y=30;
	long long time=0,time2=0,score=0;	
	while(1)
	{
		
		int act=0;
	   	cleardevice();
	   	setbkcolor(WHITE);
	   	settextstyle(GOTHIC_FONT,HORIZ_DIR,2);
	   	
	
		sprintf(xy,"Score: %d",score);
		outtextxy(50,50,xy);
		if(sng==1)
		{
		sprintf(yz,"Target: %d",target);
		outtextxy(500,50,yz);
		}
	
			if(GetAsyncKeyState(VK_ESCAPE))
			{
				end=KpUppause();
				if(end==0)end=0;
				if(end==1)return 1;
				if(end==-1)
				{
				return 2;
				}
			}
			if(GetAsyncKeyState(VK_SPACE))act=1;
			setcolor(GREEN);
			if(act==0){//bat in down position
			line(x1,y1,x1-3,y1+8);//handle left
			line(x1-3,y1+8,x1+57,y1+30);//handle bottom
			line(x1,y1,x1+188,y1+68);//bat top
			line(x1+186,y1+76,x1+188,y1+68);//bat toe
			line(x1+186,y1+76,x1+163,y1+80);//bat toe back
			line(x1+57,y1+30,x1+163,y1+80);//bat back
			time2=0;
		}
			else if(act==1){//bat in up position
			line(x1,y1,x1+200,y1);
			line(x1,y1,x1,y1+10);
			line(x1,y1+10,x1+50,y1+10);
			line(x1+50,y1+10,x1+180,y1+20);
			line(x1+180,y1+20,x1+200,y1+10);
			line(x1+200,y1,x1+200,y1+10);
			time2++;
		}
	
        setfillstyle(SOLID_FILL, BLUE);
        floodfill(x1+1, y1+1, GREEN);
            if(y>=getmaxy())
            {
            	if(sng==0)
            	break;
            	else 
				return 0;			
			}
			if(sng==1&&score>=target)
			{
			//	break;
				return 1;
			}
			if(ydir<0&&time%dec==0)ydir++;
    		if(ydir>=0&&ydir<yspd&&time%2==0)ydir++;
    		if(y<=10)
    		{
    			ydir*=-1;
    			shuty=20;
			}
 
			if(act==1&&shuty==0&&y>y1-20&&y<=y1&&x>=x1&&x<=x2&&time2<5)
			{
			
			if(x>=x1&&x<=x1+50)
			{			
				xdir=b1;
				ydir=yspd-3;
			}
			else if(x>x1+50&&x<=x1+125)
			{
				xdir=b2;
				ydir=yspd;	
			}
			else if(x>x1+125&&x<=x2-50)
			{
				xdir=b3;
				ydir=yspd;
			}
			else if(x>x2-50&&x<=x2)
			{
				xdir=b4;
				ydir=yspd;		
			}
			
			if(y<y1-10)y-=y-y1+10;
			if(y>y1+10)y+=y-y1+10;
			
				score+=5;
				ydir*=-1;
				shuty=20;
				time=0;
		}
		if(shuty>0)shuty--;
		
		if(shutx==0&&(x<=15||x >= getmaxx()-15))
        {
        	if(x<=15)
        	{	
        	xdir*=-1;
        	shutx=2;
        	score-=2;
        	}
        	else if(x >= getmaxx()-15)
        	{
        	xdir*=-1;
        	shutx=2;
        	score-=2;
        }
        
		}
		if(shutx>0)shutx--;
		
        setcolor(RED);
        setfillstyle(SOLID_FILL, RED);
        circle(x, y, 10);
        floodfill(x, y, RED);
        x=x+xdir;
        y=y+ydir;
        if(x2<getmaxx()){
		if(GetAsyncKeyState(VK_RIGHT))
		{
			x1+=5;
			x2+=5;
		}
	}
		if(x1>0){
		if(GetAsyncKeyState(VK_LEFT))
		{
			x1-=5;
			x2-=5;
		}
}	
		delay(40);
		time++;
	}
	cleardevice();
	
		
		
	int board=1;
	
	while(1)
	{			
		if(board==100)board=1;
		if(GetAsyncKeyState(VK_RETURN))break;
		if(GetAsyncKeyState(VK_ESCAPE))return 1;
		setcolor(BLACK);
		settextstyle(GOTHIC_FONT,HORIZ_DIR,5);
  	 	sprintf(xy,"Score:%d",score);
 	  	outtextxy(260,300,xy);
 	  	outtextxy(100,500,"Press Enter to restart");
 	  	outtextxy(100,600,"Press Escape to quit");
		if(board%3==2)
		setcolor(BLUE);
		else if(board%3==1)
		setcolor(GREEN);
		else if(board%3==0)
		setcolor(YELLOW);
		int x1=250,y1=290,x2=600,y2=350;
		rectangle(x1-20,y1-20,x2+20,y2+20);
		rectangle(x1-10,y1-10,x2+10,y2+10);
		rectangle(x1,y1,x2,y2);
		
		delay(100);
		board++;
	}
				
}
}

