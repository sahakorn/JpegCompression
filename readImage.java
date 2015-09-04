import java.*;
import java.nio.file.Files;
import java.io.File;

public class readImage{
public static void main(String[] args)
  {
   File imgPath = new File("img_8_8.jpg");
	BufferedImage bufferedImage = ImageIO.read(imgPath);
		
    System.out.println("Hello, World!");
  }
}