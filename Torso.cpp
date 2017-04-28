#include "Torso.h"

int Torso::get_battery_compartments() const {return battery_compartments;}
int Torso::get_max_arms() const {return max_arms;}

void Torso::get_parts(){
std::cin>>battery_compartments>>max_arms>>name>>model_number>>cost>>description>>image_filename;
}

void Torso::view_parts(){
	std::string str_1;
	str_1 = "Torso Battery Compartments:" + std::to_string(battery_compartments) + "\n" +
		"Torso Max Arms:" + std::to_string(max_arms) + "\n" +
		"Torso Part Name:" + name + "\n" +
		"Torso Model Number:" + std::to_string(model_number) + "\n" +
		"Torso Part Cost:" + std::to_string(cost) + "\n" +
		"Torso Part Description:" + description + "\n" +
		"Torso Image Filename:" + image_filename + "\n";
	fl_message(str_1.c_str()); Fl::check();
}

void Torso::save(std::ostream& ost){
ost <<"Torso"<<std::endl<<battery_compartments<<std::endl<<max_arms<<std::endl<<name<<std::endl<<model_number<<std::endl<<cost<<std::endl<<description<<std::endl<<image_filename<<std::endl;
}

void Torso::load(std::istream& ist){
ist >>battery_compartments>>max_arms>>name>>model_number>>cost>>description>>image_filename;
}

void Torso::set_weight(double part_weight){
weight = part_weight;
}

double Torso::get_weight(){
return weight;
}

double Torso::get_cost(){
	return cost;
}
