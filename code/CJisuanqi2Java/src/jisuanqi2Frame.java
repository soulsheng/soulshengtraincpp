/**
 * @(#)jisuanqi2Frame.java
 *
 * JFC jisuanqi2 application
 *
 * @author 
 * @version 1.00 2013/1/31
 */

import java.awt.*;
import java.awt.event.*;
import javax.swing.*;


public class jisuanqi2Frame extends JFrame {
    
    /**
     * The constructor
     */ 
     	
     JButton shuziArray[]=new JButton[10];
     JButton yunsuanfuArray[]=new JButton[4];
     JButton dengyu;
     
     JLabel		jieguoBiao = new JLabel("½á¹û£º");
     JTextField	jieguoAnniu=new JTextField(20);
     	 
     String  shuziXinxi[]={"0","1","2","3","4","5","6","7","8","9"}; 
     String  fuhaoXinxi[]={"+","-","*","/"};
     
     CJisuanqi jisuan;
     
	public jisuanqi2Frame() {
                
        setLayout( new FlowLayout(FlowLayout.LEFT, 10, 20) );
        
        add( jieguoBiao );
        add( jieguoAnniu );
        
        for( int i=0; i<=9 ; i++ )
        {
        	shuziArray[i] = new JButton( shuziXinxi[i] );
        	shuziArray[i].addActionListener( new ShuButton() );
        	add( shuziArray[i] );
        }  
       
        for( int i=0; i<=3 ; i++ )
        {
        	yunsuanfuArray[i] = new JButton( fuhaoXinxi[i] );    	
        	yunsuanfuArray[i].addActionListener( new FuhaoButton() );
        	add( yunsuanfuArray[i] );
        }  
        	
        dengyu = new JButton("=");
        dengyu.addActionListener( new DengyuButton() );
        add( dengyu );
        	
        setTitle("jisuanqi2");
        
        setSize(new Dimension(400, 400));
        
        // Add window listener.
        this.addWindowListener
        (
            new WindowAdapter() {
                public void windowClosing(WindowEvent e) {
                    jisuanqi2Frame.this.windowClosed();
                }
            }
        );  
        	
        jisuan = new CJisuanqi();
        jisuan.setdefault();	
       
    }
    
     class ShuButton implements ActionListener{
		public void actionPerformed(ActionEvent e){
			String code = e.getActionCommand();
			int i = code.charAt(0) - '0';
			jisuan.shuru(i);
			
			String sJieguo = String.valueOf( jisuan.m_jieguo );
			jieguoAnniu.setText( sJieguo );
			}
		}
		
		class FuhaoButton implements ActionListener{
		public void actionPerformed(ActionEvent e){
			String code = e.getActionCommand();
			char i = code.charAt(0);
			jisuan.setfuhao(i);
			}
		}
		
		class DengyuButton implements ActionListener{
		public void actionPerformed(ActionEvent e){
			
			jisuan.calc();
			
			String sJieguo = String.valueOf( jisuan.m_jieguo );
			jieguoAnniu.setText( sJieguo );
			}
		}
    
    /**
     * Shutdown procedure when run as an application.
     */
    protected void windowClosed() {
    	
    	// TODO: Check if it is safe to close the application
    	
        // Exit application.
        System.exit(0);
    }
}