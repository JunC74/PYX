#include "fds.h"

using namespace std;

namespace FDS
{
    float GetAngle(int father_x_, int father_y_, int son_x_, int son_y_)
    {
        float angle = 0;
        float tan_alpha_ = 0;
        int delta_x_ = son_x_ - father_x_;
        int delta_y_ = son_y_ - father_y_;

        if (abs(delta_x_) != 0 && abs(delta_y_) != 0)
        {
            tan_alpha_ = (float)(delta_x_) / (float)(delta_y_);
            if (delta_y_ > 0)
            {
                angle = atan(tan_alpha_);
            }
            else if (delta_x_ < 0)
            {
                angle = atan(tan_alpha_) - M_PI;
            }
            else
                angle = atan(tan_alpha_) + M_PI;
        }
        else if (delta_x_ == 0)
        {
            if (delta_y_ > 0)
                angle = 0;
            else
                angle = M_PI;
        }
        else if (delta_y_ == 0)
        {
            if (delta_x_ > 0)
                angle = M_PI / 2;
            else
                angle = -M_PI / 2;
        }

        return angle;
    }

    double GetRotateAngle(double x1, double y1, double x2, double y2)
    {
        const double epsilon = 1.0e-6;
        const double nyPI = acos(-1.0);
        double dist, dot, degree, angle;

        // normalize
        dist = sqrt( x1 * x1 + y1 * y1 );
        x1 /= dist;
        y1 /= dist;
        dist = sqrt( x2 * x2 + y2 * y2 );
        x2 /= dist;
        y2 /= dist;
        // dot product
        dot = x1 * x2 + y1 * y2;
        if ( fabs(dot-1.0) <= epsilon ) 
            angle = 0.0;
        else if ( fabs(dot+1.0) <= epsilon ) 
            angle = nyPI;
        else {
            double cross;

            angle = acos(dot);
            //cross product
            cross = x1 * y2 - x2 * y1;
            // vector p2 is clockwise from vector p1 
            // with respect to the origin (0.0)
            if (cross < 0 ) { 
                angle = 2 * nyPI - angle;
            }    
        }
        degree = angle *  180.0 / nyPI;
        return degree;
    }

    float GetDistance(float father_x, float father_y, float son_x, float son_y)
    {
        return sqrt((float)(son_x - father_x) * (son_x - father_x) + 
            (son_y - father_y) * (son_y - father_y));
    }
}