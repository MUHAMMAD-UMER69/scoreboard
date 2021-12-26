#include<iostream>
#include<iomanip>
#include <fstream>
using namespace std;
struct pbScore
{
	int size;
	int i;
	int j;
	int bw;
	char c[10];
	double check;
 
pbScore()
{
	i=0;
	bw=0;
	check =-0.2;
	j=6;
}


	
	void ball(char a)
	{ 



	 if(i==j){
	//c[0]=a; 
	i=0;
}
	 if(a=='W')
	 {
	 	bw++;
	 	
	 	c[i]=a;
	 i++;
	 }
	 else {
	 	c[i]=a;
	 i++;
	 }
	
	

	for(int k=i;k<10;k++){
//		if(k!=0){
		
		c[k]='\0';
//	}
	
	}
if (check==0.4)
{ 
	j=6;
	check=-0.2;
	
}	
	
	}
void showpbdata(bool a)
{
	if (a==true)
	{
		check =check+0.1;
		
//	cout<<check<<endl;
	}
	else if(a==false&&check!=0.4)
	{
		j++;
	}
	
	
	

	
	

	
	
	for(int i=0;i<j;i++)
{
	if(i==j-1)
	cout<<c[i];
	else
	cout<<c[i]<<"-";
	
			}



	
	}	
};

class playing_players
{
	protected :
		pbScore PBS;
		string player_name;
		int player_score;
		int player_balls;
		
		double player_overs;
	
		
	public :
		virtual int getscore(int a)=0;
		virtual int getballs(bool a)=0;
		virtual double getovers(bool a)=0;
		virtual string getname(string a)=0; 
		virtual void setscore(int a)=0;
		virtual void setballs(int a)=0;
	
		virtual void setname(string a)=0;
		virtual void setover(double a)=0;
		
	
};
class striker : public playing_players
{
	
   public :
	striker()
	{player_balls=0;
	 player_score=0;
	}
	void setname(string a){
	}
	void setover(double a){
	}
	void setscore(int a){
		player_score=a;
	}
	void setballs(int a){
		player_balls=a;
	}
	
	int getscore(int a){
			player_score=player_score+a;
		return player_score;
	}
	int getballs(bool a){
			if (a==true)
		{
			player_balls=player_balls+1;
			return player_balls;
		}
		else 
		return player_balls;
	}
	double getovers(bool a){
	return player_overs;}
    string getname(string a){
    	player_name=a;
		return player_name;
	} 
	};
class nonstriker : public playing_players
{
	
   public :
	nonstriker()
	{player_balls=0;
	 player_score=0;
	}
		void setname(string a){
	}
	void setover(double a){
	}
	void setscore(int a){
		player_score=a;
	}
	void setballs(int a){
		player_balls=a;
	}
int getscore(int a){
	player_score=player_score+a;
		return player_score;
	}
	int getballs(bool a){
		if (a==true)
		{
			player_balls=player_balls+1;
			return player_balls;
		}
		else 
		return player_balls;
	}
	double getovers(bool a){
		return player_overs;
	}
    string getname(string a){
    	player_name=a;
		return player_name;
	} };
class bowler : public playing_players
{
double checkover;
public :
	
char pbscore[6];
bowler()
{
		checkover=-0.2;
		player_score=0;
		
		player_overs=0;
}
	void setname(string a){ player_name=a;
	}
	void setover(double a){
		player_overs=a;
	}
void setscore(int a){
		player_score=a;
	}
	void setballs(int a){
		player_balls=a;
	}

	int getscore(int a){
		player_score=player_score+a;
		return player_score;
	}
	int getballs(bool a){
		return player_balls;
	}
	double getovers(bool a){
			if (a==true)
	{
		checkover=checkover+0.1;
		player_overs=player_overs+0.1;
		
		if (checkover==0.4)
		{
		
		player_overs=player_overs+checkover;
		checkover=-0.2;
		return player_overs;
	}
		return player_overs;
	}
	else
	return player_overs;
	}
    string getname(string a){
    	player_name=a;
		return player_name;
	} 
	};
