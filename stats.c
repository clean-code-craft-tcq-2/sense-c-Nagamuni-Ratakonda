#include "stats.h"
#include "math.h"

static float Stats_Average(const float* numberset, int setlength)
{
    float average = 0;
    float sum = 0;
    int index;
    
    for(index = 0; index < setlength; index++)
    {
        sum += numberset[index];
    }
    
    average = sum/setlength;
    
    return average;
    
}

static float Stats_MinValue(const float* numberset, int setlength)
{
    float Min_value = numberset[0];
    int index;
    
    for(index = 1; index < setlength; index++)
    {
        if(numberset[index] < Min_value)
        {
            Min_value = numberset[index];
        }
    }
    
    return Min_value;
    
}

static float Stats_MaxValue(const float* numberset, int setlength)
{
    float Max_Value = numberset[0];
    int index;
    
    for(index = 1; index < setlength; index++)
    {
        if(numberset[index] > Max_Value)
        {
            Max_Value = numberset[index];
        }
    }
    
    return Max_Value; 
}

struct Stats compute_statistics(const float* numberset, int setlength) {
    struct Stats s;
    s.average = 0;
    s.min = 0;
    s.max = 0;
    
    if((0 != numberset) && (0 != setlength))
    {
        s.average = Stats_Average(numberset,setlength);
        s.min = Stats_MinValue(numberset,setlength);
        s.max = Stats_MaxValue(numberset,setlength);
    }
    else
    {
        s.average = NAN;
        s.min = NAN;
        s.max = NAN;
    }
    
    return s;
}

int emailAlertCallCount = 0;
int ledAlertCallCount = 0;
