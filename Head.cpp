#include "Head.h"

double Head::get_power() const {return power;}

void Head::get_parts(){
std::cin>>power>>name>>model_number>>cost>>description>>image_filename;
}

void Head::view_parts(){
	std::string str_1;
	str_1 = "Head Power:" + std::to_string(power) + "\n" +
		"Head Part Name:" + name + "\n" +
		"Head Model Number:" + std::to_string(model_number) + "\n" +
		"Head Part Cost:" + std::to_string(cost) + "\n" +
		"Head Part Description:" + description + "\n" +
		"Head Image Filename:" + image_filename + "\n";
	fl_message(str_1.c_str()); Fl::check();
}

void Head::save(std::ostream& ost){
ost <<"Head"<<std::endl<<power<<std::endl<<name<<std::endl<<model_number<<std::endl<<cost<<std::endl<<description<<std::endl<<image_filename<<std::endl;
}

void Head::load(std::istream& ist){
ist >>power>>name>>model_number>>cost>>description>>image_filename;
}

void Head::set_weight(double part_weight){
weight = part_weight;
}

double Head::get_weight(){
return weight;
}

double Head::get_cost(){
	return cost;
}