class team //: public playing_players , public striker , public nonstriker
 {
	private :
		
		//bat
		string t1players[6];
		string t2players[6];
		int tscore;
		int wickets;
		string batting_team;
		string bowling_team;
		string t1name;
		string t2name;
		string p1name;
		string p2name;
		int p1score;
		int p2score;
		int p1balls;
		int p2balls;
		// bat ball
		string venue;
		double tovers;
		//bowler
		string bname;
		int btscore;
		int bballs;
		int bwickets;
		double bover;
		char pbscore[6];
		int toss;
		// balls
		int ballscore;
		int ball;
	// batball
	int batball;
		
		public :
			
			string* gett1players()
			{ return t1players;
			}
		string* gett2players()
			{ return t2players;
			}
		int gettscore()
			{ return tscore;
			}
		int getwickets()
			{ return wickets;
			}
		string gett1name()
			{ return t1name;
			}
		string gett2name()
			{ return t2name;
			}
		string getp1name()
			{ return p1name;
			}
		string getp2name()
			{ return p2name;
			}
		int getp1score()
			{ return p1score;
			}
		int getp2score()
			{ return p2score;
			}
		int getp1balls()
			{ return p1balls;
			}
		int getp2balls()
			{ return p2balls;
			}
		string getvenue()
		{ return venue;
		}
		double gettovers()
		{
			return tovers;
		}
		string getbname()
		{
			return bname;
		}
		int getbtscore()
		{
			return btscore;
		}
		int getbballs()
		{
			return bballs;
		}
		int getbwickets()
		{
			return bwickets;
		}
		double getbover()
		{
			return bover;
		}
		char* getpbscore ()
		{ return pbscore;
		}
		int gettoss()
		{
			return toss;
		}
		int getballscore()
		{ return ballscore;
		}
		int getball()
		{ return ball;
		}
		
		
	
	team (){
		
		
		 tscore =0;
		 wickets=0;
		 bowling_team =" TEAM 1 ";
		 batting_team =" TEAM 2 ";
		 p1name =" PLAYER 1 ";
		 p2name =" PLAYER 2 ";
		 p1score=0;
		 p2score=0;
		 p1balls=0;
		 p2balls=0;
		// bat ball
		// venue=" DUBAI ";
		 tovers=0;
		//bowler
		 bname=" BOWLER 1 ";
		 btscore=0;
		 bballs=0;
		 bwickets=0;
		 bover=0;
	pbscore[6]=0;
		 toss='H';
		// balls
		 ballscore=0;
		 ball=0;
	}	
	
	void setbattingteam(string s)
	{
		batting_team=s;
	}
	void setbowlingteam(string s){
	bowling_team=s;
	}
		
		void settscore( int s)
			{ tscore = s;
			}
		void setwickets( int s)
			{ wickets = s;
			}
		void sett1name(string s)
			{ t1name = s;
			}
		void sett2name(string s)
			{ t2name = s;
			}
		void setp1name(string s)
			{ p1name =s;
			}
		void setp2name(string s)
			{ p2name =s;
			}
		void setp1score(int s)
			{ p1score =s;
			}
		void setp2score(int s)
			{ p2score =s;
			}
		void setp1balls(int s)
			{ p1balls =s;
			}
		void setp2balls(int s)
			{ p2balls =s;
			}
		void setvenue(string s)
		{ venue = s;
		}
		void settovers(double s)
		{
			tovers =s;
		}
		
		void setbname(string s)
		{
			bname =s;
		}
		void setbtscore(int s)
		{
			btscore =s;
		}
		 void setbballs(int s)
		{
			bballs =s;
		}
		 void setbwickets(int s)
		{
		 	bwickets =s;
		}
		void setbover(double s)
		{
			bover =s;
		}
		void  setpbscore(char s[] , int size)
		{
			for(int i=0;i<size;i++)
			{ pbscore[i]=s[i];
			}
					}
		void  settoss(int s)
		{
			toss =s;
		}
		void  setballscore(int s)
		{ ballscore =s;
		}
		void  setball(int s)
		{ ball=s;
		}
		
		void displaydata(){
cout<<endl<<endl<<endl;
cout<<left<<setw(15)<<p1name<<p1score<<right<<setw(2)<<"("<<p1balls<<left<<setw(2)<<")"<<right<<setw(9)<<bowling_team<<right<<setw(1)<<""<<"vs"<<right<<setw(1)<<""<<left<<setw(9)<<batting_team<<right<<setw(1)<<""<<tscore<<"-"<<wickets<<right<<setw(4)<<tovers<<left<<setw(6)<<""<<left<<setw(12)<<bname<<""<<bwickets<<"-"<<btscore<<right<<setw(1)<<""<<bover<<endl;
cout<<left<<setw(15)<<p2name<<p2score<<right<<setw(2)<<"("<<p2balls<<left<<setw(2)<<")"<<right<<setw(14)<<venue<<right<<setw(22)<<"";



			
		}
		string inputinitaildata()
		{ 
			cout<<" WELLCOME PLZ ENTER THE VENUE ";cin>>venue;
			cout<<" ENTER THE NAME OF TEAM 1     ";cin>>t1name;
			cout<<" ENTER THE NAME OF TEAM 2     ";cin>>t2name;
			cout<<" ENTER PLAYER NAMES (TEAM 1)  "<<endl;
			for(int i=0;i<6;i++)
			{
				cout<<" PLAYER ("<<i+1<<") ";
				cin>>t1players[i];
			}
			cout<<" ENTER PLAYER NAMES (TEAM 2)  "<<endl;
			for(int t=0;t<6;t++)
			{
				cout<<" PLAYER ("<<t+1<<") ";
				cin>>t2players[t];
			}
			cout<<" WAIT FOR THE TOSS ......"<<endl;
			cout<<" WHO WON THE TOSS ? PRESS \"1\" FOR TEAM 1 \"2\" FOR TEAM 2 ";cin>>toss;
			
			cout<<" WHAT WINING TEAM WANTS TO DO ? PRESS \"1\" TO  BAT \"2\" TO BALL ";cin>>batball;
			system("CLS");
			if(toss==1&&batball==1)
			{
				cout<<" "<<t1name<<" WON THE TOSS AND DECIDED TO BAT FIRST "<<endl;
				batting_team=t1name;
				bowling_team=t2name;
				return "11";
			}
			if(toss==2&&batball==1)
			{
				cout<<" "<<t2name<<" WON THE TOSS AND DECIDED TO BAT FIRST "<<endl;
				batting_team=t2name;
				bowling_team=t1name;
				return "21";
			}
			if(toss==1&&batball==2)
			{
				cout<<" "<<t1name<<" WON THE TOSS AND DECIDED TO BALL FIRST "<<endl;
				batting_team=t2name;
				bowling_team=t1name;
				return "12";
			}
			if(toss==2&&batball==2)
			{
				cout<<" "<<t2name<<" WON THE TOSS AND DECIDED TO BAll FIRST "<<endl;
				batting_team=t1name;
				bowling_team=t2name;
				return "22";
			}
			return "11";
		}
		void disdatacomplete()
		{
			
			displaydata();
		
		}

		
/*
dot = 0;		
no = 1 + freehit + ball again
wide 1 + ball again
1
2
4
6*/	
		
};
void displayt1playernames(string * g )
{

	for (int i=0;i<=5;i++){
		cout<<endl<<" PLAYER ("<<(i+1)<<") OF TEAM 1 "<<*(g+i)<<endl;
		
	}
	
}
void displayt2playernames( string *h)
{

		for (int j=0;j<=5;j++){
		cout<<endl<<" PLAYER ("<<(j+1)<<") OF TEAM 2 "<<*(h+j)<<endl;
		
	}
}

