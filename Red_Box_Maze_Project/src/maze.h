#ifndef __MAZE_AGENT__H
#define __MAZE_AGENT__H 

#include "enviro.h"
#include "iostream"

//setting up our enviro environment
using namespace enviro;

//creation of MazePuzzle Class with process and AgentInterface inherited from Elma

class MazePuzzle : public Process, public AgentInterface {

    public:
    MazePuzzle() : Process(), AgentInterface(), goal_x(10), goal_y(20) {}

    //! Nothing to do to initialize 
    void init() {}

    //! Nothing to do to start since already declared in the config json file
    void start() {}
    
    //The robot finds into path based on the sensing values gathered from sensors
    void update() {
        if(sensor_value(0) < 40)
        {
            track_velocity(100,20); //This moves at a format of (angular velocity, torque)
            omni_move_toward(goal_x, goal_y); //This helps the robot move to the finish zone
        }
        else if (sensor_value(0) <60 && sensor_value(1)<20)
        {
            track_velocity(100,20);
            omni_move_toward(goal_x, goal_y); //Same method as above
        }
    }
    void stop() {} //! Nothing to do to stop because the robot rotates after complting the maze

    double goal_x, goal_y;

};

//Creating a class called Maze and inherting Agent
class Maze : public Agent {
    public:
    Maze(json spec, World& world) : Agent(spec, world) {
        add_process(c);
    }
    private:
    MazePuzzle c; //Co-ordinating this Agent with above created MazePuzzle Class
};

DECLARE_INTERFACE(Maze)  //Setting the Interface between Maze and MazePuzzle Class

#endif //closing the ifndef 