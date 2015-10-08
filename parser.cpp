#include<fstream>
#include<string>
#include<iostream>
#include<vector>
void parsing (std::vector<std::string> confrules, std::string filename1) {
	std::cout << "parsing not implemented yet" << std::endl;
}

int main(int argc, char *argv[]) {
	std::vector<std::string> conf;
	std::ifstream inputconf("garbl.conf");
	std::string line;
	while (getline (inputconf, line)) {
		conf.push_back(line);
	}
	inputconf.close();
	std::cout << argv[0] << argv[1] << argc << std::endl;
	for(int counter = 1; counter < argc; counter++) {
		std::string filename = argv[counter];
		parsing(conf, filename);
	}
	return 0;
}