class bowler_store
{
	protected:
	int wickets[6];
	int score[6];
	double overs[6];
public :
	
bowler_store()
{
	for(int i=0;i<6;i++)
	{
		wickets[i]=0;
		score[i]=0;
		overs[i]=0;
	}
}
void store( int a, int s, int w, double o)
{
		wickets[a]=w;
		score[a]=s;
		overs[a]=o;
}
int getwic(int a)
{
	return wickets[a];
}
int getscore(int a)
{
	return score[a];
}
double getovers(int a)
{
	return overs[a];
}
	
};


class live 
{
protected :
	bowler_store Q;
	string venue;
	int striker_score;
	int striker_balls;
	string striker_name;
	string nonstriker_name;
	int nonstriker_score;
	int nonstriker_balls;
	string bowler_name;
	int bowler_wickets;
	int bowler_score;
	double bowler_overs;
	int total_score;
	double total_overs;
	int total_wickets;
	int pbpball_score[6];
	playing_players *P;
	striker s;
	nonstriker ns;
	bowler b;
	pbScore sp;
	team T;
	string  battingt;
	string  bowlingt;
	//int bowlerchange;
	int firsts;
	int firstns;
	int firstb;
	int A;
	int B;
	int C;
	int i;
	int checkout;
  //string checks;
//	string checkns;
//	string checkb;
	double checkover;
	bool SP;
	bool c;
	int w;
	int ba;
public :

	live(){
		c=false;
		w=0;
		ba=0;
	 striker_score=0;
	 striker_balls=0;
	striker_name="STRIKE";
	nonstriker_name="NONSTRIKE";
	nonstriker_score=0;
	nonstriker_balls=0;
	bowler_name="BOWLER";
	bowler_wickets=0;
	bowler_score=0;
	bowler_overs=0;
	total_score=0;
	total_overs=0;
	total_wickets=0;
	//bowlerchange=0;
	firsts=0;
	firstns=0;
	firstb=0;
	A=0;
	B=0;
	C=0;
	i=0;
	checkover=-0.2;
	checkout=0;
		
	}
	void setsetsetdisdisdisplay(char a)
	{
		T.setvenue(venue);
	T.setp1name(striker_name);
	T.setp2name(nonstriker_name);
	T.setp1score(striker_score);
	T.setp2score(nonstriker_score);
	T.setp1balls(striker_balls);
	T.setp2balls(nonstriker_balls);
	T.settscore(total_score);
	T.setwickets(total_wickets);
	T.settovers(total_overs);
	T.setbname(bowler_name);
	
	T.setbtscore(bowler_score);
	T.setbover(bowler_overs);

	
	sp.ball(a);
	bowler_wickets=sp.bw;
	T.setbwickets(sp.bw);
	T.disdatacomplete();
	if(a=='n'||a=='N'||a=='w')
	sp.showpbdata(false);
	else
	sp.showpbdata(true);
	cout<<endl<<endl<<endl;
	
	
	
	}
	
	int getA()
	{
		return A;
	}
	int getB()
	{
		return B;
	}
	
	void setfirsts(int a)
	{ firsts =a;
	}
	void setfirstns(int a)
	{ firstns=a;
	}
	void setfirstb(int a)
	{ firstb=a;
	}



