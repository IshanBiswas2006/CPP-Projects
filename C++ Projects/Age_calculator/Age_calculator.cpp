#include<iostream>
using namespace std;

void age(int c_d,int c_m,int c_y,int d,int m,int y){

    int days, years, months;

    if (c_d < d)
{
    c_d += 30;
    c_m -= 1;
}

days = c_d - d;

if (c_m < m) 
{
    c_m += 12;
    c_y -= 1;
}

 months = c_m - m;
 years = c_y - y;

  cout<<"Your Age is: "<<years<<" years, "<<months<<" months, "<<days<<"days\n";
}

int main()
{
int d, m, y; 
int c_d, c_m, c_y;
int days, years, months;

cout<<"Enter birth day,month,year: ";
cin>>d>>m>>y; 

cout<<"Enter current day,month,year: ";
cin>>c_d>>c_m>>c_y;

age(d,m,y,c_d,c_m,c_y);
 
}