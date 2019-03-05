#include<iostream>
#include<iomanip>
#include<stdexcept>
#include"Time.h"
using namespace std;
Time::Time(){
  hour=minute=second=0;
}
void Time::setTime(int h,int m,int s){
  if((h>=0 && h<24) && (m>0 && m<60) && (s>0 && s<60)){
    hour=h;
    minute=m;
    second=s;
  }
  else{
  std::cout<<"Invalid values of hour, minutes or seconds"<<'\n';
  }
}
void Time::printUniversalTime(){
  std::cout << setfill('0')<<setw(2)<<hour<<":"<<setw(2)<<minute<<":"<<setw(2)<<second<< '\n';
}
void Time::printStandardTime(){
  std::cout << setfill('0')<<((hour==0 || hour==12) ? 12:hour%12) <<":"<<setw(2)<<minute<<":"<<setw(2)<<second<<" "<<((hour<12)?"AM":"PM")<< '\n';
}
int main(int argc, char const *argv[]) {
  int a,b,c;
  std::cout<<"Enter the time"<<"\n";
  std::cin>>a>>b>>c;
  Time t1;
  t1.setTime(a,b,c);
  std::cout<<'\n';
  t1.printUniversalTime();
  t1.printStandardTime();
  return 0;
}
