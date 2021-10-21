#include "alert.h"

void check_and_alert(float maxThreshold, alerter_funcptr alerters[], struct Stats computedStats)
{
  if(maxThreshold < computedStats.max)
  {
    (alerters[0])();
    (alerters[1])();
  }
}

void emailAlerter()
{
  emailAlertCallCount = 1;
}

void ledAlerter()
{
  ledAlertCallCount = 1;
}
