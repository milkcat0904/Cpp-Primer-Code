//
// Created by catidog on 2020/10/9.
//

# include <iostream>
#include "../include/Sales_item.h"

// 1.3 打印 Hello, World
void Solution13(){
    std:: cout << "Hello, World" << std:: endl;
}

// 1.4 计算两个输入的加法和乘法 输入的间隔用回车
int Solution14(){
    int num1 = 0, num2 = 0;
    std:: cout << "Please input number: " << std:: endl;
    std:: cin >> num1 >> num2;
    std:: cout << "Sum is " << num1 + num2 << std:: endl;
    std:: cout << "Multiply is " << num1*num2 << std:: endl;

    // 1.5 打印成一行
    std:: cout << "Sum is " << num1 + num2 << ", Multiply is " << num1*num2 << std:: endl;
    return 0;
}

// 1.9 使用while将50到100的整数相加
int Solution19(){
    int sum = 0, num = 50;
    while (num <= 100){
        sum += num;
        ++num;
    }
    std:: cout << "50到100的整数相加结果为：" << sum << std:: endl;
    return 0;
}

// 1.10 使用--计算0到10的整数和
int Solution110(){
    int sum = 0, num = 10;
    while (num >= 0){
        sum += num;
        --num;
    }
    std:: cout << "0到10的整数相加结果为：" << sum << std:: endl;
    return 0;
}

// 1.11 输入两个整数，打印出两个整数范围内所有的整数
int Solution111(){
    int start = 0, end = 0, num1 = 0, num2 = 0;
    std:: cout << "请输入两个整数: " << std:: endl;
    std:: cin >> num1 >> num2;

    // 判断哪个数字最小 相同直接return 0
    if (num1-num2 < 0){
        start = num1;
        end = num2;
    }
    else if (num1 == num2){
        std:: cout << "两个数字相同，请输入不同的数字" << std:: endl;
        return 0;
    }
    else{
        start = num2;
        end = num1;
    }

    while (start <= end){
        std:: cout << start << std:: endl;
        ++start;
    }
    return 0;
}

// 1.12 sum的结果为0
int Solution112(){
    int sum = 0;
    for (int i = -100; i <= 100; ++i){
        sum += i;
    }
    std:: cout << sum << std:: endl;
    return 0;
}

// 1.13 使用for循环写1.11
int Solution113(){
    int start, end, num1 = 0, num2 = 0;
    std:: cout << "请输入两个整数：" << std:: endl;
    std:: cin >> num1 >> num2;

    if (num1 < num2){
        start = num1;
        end = num2;
    }
    else if (num1 == num2){
        std:: cout << "请输入两个不同的数字" << std:: endl;
        return 0;
    } else{
        start = num2;
        end = num1;
    }

    for (int i = start; i <= end; ++i){
        std:: cout << i << std:: endl;
    }
    return 0;
}

// 1.16 从cin读取一组数，输出他们的和

int Solution116(){
    int val, sum = 0;

    // while循环取到输入 无论多少个输入
    std:: cout << "请输入一组数字：" << std:: endl;
    while (std:: cin >> val){
        sum += val;
        std:: cout << sum << std:: endl;
    }
    std:: cout << "输入数字之和为：" << sum << std:: endl;
    return 0;
}

// 1. 17 记录输入的数字会连续出现的次数

int Solution117(){
    int val, tmp;

    std:: cout << "请输入一组数字：" << std:: endl;

    // tmp记录第一个数， val记录后面
    if (std:: cin >> tmp){
        int cnt = 1;
        while (std::cin >> val){
            if (val == tmp){
                cnt += 1;
            } else{
                std:: cout << tmp << "出现次数为：" << cnt << std:: endl;
                tmp = val;
                cnt = 1;
            }
        }
        // 最后一个数在循环外打印
        std:: cout << tmp << "出现次数为：" << cnt << std:: endl;
    }
    return 0;
}

// 1.20 使用Sales_item.h 读取一组书籍的销售记录，将每条记录打印出来 input: 0-201-78345-X 3 20.00
int Solution120(){
    for (Sales_item item; std:: cin >> item; std:: cout << item << std:: endl);
    return 0;
}

// 1.21 读取量ISBN相同的Sales_item对象 item.isbn()，输入出他们的和
int Solution121(){
    Sales_item item1, item2;
    std:: cin >> item1 >> item2;
    if (item1.isbn() == item2.isbn()){
        std:: cout << "两个item的和为：" << item1 + item2 << std:: endl;
    } else{
        std:: cerr << "两个ISBN不相同" << std:: endl;
    }
    return 0;
}

// 1.20 读取输入里连续的具有相同的ISBN的销售记录，输出所有记录的和

int Solution122(){
    Sales_item val;
    if (std:: cin >> val){
        Sales_item tmp;
        while (std:: cin >> tmp){
            if (tmp.isbn() == val.isbn()){
                val += tmp; // 记录和
            } else{
                std:: cout << tmp << std::endl;
                val = tmp;
            }
        }
        std:: cout << tmp << std:: endl;
    }
    return 0;
}

// 1.21 读取多条销售记录，统计连续的ISBN相同的的个数
int Solution123(){
    Sales_item val;
    if (std:: cin >> val){
        Sales_item tmp;
        int cnt = 1;
        while (std:: cin >> tmp){
            if (tmp.isbn() == val.isbn()){
                ++cnt;
            } else{
                std:: cout << "ISBN为：" << tmp.isbn() << "的销售记录是：" << cnt;
                val = tmp;
                cnt = 1;
            }
        }
        std:: cout << "ISBN为：" << tmp.isbn() << "的销售记录是：" << cnt;
    }
    return 0;
}