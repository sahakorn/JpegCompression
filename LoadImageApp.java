import java.awt.*;
import java.awt.event.*;
import java.awt.image.*;
import java.io.*;
import javax.imageio.*;
import javax.swing.*;


public class LoadImageApp extends Component {
          
    BufferedImage img;


    public LoadImageApp() {
       try {
           img = ImageIO.read(new File("img_8_8.jpg"));
       } catch (IOException e) {
       }

    }

   

    public static void main(String[] args) {

      System.println("hello world");
    }
}
