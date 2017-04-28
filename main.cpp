#include <Windows.h>
#include <FL/Fl.H>
#include <FL/Fl_Window.H>
#include <FL/Fl_Box.H>
#include <FL/fl_ask.H>
#include "Robot_part.h"
#include "Arm.h"
#include "Battery.h"
#include "Torso.h"
#include "Locomotor.h"
#include "Head.h"
#include "Robot_model.h"
#include "Customer.h"
#include "Sales_associate.h"
#include "Order.h"
#include "Shop.h"
#include "Controller.h"
#include <iostream>

/*ostream& operator<<(ostream& os, const Robot_part& robot){
os << '('<<robot.get_name()<<','<<robot.get_model_number()<<','<<robot.get_cost()<<','<<robot.get_description()<<','<<robot.get_image_filename()<<')';
return os;
}*/

int main (){
int num=5;

Robot_part robot_part_o; Arm arm_o; Battery battery_o; Head head_o; Locomotor locomotor_o; Torso torso_o; Customer customer_o; Sales_associate sales_associate_o;
Robot_model robot_model_o(arm_o, battery_o,head_o,locomotor_o,torso_o, num);

Shop shop; shop.create_new_robot_model(robot_model_o);
View view{shop};

Controller controller(robot_model_o,arm_o, battery_o,head_o,locomotor_o,torso_o,shop, view);
controller.cli();
	
}
