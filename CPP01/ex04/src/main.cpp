#include "../includes/main.hpp"

void    write_outfile(std::ifstream& file, std::ofstream& outfile, string_t s1, string_t s2) {
    string_t line;
    size_t   pos;

    while(std::getline(file, line)) {
        if((pos = line.find(s1)) != std::string::npos) {
            line.erase(pos, s1.length());
            line.insert(pos, s2);
        }
        outfile << line << std::endl;
    }
}

int main(int ac, char **av) {
    
    if(ac != 4) {
        std::cout << "the program shuld take 3 parameters" << std::endl;
        return 1;
    }

    string_t file = av[1];
    string_t s1 = av[2];
    string_t s2 = av[3];

    
    std::ifstream inputFile(file.c_str());
    if(!inputFile.is_open()){
        std::cout << "cannot open :: " << file << std::endl;
    }
    std::ofstream outfile("exit_file.txt");
    if(!outfile.is_open()){
        std::cout << "cannot create :: " << "exit_file.txt" << std::endl;
    } else {
        write_outfile(inputFile, outfile, s1, s2);
        outfile.close();
        inputFile.close();
    }

    return 1;
}