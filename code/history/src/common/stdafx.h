// stdafx.h : ��׼ϵͳ�����ļ��İ����ļ���
// ���Ǿ���ʹ�õ��������ĵ�
// �ض�����Ŀ�İ����ļ�
//

#pragma once

#ifndef _WIN32_WINNT		// ����ʹ���ض��� Windows XP ����߰汾�Ĺ��ܡ�
#define _WIN32_WINNT 0x0501	// ����ֵ����Ϊ��Ӧ��ֵ���������� Windows �������汾��
#endif						

#include <cstdio>
#include <conio.h>

#include <iostream>				//  Tip 1����������cout��C++��׼����������������ͬC���Ե�printf

using namespace std;			//	Tip 2��C++��׼��ĺ�������������std �����ֿռ䣬
								//  Ĭ�������ʹ��coutʱ�������ǰ׺std::(��std::cout)��
								//  using ָʾ�����߱�������Ҫʹ�������ֿռ�std �������ĺ����������ǰ׺��


#include <string>
								//  Tip 3��C++��������ע�ͷ��ţ�
								//  ��һ����ע�Ͷ�/* */����C �����е�һ����ע�Ϳ��Կ�Խ���У�
								//  �ڶ�����˫б��//����C++ ������ע�ͷ�ʽ����������ע��һ�����С�
								//  �ش�����Cע�ͶԲ���Ƕ�ף���һ��ע�ͶԲ��ܳ���������һ��ע�Ͷ�֮�У�
								//            ��C++˫б��//���������Ƕ��ע�͵����ƣ�
								//  ���磺
								///*  ����/*ע��*/��֧�֣��޷�����ͨ���� */
								//  ����//ע��֧�֣���Ӱ�������롣