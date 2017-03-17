//
//  Timer.hpp
//  MegaData
//
//  Created by Marlor, Brandon on 3/17/17.
//  Copyright © 2017 Marlor, Brandon. All rights reserved.
//

#ifndef Timer_hpp
#define Timer_hpp

#include <time.h>

class Timer
{
private:
    clock_t executionTime;
public:
    Timer();
    void startTimer();
    void stopTimer();
    void resetTimer();
    void displayTimerInformation();
    long getExecutionTimeInMicroseconds();
};

#endif /* Timer_hpp */