	bool setstrikerpplayers (string t1n, string t2n ,string ven,string * t1 , string * t2, string bb)
{ venue=ven;

	if(bb=="11")
{ 	T.setbattingteam(t1n);
	T.setbowlingteam(t2n);

	if (firsts==-1)	
{
	if(checkout==A)
	{// cout<<*(t1+(A-1))<<striker_score<<striker_balls<<endl;


cout<<"WHICH PLAYER IS GOING TO STRIKE ? ENTER PLAYER NO. ";	cin>>i;
checkout=i;
P=&s;
P->setscore(0);
P->setballs(0);
striker_name=P->getname(*(t1+(i-1)));
A=i;
firsts++;
firsts++;
return true;
}
else if (checkout==B)
{
cout<<"WHICH PLAYER IS GOING TO STRIKE ? ENTER PLAYER NO. ";	cin>>i;
checkout=i;
P=&ns;
P->setscore(0);
P->setballs(0);
nonstriker_name=P->getname(*(t1+(i-1)));
B=i;
firstns++;
firstns++;
firsts++;
firsts++;
return true;	
}
	
}
if (firsts==0)
{
cout<<"WHICH PLAYER IS GOING TO STRIKE ? ENTER PLAYER NO. ";	cin>>i;
checkout=i;
P=&s;
striker_name=P->getname(*(t1+(i-1)));
A=i;
firsts++;
return true;}
	cout<<"WHICH PLAYER IS GOING TO STRIKE ? ENTER PLAYER NO. ";	cin>>i;
	checkout=i;

	if (A==i)
	{
	
		return true;
	}
	else if (A!=i)
	{
		return false;
	}
	

firsts++;
firsts++;
	
	}
	if(bb=="21")
	{
	T.setbattingteam(t2n);
	T.setbowlingteam(t1n);
	if (firsts==-1)	
{
	if(checkout==A)
	{// cout<<*(t1+(A-1))<<striker_score<<striker_balls<<endl;

cout<<"WHICH PLAYER IS GOING TO STRIKE ? ENTER PLAYER NO. ";	cin>>i;
checkout=i;
P=&s;
P->setscore(0);
P->setballs(0);
striker_name=P->getname(*(t2+(i-1)));
A=i;
firsts++;
firsts++;
return true;
}
else if (checkout==B)
{
cout<<"WHICH PLAYER IS GOING TO STRIKE ? ENTER PLAYER NO. ";	cin>>i;
checkout=i;
P=&ns;
P->setscore(0);
P->setballs(0);
nonstriker_name=P->getname(*(t2+(i-1)));
B=i;
firstns++;
firstns++;
firsts++;
firsts++;
return true;	
}
	
}
if (firsts==0)
{
cout<<"WHICH PLAYER IS GOING TO STRIKE ? ENTER PLAYER NO. ";	cin>>i;
checkout=i;
P=&s;
striker_name=P->getname(*(t2+(i-1)));
A=i;
firsts++;
return true;}



	cout<<"WHICH PLAYER IS GOING TO STRIKE ? ENTER PLAYER NO. ";	cin>>i;
	checkout=i;

	if (A==i)
	{
	
		return true;
	}
	else if (A!=i)
	{
		return false;
	}
	

firsts++;
firsts++;
	}

	
	if(bb=="12")
	{
	T.setbattingteam(t2n);
	T.setbowlingteam(t1n);
if (firsts==-1)	
{
	if(checkout==A)
	{// cout<<*(t1+(A-1))<<striker_score<<striker_balls<<endl;

cout<<"WHICH PLAYER IS GOING TO STRIKE ? ENTER PLAYER NO. ";	cin>>i;
checkout=i;
P=&s;
P->setscore(0);
P->setballs(0);
striker_name=P->getname(*(t2+(i-1)));
A=i;
firsts++;
firsts++;
return true;
}
else if (checkout==B)
{
cout<<"WHICH PLAYER IS GOING TO STRIKE ? ENTER PLAYER NO. ";	cin>>i;
checkout=i;
P=&ns;
P->setscore(0);
P->setballs(0);
nonstriker_name=P->getname(*(t2+(i-1)));
B=i;
firstns++;
firstns++;
firsts++;
firsts++;
return true;	
}
	
}
if (firsts==0)
{
cout<<"WHICH PLAYER IS GOING TO STRIKE ? ENTER PLAYER NO. ";	cin>>i;
checkout=i;
P=&s;
striker_name=P->getname(*(t2+(i-1)));
A=i;
firsts++;
return true;}



	cout<<"WHICH PLAYER IS GOING TO STRIKE ? ENTER PLAYER NO. ";	cin>>i;
	checkout=i;

	if (A==i)
	{
	
		return true;
	}
	else if (A!=i)
	{
		return false;
	}
	

firsts++;
firsts++;
}
	if(bb=="22")
	{
		T.setbattingteam(t1n);
		T.setbowlingteam(t2n);
		if (firsts==-1)	
{
	if(checkout==A)
	{// cout<<*(t1+(A-1))<<striker_score<<striker_balls<<endl;


cout<<"WHICH PLAYER IS GOING TO STRIKE ? ENTER PLAYER NO. ";	cin>>i;
checkout=i;
P=&s;
P->setscore(0);
P->setballs(0);
striker_name=P->getname(*(t1+(i-1)));
A=i;
firsts++;
firsts++;
return true;
}
else if (checkout==B)
{
cout<<"WHICH PLAYER IS GOING TO STRIKE ? ENTER PLAYER NO. ";	cin>>i;
checkout=i;
P=&ns;
P->setscore(0);
P->setballs(0);
nonstriker_name=P->getname(*(t1+(i-1)));
B=i;
firstns++;
firstns++;
firsts++;
firsts++;
return true;	
}
	
}
if (firsts==0)
{
cout<<"WHICH PLAYER IS GOING TO STRIKE ? ENTER PLAYER NO. ";	cin>>i;
checkout=i;
P=&s;
striker_name=P->getname(*(t1+(i-1)));
A=i;
firsts++;
return true;}
	cout<<"WHICH PLAYER IS GOING TO STRIKE ? ENTER PLAYER NO. ";	cin>>i;
	checkout=i;

	if (A==i)
	{
	
		return true;
	}
	else if (A!=i)
	{
		return false;
	}
	

firsts++;
firsts++;
}

	}




bool setnonstrikerpplayers (string t1n, string t2n ,string ven,string * t1 , string * t2, string bb)
{ 

if(bb=="11")
{ 	T.setbattingteam(t1n);
	T.setbowlingteam(t2n);

if (firstns==-1)
{ 
if(checkout==B)	
{ // cout<<*(t1+(B-1))<<nonstriker_score<<nonstriker_balls<<endl;
cout<<"WHICH PLAYER IS GOING TO NONSTRIKE ? ENTER PLAYER NO. ";	cin>>i;
P=&ns;
P->setscore(0);
P->setballs(0);
nonstriker_name=P->getname(*(t1+(i-1)));
B=i;
return true;
}
firstns++;
firstns++;
}
	if(firstns==0)
{
cout<<"WHICH PLAYER IS GOING TO NONSTRIKE ? ENTER PLAYER NO. ";	cin>>i;
P=&ns;
nonstriker_name=P->getname(*(t1+(i-1)));
B=i;
firstns++;
return false;}
	cout<<"WHICH PLAYER IS GOING TO NONSTRIKE ? ENTER PLAYER NO. ";	cin>>i;
	if (B==i)
	{
		return false;
	}
	else if (B!=i&&i==A)
	{
		return true;
	}
firstns++;
firstns++;
	
	}	
	if(bb=="12")
	{
	T.setbattingteam(t2n);
	T.setbowlingteam(t1n);
if (firstns==-1)
{ 
if(checkout==B)	
{ // cout<<*(t2+(B-1))<<nonstriker_score<<nonstriker_balls<<endl;
cout<<"WHICH PLAYER IS GOING TO NONSTRIKE ? ENTER PLAYER NO. ";	cin>>i;
P=&ns;
P->setscore(0);
P->setballs(0);
nonstriker_name=P->getname(*(t2+(i-1)));
B=i;
return true;
}
firstns++;
firstns++;
}
	if(firstns==0)
{
cout<<"WHICH PLAYER IS GOING TO NONSTRIKE ? ENTER PLAYER NO. ";	cin>>i;
P=&ns;
nonstriker_name=P->getname(*(t2+(i-1)));
B=i;
firstns++;
return false;}
	cout<<"WHICH PLAYER IS GOING TO NONSTRIKE ? ENTER PLAYER NO. ";	cin>>i;
	if (B==i)
	{
		return false;
	}
	else if (B!=i&&i==A)
	{
		return true;
	}
firstns++;
firstns++;
}
	if(bb=="21")
	{
	T.setbattingteam(t2n);
	T.setbowlingteam(t1n);
if (firstns==-1)
{ 
if(checkout==B)	
{ // cout<<*(t2+(B-1))<<nonstriker_score<<nonstriker_balls<<endl;
cout<<"WHICH PLAYER IS GOING TO NONSTRIKE ? ENTER PLAYER NO. ";	cin>>i;
P=&ns;
P->setscore(0);
P->setballs(0);
nonstriker_name=P->getname(*(t2+(i-1)));
B=i;
return true;
}
firstns++;
firstns++;
}
	if(firstns==0)
{
cout<<"WHICH PLAYER IS GOING TO NONSTRIKE ? ENTER PLAYER NO. ";	cin>>i;
P=&ns;
nonstriker_name=P->getname(*(t2+(i-1)));
B=i;
firstns++;
return false;}
	cout<<"WHICH PLAYER IS GOING TO NONSTRIKE ? ENTER PLAYER NO. ";	cin>>i;
	if (B==i)
	{
		return false;
	}
	else if (B!=i&&i==A)
	{
		return true;
	}
firstns++;
firstns++;
}
	if(bb=="22")
	{
		T.setbattingteam(t1n);
		T.setbowlingteam(t2n);
if (firstns==-1)
{ 
if(checkout==B)	
{ // cout<<*(t1+(B-1))<<nonstriker_score<<nonstriker_balls<<endl;
cout<<"WHICH PLAYER IS GOING TO NONSTRIKE ? ENTER PLAYER NO. ";	cin>>i;
P=&ns;
P->setscore(0);
P->setballs(0);
nonstriker_name=P->getname(*(t1+(i-1)));
B=i;
return true;
}
firstns++;
firstns++;
}
	if(firstns==0)
{
cout<<"WHICH PLAYER IS GOING TO NONSTRIKE ? ENTER PLAYER NO. ";	cin>>i;
P=&ns;
nonstriker_name=P->getname(*(t1+(i-1)));
B=i;
firstns++;
return false;}
	cout<<"WHICH PLAYER IS GOING TO NONSTRIKE ? ENTER PLAYER NO. ";	cin>>i;
	if (B==i)
	{
		return false;
	}
	else if (B!=i&&i==A)
	{
		return true;
	}
firstns++;
firstns++;

}
}



