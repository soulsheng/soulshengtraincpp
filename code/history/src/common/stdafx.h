// stdafx.h : 标准系统包含文件的包含文件，
// 或是经常使用但不常更改的
// 特定于项目的包含文件
//

#pragma once

#ifndef _WIN32_WINNT		// 允许使用特定于 Windows XP 或更高版本的功能。
#define _WIN32_WINNT 0x0501	// 将此值更改为相应的值，以适用于 Windows 的其他版本。
#endif						

#include <cstdio>
#include <conio.h>

#include <iostream>				//  Tip 1：声明函数cout，C++标准库的输出函数，功能同C语言的printf

using namespace std;			//	Tip 2：C++标准库的函数声明都属于std 的名字空间，
								//  默认情况下使用cout时必须加上前缀std::(即std::cout)，
								//  using 指示符告诉编译器将要使用在名字空间std 中声明的函数，无须加前缀！


#include <string>
								//  Tip 3：C++中有两种注释符号：
								//  第一种是注释对/* */，与C 语言中的一样，注释可以跨越多行；
								//  第二种是双斜线//，是C++ 新增的注释方式，它可用来注释一个单行。
								//  重大区别：C注释对不能嵌套，即一个注释对不能出现在另外一个注释对之中，
								//            而C++双斜线//解决了这种嵌套注释的限制；
								//  例如：
								///*  这种/*注释*/不支持，无法编译通过。 */
								//  这种//注释支持，不影响程序编译。