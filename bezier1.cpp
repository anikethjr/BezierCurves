//
// Created by anikethjr on 20/11/17.
//
#include <bits/stdc++.h>

using namespace std;

struct Point {
    double x;
    double y;
    double z;
};

/**
 * Class to handle the drawing of the Bezier curve
 */
class Curve {
    vector<Point> control_points; //coordinates of control points
public:
    /**
     * Function to add a new control point if it is not present already
     * @param p point to be added
     */
    void addControlPoint(Point p) {
        if (find(control_points.begin(),control_points.end(),p)==control_points.end()) {
            control_points.push_back(p);
            draw();
        }
    }

    /**
     * Function to delete a control point if it exists
     * @param p point to be deleted
     */
    void deleteControlPoint(Point p) {
        if (find(control_points.begin(),control_points.end(),p)!=control_points.end()) {
            control_points.erase(find(control_points.begin(),control_points.end(),p));
            draw();
        }
    }

    /**
     * Function to change a given control point if it exists
     * @param oldPoint Old coordinates of the point
     * @param newPoint New coordinates of the point
     */
    void changeControlPoint(Point oldPoint, Point newPoint){
        if (find(control_points.begin(),control_points.end(),oldPoint)!=control_points.end()) {
            *find(control_points.begin(),control_points.end(),oldPoint) = newPoint;
            draw();
        }
    }

    /**
     * Function to draw the curve using De Castlejau's algorithm
     */
    void draw()
    {
        double t = 0.0; //parameter for the curve
        int n = control_points.size(); //number of control points
        vector<Point> interpolatedPoints(control_points.begin(),control_points.end()); //stores the interpolated points after each iteration
        for (t = 0.0; t < 1.0; t = t+0.001) {
        }
    }
};