	bool setbowlingplayers (string t1n, string t2n ,string ven,string * t1 , string * t2, string bb)
{ 
	
if(bb=="11")
{ 	T.setbattingteam(t1n);
	T.setbowlingteam(t2n);
if (firstb==0)
{
cout<<"WHICH PLAYER IS GOING TO BALL ENTER PLAYER NO. ";	cin>>ba;
P=&b;
bowler_name=P->getname(*(t2+(ba-1)));
C=ba;
firstb++;	
return true;
}
if (c==true&&w!=0)
{
Q.store((ba-1),bowler_score,bowler_wickets,bowler_overs);
cout<<"WHICH PLAYER IS GOING TO BALL ENTER PLAYER NO. ";	cin>>ba;
P=&b;
bowler_name=P->getname(*(t2+(ba-1)));
P->setscore(Q.getscore(ba-1));
P->setover(Q.getovers(ba-1));
sp.bw=(Q.getwic(ba-1));
c=false;
C=ba;
return true;
	
}
if (c==true&&w==0)
{
//cout<<bowler_name<<bowler_score<<bowler_wickets<<bowler_overs<<endl;
s;
Q.store((ba-1),bowler_score,bowler_wickets,bowler_overs);
cout<<"WHICH PLAYER IS GOING TO BALL ENTER PLAYER NO. ";	cin>>ba;
P=&b;
bowler_name=P->getname(*(t2+(ba-1)));
P->setover(0);
P->setscore(0);
sp.bw=0;
C=ba;
firstb++;
c=false;
w++;	
return true;
}
else 
{return true;	
}

}
		if(bb=="21")
	{
	T.setbattingteam(t2n);
	T.setbowlingteam(t1n);
if (firstb==0)
{
cout<<"WHICH PLAYER IS GOING TO BALL ENTER PLAYER NO. ";	cin>>ba;
P=&b;
bowler_name=P->getname(*(t1+(ba-1)));
C=ba;
firstb++;	
return true;
}
if (c==true&&w!=0)
{
Q.store((ba-1),bowler_score,bowler_wickets,bowler_overs);
cout<<"WHICH PLAYER IS GOING TO BALL ENTER PLAYER NO. ";	cin>>ba;
P=&b;
bowler_name=P->getname(*(t1+(ba-1)));
P->setscore(Q.getscore(ba-1));
P->setover(Q.getovers(ba-1));
sp.bw=(Q.getwic(ba-1));
c=false;
C=ba;
return true;
	
}
if (c==true&&w==0)
{
//cout<<bowler_name<<bowler_score<<bowler_wickets<<bowler_overs<<endl;
s;
Q.store((ba-1),bowler_score,bowler_wickets,bowler_overs);
cout<<"WHICH PLAYER IS GOING TO BALL ENTER PLAYER NO. ";	cin>>ba;
P=&b;
bowler_name=P->getname(*(t1+(ba-1)));
P->setover(0);
P->setscore(0);
sp.bw=0;
C=ba;
firstb++;
c=false;
w++;	
return true;
}
else 
{return true;	
}
}

	
	if(bb=="12")
	{
	T.setbattingteam(t2n);
	T.setbowlingteam(t1n);
if (firstb==0)
{
cout<<"WHICH PLAYER IS GOING TO BALL ENTER PLAYER NO. ";	cin>>ba;
P=&b;
bowler_name=P->getname(*(t1+(ba-1)));
C=ba;
firstb++;	
return true;
}
if (c==true&&w!=0)
{
Q.store((ba-1),bowler_score,bowler_wickets,bowler_overs);
cout<<"WHICH PLAYER IS GOING TO BALL ENTER PLAYER NO. ";	cin>>ba;
P=&b;
bowler_name=P->getname(*(t1+(ba-1)));
P->setscore(Q.getscore(ba-1));
P->setover(Q.getovers(ba-1));
sp.bw=(Q.getwic(ba-1));
c=false;
C=ba;
return true;
	
}
if (c==true&&w==0)
{
//cout<<bowler_name<<bowler_score<<bowler_wickets<<bowler_overs<<endl;
s;
Q.store((ba-1),bowler_score,bowler_wickets,bowler_overs);
cout<<"WHICH PLAYER IS GOING TO BALL ENTER PLAYER NO. ";	cin>>ba;
P=&b;
bowler_name=P->getname(*(t1+(ba-1)));
P->setover(0);
P->setscore(0);
sp.bw=0;
C=ba;
firstb++;
c=false;
w++;	
return true;
}
else 
{return true;	
}
}
	if(bb=="22")
	{
	T.setbattingteam(t1n);
	T.setbowlingteam(t2n);
if (firstb==0)
{
cout<<"WHICH PLAYER IS GOING TO BALL ENTER PLAYER NO. ";	cin>>ba;
P=&b;
bowler_name=P->getname(*(t2+(ba-1)));
C=ba;
firstb++;	
return true;
}
if (c==true&&w!=0)
{
Q.store((ba-1),bowler_score,bowler_wickets,bowler_overs);
cout<<"WHICH PLAYER IS GOING TO BALL ENTER PLAYER NO. ";	cin>>ba;
P=&b;
bowler_name=P->getname(*(t2+(ba-1)));
P->setscore(Q.getscore(ba-1));
P->setover(Q.getovers(ba-1));
sp.bw=(Q.getwic(ba-1));
c=false;
C=ba;
return true;
	
}
if (c==true&&w==0)
{
//cout<<bowler_name<<bowler_score<<bowler_wickets<<bowler_overs<<endl;
s;
Q.store((ba-1),bowler_score,bowler_wickets,bowler_overs);
cout<<"WHICH PLAYER IS GOING TO BALL ENTER PLAYER NO. ";	cin>>ba;
P=&b;
bowler_name=P->getname(*(t2+(ba-1)));
P->setover(0);
P->setscore(0);
sp.bw=0;
C=ba;
firstb++;
c=false;
w++;	
return true;
}
else 
{return true;	
}
}
	}



void setstriker(char pba , bool a)
{
	if (a==true)
{ 
	P=&s;
	//wicket
	if (pba=='W')
	{ 
	striker_balls=P->getballs(true);
	striker_score=P->getscore(0);
	cout<<striker_name<<" OUT WITH "<<striker_score<<" RUNS "<<endl;
	}
	if (pba=='d'||pba=='D')
	{ 
	striker_balls=P->getballs(true);
	striker_score=P->getscore(0);
	cout<<"";
	}
	//wide
	if (pba=='w')
	{ 
	striker_balls=P->getballs(false);
	striker_score=P->getscore(1);
	cout<<"";
	}
	if (pba=='4')
	{ 
	striker_balls=P->getballs(true);
	striker_score=P->getscore(4);
	cout<<"";
	}
	if (pba=='6')
	{ 
	striker_balls=P->getballs(true);
	striker_score=P->getscore(6);
	cout<<"";
	}
	if (pba=='N'||pba=='n')
	{ 
	striker_balls=P->getballs(false);
	striker_score=P->getscore(1);
	cout<<"";
	}
	if (pba=='1')
	{ 
	striker_balls=P->getballs(true);
	striker_score=P->getscore(1);
	cout<<"";
	}
	if (pba=='2')
	{ 
	striker_balls=P->getballs(true);
	striker_score=P->getscore(2);
	cout<<"";
	}
	}
	
	}
	
	
	
