#include <iostream>
#include "fundamental_8_points.h"

int main()
{
    // 第一幅图像中的对应点
    math::Matrix<double, 3, 8> pset1;
    pset1(0, 0) = 0.180123 ; pset1(1, 0)= -0.156584; pset1(2, 0)=1.0;
    pset1(0, 1) = 0.291429 ; pset1(1, 1)= 0.137662 ; pset1(2, 1)=1.0;
    pset1(0, 2) = -0.170373; pset1(1, 2)= 0.0779329; pset1(2, 2)=1.0;
    pset1(0, 3) = 0.235952 ; pset1(1, 3)= -0.164956; pset1(2, 3)=1.0;
    pset1(0, 4) = 0.142122 ; pset1(1, 4)= -0.216048; pset1(2, 4)=1.0;
    pset1(0, 5) = -0.463158; pset1(1, 5)= -0.132632; pset1(2, 5)=1.0;
    pset1(0, 6) = 0.0801864; pset1(1, 6)= 0.0236417; pset1(2, 6)=1.0;
    pset1(0, 7) = -0.179068; pset1(1, 7)= 0.0837119; pset1(2, 7)=1.0;
    //第二幅图像中的对应
    math::Matrix<double, 3, 8> pset2;
    pset2(0, 0) = 0.208264 ; pset2(1, 0)= -0.035405 ; pset2(2, 0) = 1.0;
    pset2(0, 1) = 0.314848 ; pset2(1, 1)=  0.267849 ; pset2(2, 1) = 1.0;
    pset2(0, 2) = -0.144499; pset2(1, 2)= 0.190208  ; pset2(2, 2) = 1.0;
    pset2(0, 3) = 0.264461 ; pset2(1, 3)= -0.0404422; pset2(2, 3) = 1.0;
    pset2(0, 4) = 0.171033 ; pset2(1, 4)= -0.0961747; pset2(2, 4) = 1.0;
    pset2(0, 5) = -0.427861; pset2(1, 5)= 0.00896567; pset2(2, 5) = 1.0;
    pset2(0, 6) = 0.105406 ; pset2(1, 6)= 0.140966  ; pset2(2, 6) = 1.0;
    pset2(0, 7) =  -0.15257; pset2(1, 7)= 0.19645   ; pset2(2, 7) = 1.0;

    math::Matrix<double,3,3> F =  fundamental_8_points(pset1,pset2);

    std::cout<<"Fundamental matrix after singularity constraint is:\n "<<F<<std::endl;

    std::cout<<"Result should be: \n"<<"-0.0315082 -0.63238 0.16121\n"
                                     <<"0.653176 -0.0405703 0.21148\n"
                                     <<"-0.248026 -0.194965 -0.0234573\n" <<std::endl;
    std::cin.get();
}
