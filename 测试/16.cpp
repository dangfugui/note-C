import ;java.awt.Graphics;
import java.awt.Graphics2D;
import java.awt.Image;
import java.awt.Rectangle;
import java.awt.event.KeyAdapter;
import java.awt.event.KeyEvent;
import java.util.Random;
import java.util.concurrent.CopyOnWriteArrayList;

import javax.swing.ImageIcon;
import javax.swing.JFrame;
import javax.swing.JPanel;

import com.sun.awt.AWTUtilities;


public class Plane {
	public boolean die = false;
	
	public JFrame jf = new JFrame();
	Image plane = new ImageIcon("plane.png").getImage();
	Image enemy = new ImageIcon("enemy.png").getImage();
	Image bullet = new ImageIcon("bullet.png").getImage();
	Image explode = new ImageIcon("explode.png").getImage();
	public void init(){
		jf.setAlwaysOnTop(true);
		jf.setUndecorated(true);
		jf.setExtendedState(JFrame.MAXIMIZED_BOTH);
		jf.setSize(1280, 700);
		jf.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		AWTUtilities.setWindowOpaque(jf, false);
		
		
		final MyPane pane = new MyPane();
		jf.setContentPane(pane);
		
		jf.addKeyListener(new KeyAdapter() {
			@Override
			public void keyPressed(KeyEvent e) {
				if(e.getKeyCode() == KeyEvent.VK_UP){
					pane.setMy(pane.getMy()-10);
				}
				if(e.getKeyCode() == KeyEvent.VK_DOWN){
					pane.setMy(pane.getMy()+10);
				}
				if(e.getKeyCode() == KeyEvent.VK_LEFT){
					pane.setMx(pane.getMx()-10);
				}
				if(e.getKeyCode() == KeyEvent.VK_RIGHT){
					pane.setMx(pane.getMx()+10);
				}
			}
		});
		jf.setVisible(true);
		
		new Thread(new Runnable() {
			
			@Override
			public void run() {
				// TODO Auto-generated method stub
				while(!die){
					try {
						Thread.sleep(3);
					} catch (InterruptedException e) {
						// TODO Auto-generated catch block
						e.printStackTrace();
					}
					
					pane.repaint();
					
				}
			}
		}).start();
		
	new Thread(new Runnable() {
			
			@Override
			public void run() {
				// TODO Auto-generated method stub
				while(!die){
					try {
						Thread.sleep(3);
					} catch (InterruptedException e) {
						// TODO Auto-generated catch block
						e.printStackTrace();
					}
					
					pane.by = pane.by -3;
					pane.by = pane.by<-372? pane.my-372:pane.by;
					
				}
			}
		}).start();
		
	}
	
	public class MyPane extends JPanel{
		
		public int mx = 1024/2-50;
		public int my = 600;
		public int bx = mx +50 -9;
		public int by = my-372;
		
		
	
		public int getMx() {
			return mx;
		}
		public void setMx(int mx) {
			this.mx = mx;
			bx = mx +50 -9;
		}
		public int getMy() {
			return my;
		}
		public void setMy(int my) {
			this.my = my;
			by = my-372;
		}
		int count = 30;
		CopyOnWriteArrayList<Enemy> es = null;
		Random r = new Random();
		@Override
		public void paint(Graphics g) {
			Rectangle bounds = jf.getBounds();
			Graphics2D g2 = (Graphics2D) g;
			if(es == null){
				es = new CopyOnWriteArrayList<Plane.Enemy>();
				for (int i = 0; i < count; i++) {
					es.add(new Enemy(i*50, -r.nextInt(bounds.height)));
				}
			}
			
			//画敌人飞机
			for (Enemy e : es) {
				e.y = e.y+1;
				e.y = e.y>bounds.height?0:e.y;
				
				if((e.x>mx && e.x<my+100 && e.y>my && e.y<my+136)||(e.x+50>mx && e.x+50<my+100 && e.y>my && e.y<my+136)){
					die = true;
				}
				if(bx>e.x && bx<e.x+50){
					g2.translate(e.x, e.y);
					g2.drawImage(explode, 0, 0, null);
					g2.translate(-e.x, -e.y);
					es.remove(e);
				}
				g2.translate(e.x, e.y);
				g2.drawImage(enemy, 0, 0, null);
				g2.translate(-e.x, -e.y);
				
				
			}
			
			//画我们的飞机
			if(die){
				g2.translate(mx, my);
				g2.drawImage(explode, 0, 0, null);
				g2.translate(-mx, -my);
			}else{
				g2.translate(mx, my);
				g2.drawImage(plane, 0, 0, null);
				g2.translate(-mx, -my);
				
				g2.translate(bx, by);
				g2.drawImage(bullet, 0, 0, null);
				g2.translate(-bx, -by);
			}
		
			
			
		}
	}
	
	
	
	
	
	public static void main(String[] args){
		Plane p = new Plane();
		p.init();
	}
	
	

	public class Enemy{
		public int x;
		public int y;
		
		public Enemy(int x, int y) {
			this.x = x;
			this.y = y;
		}
		public int getX() {
			return x;
		}
		public void setX(int x) {
			this.x = x;
		}
		public int getY() {
			return y;
		}
		public void setY(int y) {
			this.y = y;
		}
		
		
	}
}