	void setnonstriker(char pba, bool a)
{
	if (a==true)
{
	P=&ns;
	//wicket
	if (pba=='W')
	{ 
	nonstriker_balls=P->getballs(true);
	nonstriker_score=P->getscore(0);
	cout<<nonstriker_name<<" OUT WITH "<<nonstriker_score<<" RUNS "<<endl;
	
	}
	if (pba=='d'||pba=='D')
	{ 
	nonstriker_balls=P->getballs(true);
	nonstriker_score=P->getscore(0);;
	cout<<"";
	}
	//wide
	if (pba=='w')
	{ 
	nonstriker_balls=P->getballs(false);
	nonstriker_score=P->getscore(1);
	cout<<"";
	}
	if (pba=='4')
	{ 
	nonstriker_balls=P->getballs(true);
	nonstriker_score=P->getscore(4);
	cout<<"";
	}
	if (pba=='6')
	{ 
	nonstriker_balls=P->getballs(true);
	nonstriker_score=P->getscore(6);
	cout<<"";
	}
	if (pba=='N'||pba=='n')
	{ 
	nonstriker_balls=P->getballs(false);
	nonstriker_score=P->getscore(1);
	cout<<"";
	}
	if (pba=='1')
	{ 
	nonstriker_balls=P->getballs(true);
	nonstriker_score=P->getscore(1);
	cout<<"";
	}
	if (pba=='2')
	{ 
	nonstriker_balls=P->getballs(true);
	nonstriker_score=P->getscore(2);
	cout<<"";
	}
}
	}
	
