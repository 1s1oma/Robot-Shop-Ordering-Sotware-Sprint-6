#include "Arm.h"

double Arm::get_max_power() const {return max_power;}

void Arm::get_parts(){
std::cin>>max_power>>name>>model_number>>cost>>description>>image_filename;
}

void Arm::view_parts(){
	std::string str_1;
	str_1 = "Arm Max Power:" + std::to_string(max_power) + "\n" +
		"Arm Part Name:" + name + "\n" +
		"Arm Model Number:" + std::to_string(model_number) + "\n" +
		"Arm Part Cost:" + std::to_string(cost) + "\n" +
		"Arm Part Description:" + description + "\n" +
		"Arm Image Filename:" +image_filename + "\n";
fl_message(str_1.c_str());Fl::check();
}

void Arm::save(std::ostream& ost){
ost <<"Arm"<<std::endl<<max_power<<std::endl<<name<<std::endl<<model_number<<std::endl<<cost<<std::endl<<description<<std::endl<<image_filename<<std::endl;
}

void Arm::load(std::istream& ist){
ist >>max_power>>name>>model_number>>cost>>description>>image_filename;
}

void Arm::set_weight(double part_weight){
weight = part_weight;
}

double Arm::get_weight(){
double weight_1;weight_1=weight;
return weight;
}

double Arm::get_cost(){
	return cost;
}
