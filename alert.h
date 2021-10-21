typedef void (*alerter_funcptr)();
void check_and_alert(float maxThreshold, alerter_funcptr alerters[], struct Stats computedStats);
void EmailAlert();
void LedAlert();

extern int emailAlertCallCount;
extern int ledAlertCallCount;
