/*
 * Rosinterface.h
 *
 *  Created on: Feb 15, 2015
 *      Author: srinivasan
 */

#include "sensor_msgs/Imu.h"
#include "Acclr_Data.h"
#include "Gyro_Data.h"
#include "Mgnto_Data.h"
#include "Imu_Parser.h"


class SensorMsg_Imu {
public:
	SensorMsg_Imu();
	virtual ~SensorMsg_Imu();
	void Sync_Data(Imu_Parser& parser);
	sensor_msgs::Imu Get_Data();
private:
	sensor_msgs::Imu imu_msg;
	Acclr_Data Acclr;
	Gyro_Data  Gyro;
	Mgnto_Data Mgnt;
	int Seq_count = 0;

};