	bool setbowler(char pba,bool a)
{ 
if (a==true)
{
	P=&b;
		//wicket
	if (pba=='W')
	{ 
	bowler_overs=P->getovers(true);
	bowler_score=P->getscore(0);
//	sp=P->pbs(pba);
	SP=true;
	return true;
//	cout<<nonstriker_name<<" OUT WITH "<<nonstriker_score<<" RUNS "<<endl;
	}
	if (pba=='d'||pba=='D')
	{ 
	bowler_overs=P->getovers(true);
	bowler_score=P->getscore(0);
//	sp=P->pbs(pba);
	SP=true;
	return true;
	cout<<"";
	}
	//wide
	if (pba=='w')
	{ 
	bowler_overs=P->getovers(false);
	bowler_score=P->getscore(1);
//	sp=P->pbs(pba);
	SP=false;
	return false;
	cout<<"";
	}
	if (pba=='4')
	{ 
	bowler_overs=P->getovers(true);
	bowler_score=P->getscore(4);
//	sp=P->pbs(pba);
	SP=true;
	return true;
	cout<<"";
	}
	if (pba=='6')
	{ 
	bowler_overs=P->getovers(true);
	bowler_score=P->getscore(6);
//	sp=P->pbs(pba);
	SP=true;
	return true;
	cout<<"";
	}
	if (pba=='N'||pba=='n')
	{ 
	bowler_overs=P->getovers(false);
    bowler_score=P->getscore(1);
 //   sp=P->pbs(pba);
    SP=false;
    return false;
	cout<<"";
	}
	if (pba=='1')
	{ 
bowler_overs=P->getovers(true);
	bowler_score=P->getscore(1);
//	sp=P->pbs(pba);
	SP=true;
	return true;
	cout<<"";
	}
	if (pba=='2')
	{ 
	bowler_overs=P->getovers(true);
	bowler_score=P->getscore(2);
//	sp=P->pbs(pba);
	SP=true;
	return true;
	cout<<"";
	}	
}
}
	

int totalscore	(char pba)
{
if (pba=='W')
	{ 
	total_score=total_score+0;
	return total_score;
	}
	if (pba=='d'||pba=='D')
	{ 
	total_score=total_score+0;
	return total_score;
	
	}
	//wide
	if (pba=='w')
	{ 
	total_score=total_score+1;
	}
	if (pba=='4')
	{ 
	total_score=total_score+4;
	}
	if (pba=='6')
	{ 
	total_score=total_score+6;
	}
	if (pba=='N'||pba=='n')
	{ 
	total_score=total_score+1;
	}
	if (pba=='1')
	{ 
	total_score=total_score+1;
	}
	if (pba=='2')
	{ 
	total_score=total_score+2;
	}
	return 	total_score;
}

int totalwickets	(char pba)
{
if (pba=='W')
	{ 
	total_wickets=total_wickets+1;

	}
		return total_wickets;

}
double totalovers (bool a){
			if (a==true)
	{
		checkover=checkover+0.1;
		total_overs=total_overs+0.1;
		
		if (checkover==0.4)
		{ c=true;
		
		total_overs=total_overs+checkover;
		checkover=-0.2;
		return total_overs;
	}
		return total_overs;
	}
	else
	return total_overs;
	}


	
};

char inputball()
{
	char s;
	cout<<" WHAT HAPPENED ON THIS BALL ?"<<endl;
	cout<<" PRESS 1 , 2 , 4 , 6 TO ENTER SCORE "<<endl;
	cout<<" PRESS CAP \'W\' FOR WICKET AND SMALL \'w\' FOE WIDE "<<endl;
	cout<<" PRESS N FOR NO BALL AND D FOR DOT BALL "<<endl;
	cin>>s;
	return s;
}

