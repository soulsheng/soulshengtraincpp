/**
 * @(#)CJisuanqi.java
 *
 *
 * @author 
 * @version 1.00 2013/1/31
 */


public class CJisuanqi {

    
public 
	int jiashu;
	int beijiashu;
	char yunsuanfu;
	int	 m_jieguo;

public CJisuanqi() {  }

public 
	void shuru(int i)
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
	void setfuhao(char fuhao)
	{
		yunsuanfu = fuhao;
	}
	void calc()
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
	void setdefault()
	{
		yunsuanfu = ' ';
		m_jieguo=0;
		jiashu=0;
		beijiashu=0;	
	}
}


//---------------------------------------------------------------------
