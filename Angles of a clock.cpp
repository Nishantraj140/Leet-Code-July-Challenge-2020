class Solution {
public:
    double angleClock(int h, int m) {
        return min(abs(5.5*m - 30*h), 360-abs(5.5*m - h*30));
    }
};

//Simple Formula to Calculate the Angle between the hands of a clock
// x = 11m/2-30h