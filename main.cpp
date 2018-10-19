//
//  main.cpp
//  chinesehelper
//
//  Created by Jasper  on 10/18/18.
//  Copyright © 2018 Jasper . All rights reserved.
//

#include <iostream>
#include <utility>
#include <vector>
#include <string>
typedef std::pair<std::string, std::string> chineseCharacters;
int main() {
    int option1=0;
    int option2=0;
    int option3=0;
    std::vector<chineseCharacters> characterVec;
    characterVec.push_back(std::make_pair("中文", "China (language)"));
    characterVec.push_back(std::make_pair("老师", "Professor/teacher"));
    characterVec.push_back(std::make_pair("美国", "America/United States"));
    characterVec.push_back(std::make_pair("中国", "China (country)"));
    characterVec.push_back(std::make_pair("谁", "Who?"));
    characterVec.push_back(std::make_pair("是", "To be/am/is"));
    characterVec.push_back(std::make_pair("学生", "Student"));
    characterVec.push_back(std::make_pair("口", "M/W for people"));
    characterVec.push_back(std::make_pair("我", "I/Me"));
    characterVec.push_back(std::make_pair("吗", "Final interrogative particle"));
    characterVec.push_back(std::make_pair("名字", "Name"));
    characterVec.push_back(std::make_pair("问", "To ask"));
    characterVec.push_back(std::make_pair("吃饭", "To eat a meal"));
    characterVec.push_back(std::make_pair("他", "This"));
    characterVec.push_back(std::make_pair("的", "Of (modifies noun)"));
    characterVec.push_back(std::make_pair("这", "This"));
    std::cout << "Do you want to?\n\n1. Practice\n2. Take a quiz\n\n";
    std::cout << "Select a #: ";
    std::cin >> option1;
    std::cout << std::endl;
    switch (option1) {
        case 1:
            std::cout << "Do you want to?\n\n1. Study characters\n2. Study pinyin\n\n";
            std::cout << "Select a #: ";
            std::cin >> option2;
            std::cout << std::endl;
            
            switch (option2) {
                case 1:
                    std::cout << "Press <ENTER> to continue...\n" << std::endl;
                    for (std::vector<chineseCharacters>::const_iterator iter = characterVec.begin(); iter != characterVec.end(); ++iter){
                        std::cout << iter->first <<": " << iter->second;
                        std::cout << std::endl;
                        std::cin.ignore();
                    }
                    break;
                case 2:
                    
                    break;
                default:
                    break;
            }
            break;
        case 2:
            std::cout << "Select difficulty #\n";
            std::cout << "1. Easy\n2. Medium\n3.Hard: ";
            std::cin >> option3;
            switch (option3) {
                case 1:{
                    std::cout << "Press <ENTER> to continue...\n" << std::endl;
                    for (std::vector<chineseCharacters>::const_iterator iter = characterVec.begin(); iter != characterVec.end(); ++iter){
                        std::cout << iter->first <<": " << iter->second << std::endl;
                        std::cin.ignore();
                    }
                    break;}
                case 2:
                    break;
                case 3:
                    break;
                default:
                    break;
            }
            break;
        default:
            break;
    }
    return 0;
}
