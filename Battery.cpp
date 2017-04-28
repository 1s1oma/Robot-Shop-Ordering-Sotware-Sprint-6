#include "Battery.h"

double Battery::get_power_available() const {return power_available;}
double Battery::get_max_energy() const {return max_energy;}

void Battery::get_parts(){
std::cin>>power_available>>max_energy>>name>>model_number>>cost>>description>>image_filename;
}

void Battery::view_parts() {
	std::string str_1;
	str_1 = "Battery Power available:" + std::to_string(power_available) + "\n" +
		"Battery Max energy:" + std::to_string(max_energy) + "\n" +
		"Battery Part Name:" + name + "\n" +
		"Battery Model Number:" + std::to_string(model_number) + "\n" +
		"Battery Part Cost:" + std::to_string(cost) + "\n" +
		"Battery Part Description:" + description + "\n" +
		"Battery Image Filename:" + image_filename + "\n";
	fl_message(str_1.c_str()); Fl::check();
}

void Battery::save(std::ostream& ost){
ost <<"Battery"<<std::endl<<power_available<<std::endl<<max_energy<<std::endl<<name<<std::endl<<model_number<<std::endl<<cost<<std::endl<<description<<std::endl<<image_filename<<std::endl;
}

void Battery::load(std::istream& ist) {
ist >>power_available>>max_energy>>name>>model_number>>cost>>description>>image_filename;
}
void Battery::set_weight(double part_weight){
weight = part_weight;
}

double Battery::get_weight(){
return weight;
}

double Battery::get_cost(){
	return cost;
}
