

#include <iostream>
#include <ros/ros.h>
#include <std_msgs/Int8.h>
#include <signal.h>

class TeleopCar
{
public:
	TeleopCar();
	void trasmitMessage(char c);
private:
	ros::NodeHandle nh_;
	std_msgs::Int8 velocity;
	ros::Publisher twist_pub_;

	static const char KEYCODE_R 		= 0x43;
	static const char KEYCODE_L 		= 0x44;
	static const char KEYCODE_F 		= 0x41;
	static const char KEYCODE_B 		= 0x42;
	static const char KEYCODE_SPACE		= 0x20;
};

