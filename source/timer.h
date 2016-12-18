/* 
1.0 Includes

*/

#include <time.h>
#include <sys/time.h>

/*
2.0 Timer Class

*/
class Timer {
  
public:
  void start() {
     gettimeofday(&startTime, NULL);
  }
  
  long long getDiff() {
      struct timeval stopTime;
      gettimeofday(&stopTime, NULL);
      
      return ((stopTime.tv_sec - startTime.tv_sec) * 1000000L 
            + stopTime.tv_usec) - startTime.tv_usec;
  }
  
private: 
  struct timeval startTime;
};
