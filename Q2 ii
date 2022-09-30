#include <iostream>
#include <vector>
#include <algorithm>

void transmit_item(int i){
    if(i > 35){
        std::cout<<i<<std::endl;
    }
}

void transmit_log(std::vector<int> log){
    std::sort(std::begin(log), std::end(log));
    std::for_each(log.cbegin(), log.cend(), transmit_item);
}

int main()
{
    std::vector<int> log = {24, 20, 37, 42, 34, 45, 38};
    transmit_log(log);
    return 0;
}
