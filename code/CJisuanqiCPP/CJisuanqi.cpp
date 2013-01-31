
#include "stdafx.h"
#include "CJisuanqi.h"

//---------------------------------------------------------------------
void CJisuanqi::shuru(int i)
{
	if (yunsuanfu==' ')
	{
		jiashu=jiashu*10 + i;
		
		m_jieguo=jiashu;
	}
	else 
	{
		beijiashu=beijiashu*10 + i;

		m_jieguo=beijiashu;
	}
}


void CJisuanqi::setfuhao(char fuhao)
{
	yunsuanfu = fuhao;
}


void CJisuanqi::calc()
{
	switch(yunsuanfu)
	{
	case '+':
		m_jieguo= jiashu+beijiashu;
		break;

	case '-':
		m_jieguo= jiashu-beijiashu;
		break;

	case '*':
		m_jieguo= jiashu*beijiashu;
		break;

	case '/':
		m_jieguo= jiashu/beijiashu;
		break;

	default:
		m_jieguo= -1;
		break;	
	}
}

void CJisuanqi::setdefault()
{
	yunsuanfu = ' ';
	m_jieguo=0;
	jiashu=0;
	beijiashu=0;
}

//---------------------------------------------------------------------
