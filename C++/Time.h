#ifndef TIME_H
#define TIME_H
class Time{
public:
  Time();
  void setTime(int,int,int );//for setting time in hour minute and seconds
  void printUniversalTime();
  void printStandardTime();
private:
  int hour,minute,second;
};
#endif
