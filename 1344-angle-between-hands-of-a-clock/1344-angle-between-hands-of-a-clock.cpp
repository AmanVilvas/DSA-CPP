class Solution {
public:
    double angleClock(int hour, int minutes) {
        //every min -- 6 deg
        //add - 0.5 deg
        //hour -- 360/12 == 30 deg
        double minute = minutes * 6;
        double hourHand = (hour % 12) * 30 + (minutes * 0.5);

        double diff = abs(hourHand - minute);

        return min(diff, 360.0 - diff);
    }
};