#include "PluginManager.h"
#include <stdio.h>
#include <stdlib.h>
#include "MetaSPAdesPlugin.h"

void MetaSPAdesPlugin::input(std::string file) {
  inputfile = file;
 std::ifstream ifile(inputfile.c_str(), std::ios::in);
 while (!ifile.eof()) {
   std::string key, value;
   ifile >> key;
   ifile >> value;
   parameters[key] = value;
 }
}

void MetaSPAdesPlugin::run() {
   
}

void MetaSPAdesPlugin::output(std::string file) {
	//trim_galore --no_report_file --paired -o $out $reads_1 $reads_2
	std::string command = "metaspades.py -o "+file+" -1 "+std::string(PluginManager::prefix())+"/"+parameters["forward"]+" -2 "+std::string(PluginManager::prefix())+"/"+parameters["reverse"]+"; cp "+file+"/scaffolds.fasta "+file+"/../";
 std::cout << command << std::endl;

 system(command.c_str());

}

PluginProxy<MetaSPAdesPlugin> MetaSPAdesPluginProxy = PluginProxy<MetaSPAdesPlugin>("MetaSPAdes", PluginManager::getInstance());
