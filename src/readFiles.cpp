//
// Created by David Castro on 04/11/2022.
//
#include <iostream>
#include <fstream>
#include <vector>
#include "readFiles.h"
#include "estudante.h"
vector<string> reducer(string Line, char& division){
    string medium;

    vector<string> result;
    size_t pos;
    while ((pos = Line.find(division)) != std::string::npos) {
        string token = Line.substr(0, pos);
        result.push_back(token);
        Line.erase(0, pos + 1);
    }
    result.push_back(Line);
    return result;
}
void genEstudantes() {
    string line;
    ifstream in("/Users/davidcastro/CLionProjects/untitled8/csv/students_classes.csv");
    if(in.is_open()) {
        (getline(in, line));
        while (getline(in, line)) {
            char& b = (char &) ",";
            vector<string> Students =  {reducer(line, b)};
            for(auto c: Students){
                Estudante est(Students[1],Students[2]);
                cout << "2: "<< Students[1] <<endl;//
                cout << "3: "<< Students[2] <<endl;//
                cout << "4: "<< Students[3] <<endl;//
            }

        }
    }
}
