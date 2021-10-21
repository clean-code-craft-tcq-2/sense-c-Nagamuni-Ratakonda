#include "alert.h"

void check_and_alert(float maxThreshold, alerter_funcptr alerters[], struct Stats computedStats)
{
  if(maxThreshold < computedStats)
  {
    (alerters[0])();
    (alerters[1])();
  }
}

void EmailAlert()
{
  emailAlertCallCount = 1;
}

void LedAlert()
{
  ledAlertCallCount = 1;
}
