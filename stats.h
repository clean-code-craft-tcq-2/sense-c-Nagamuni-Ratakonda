
typedef struct Stats
{
  float average;
  float min;
  float max;
}Stats;

struct Stats compute_statistics(const float* numberset, int setlength);

extern int emailAlertCallCount;
extern int ledAlertCallCount;
