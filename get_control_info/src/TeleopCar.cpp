#include "TeleopCar.h"

TeleopCar::TeleopCar()
{
	velocity.data = 0;
	twist_pub_ = nh_.advertise<std_msgs::Int8>("car_slam/cmd_vel", 1);
}


void TeleopCar::trasmitMessage(char c)
{
	switch(c)
	{
		case KEYCODE_L:
			ROS_DEBUG("LEFT");
			velocity.data = 3;
			twist_pub_.publish(velocity);
			break;
		case KEYCODE_R:
			ROS_DEBUG("RIGHT");
			velocity.data = 4;
			twist_pub_.publish(velocity);
			break;
		case KEYCODE_F:
			ROS_DEBUG("FORWARD");
			velocity.data = 1;
			twist_pub_.publish(velocity);
			break;
		case KEYCODE_B:
			ROS_DEBUG("BACK");
			velocity.data = 2;
			twist_pub_.publish(velocity);
			break;
		case KEYCODE_SPACE:
			ROS_DEBUG("STOP");
			velocity.data = 0;
			twist_pub_.publish(velocity);
			break;
	}
}