void otherhalf (string t1n, string t2n ,string ven,string * t1 , string * t2, string bb, int overs , int target)
{
char pba;
bool a;
bool b;
bool c;
bool d;
live L;	
int checkovers;
int loop=1;
int checkwic=0;
int score;
do
{ 

a=L.setstrikerpplayers(t1n,t2n,ven,t1 ,t2, bb );


b=L.setnonstrikerpplayers(t1n,t2n,ven,t1 ,t2, bb );


d=L.setbowlingplayers(t1n,t2n,ven,t1 ,t2, bb );
cout<<endl<<endl<<endl;
pba=inputball();
c=L.setbowler(pba,d);
checkovers=L.totalovers(c);

L.setnonstriker(pba,b);
L.setstriker(pba,a);


score=L.totalscore(pba);
if(score>(target+1))
{loop=0;
}
L.totalwickets(pba);

L.setsetsetdisdisdisplay(pba);
cout<<endl<<endl<<endl;
if (pba=='W')
{ checkwic++;

 if (checkwic==5&&overs!=checkovers)
{ loop=0;
}
	char c;
	cout<<"DO YOU WANT TO DISPLAY PLAYER'S LIST TO SELECT PLAYERS  \"Y\" OR \"N\" ? ";cin>>c;
	if (c=='y'||c=='Y')
{

displayt1playernames(t1 );
displayt2playernames(t2 );

}
L.setfirsts(-1);
L.setfirstns(-1);
cout<<endl<<endl;	
}




 if (checkovers==overs)
{ loop=0;

}

}
while(loop);
if (target>L.totalscore('D')&&bb=="11")
{
cout<<endl<<endl<<" "<<t2n<<" WON BY "<<(target-L.totalscore('D'))<<" RUNS ";
}
if (score>(target+1)&&bb=="11")
{
cout<<endl<<endl<<" "<<t1n<<" WON BY "<<" ACHIEVING THE TARGET ";
}
if (target>L.totalscore('D')&&bb=="21")
{
cout<<endl<<endl<<" "<<t1n<<" WON BY "<<(target-L.totalscore('D'))<<" RUNS ";	
}
if (score>(target+1)&&bb=="21")
{
cout<<endl<<endl<<" "<<t2n<<" WON BY "<<" ACHIEVING THE TARGET ";}
if (target>L.totalscore('D')&&bb=="12")
{
cout<<endl<<endl<<" "<<t1n<<" WON BY "<<(target-L.totalscore('D'))<<" RUNS ";	
}
if (score>(target+1)&&bb=="12")
{
cout<<endl<<endl<<" "<<t2n<<" WON BY "<<" ACHIEVING THE TARGET ";}

if (target>L.totalscore('D')&&bb=="22")
{
cout<<endl<<endl<<" "<<t2n<<" WON BY "<<(target-L.totalscore('D'))<<" RUNS ";	
}
if (score>(target+1)&&bb=="22")
{
cout<<endl<<endl<<" "<<t1n<<" WON BY "<<" ACHIEVING THE TARGET ";}


cout<<endl<<endl<<endl<<endl<<endl;






}


int main(){
team T;

string bb;	
char pba;
bool a;
bool b;
bool c;
bool d;
live L;


int overs=0;
int checkovers;


bb=T.inputinitaildata();
cout<<endl<<endl<<" TOTAL OVERS GOING TO BE PLAYED BY TEAMS ? ";cin>>overs;
displayt1playernames(T.gett1players() );
displayt2playernames(T.gett2players() );
cout<<endl<<endl;
int loop=1;
int checkwic=0;
do
{ 

a=L.setstrikerpplayers(T.gett1name(),T.gett2name(),T.getvenue(),T.gett1players() ,T.gett2players(), bb );


b=L.setnonstrikerpplayers(T.gett1name(),T.gett2name(),T.getvenue(),T.gett1players() ,T.gett2players(), bb );


d=L.setbowlingplayers(T.gett1name(),T.gett2name(),T.getvenue(),T.gett1players() ,T.gett2players(), bb );
cout<<endl<<endl<<endl;
pba=inputball();
c=L.setbowler(pba,d);

checkovers=L.totalovers(c);

L.setnonstriker(pba,b);
L.setstriker(pba,a);


L.totalscore(pba);
L.totalwickets(pba);

L.setsetsetdisdisdisplay(pba);
cout<<endl<<endl<<endl;
if (pba=='W')
{ checkwic++;

 if (checkwic==5&&overs!=checkovers)
{ loop=0;
}
	char c;
	cout<<"DO YOU WANT TO DISPLAY PLAYER'S LIST TO SELECT PLAYERS  \"Y\" OR \"N\" ? ";cin>>c;
	if (c=='y'||c=='Y')
{

displayt1playernames(T.gett1players() );
displayt2playernames(T.gett2players() );

}
L.setfirsts(-1);
L.setfirstns(-1);
cout<<endl<<endl;	
}




 if (checkovers==overs)
{ loop=0;

}

}
while(loop);
cout<<endl<<endl<<" 1st INNING ENDED "<<endl;
cout<<" TARGET IS "<<L.totalscore('D')<<endl;
system("PAUSE");
system("CLS");

if (bb=="11")
{bb="21";
}
else if (bb=="22")
{bb="12";
}
else if (bb=="12")
{bb="22";
}
else if (bb=="21")
{bb="11";
}
displayt1playernames(T.gett1players() );
displayt2playernames(T.gett2players() );
cout<<endl<<endl<<endl;
cout<<endl<<endl<<" 2nd INNING STARTED "<<endl;
otherhalf (T.gett1name(),T.gett2name(),T.getvenue(),T.gett1players() ,T.gett2players(), bb, overs , L.totalscore('D'));


cout<<" MUK GYA MATCH :) "<<endl;

return 0;
}
