#include<iostream>
#include<cstdlib>
#include<ctime>

#define ROCK 1
#define PAPER 2
#define SCISSORS 3
using namespace std;
int main(){

srand((unsigned int) time(NULL));
int player_throw=0;
int ai_throw=0;
bool draw=false;

do{

cout<<"select your throw";
cout<<"1) Rock"<<endl;
cout<<"2) paper"<<endl;
cout<<"3) scissor"<<endl;
cout<<"selection: ";
cin>>player_throw;

cout<<endl;

ai_throw=(rand() % 3)+1;

if(ai_throw == ROCK){
cout<<"AI THROWS ROCK"<<endl;
}
else if(ai_throw == PAPER){
cout<<"AI THROWS PAPER"<<endl;
}
else if(ai_throw == SCISSORS){
cout<<"AI THROWS SCISSORS";
}

draw = false;
if(player_throw == ai_throw)
{
	draw=true;
	cout<<"draw! Play again!"<<endl;
}
else if(player_throw== ROCK && ai_throw== SCISSORS)
{
	cout<< "ROCK beats SCISSORS! YOU WON."<<endl;
}
else if(player_throw== ROCK && ai_throw== PAPER)
{
	cout<<"PAPER beats ROCK! YOU LOSE!"<<endl;
}
else if(player_throw==PAPER && ai_throw== ROCK)
{
	cout<<"PAPER beats ROCK! YOU WIN!"<<endl;
}
else if(player_throw==PAPER && ai_throw==SCISSORS)
{
	cout<<"SCISSORS beats PAPER! YOU LOSE"<<endl;
}
else if(player_throw==SCISSORS && ai_throw== PAPER)
{
	cout<<"SCISSORS beats PAPER! YOU WIN!"<< endl;
}
else if(player_throw==SCISSORS && ai_throw== ROCK)
{
	cout<<"ROCK beats SCISSORS! YOU LOSE!"<< endl;
}

cout<< endl;
}while(draw);

return 0;
}
