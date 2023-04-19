import java.io.*;

public class calculateMean {
 public static void main(String[] args)
 {
    BufferedReader br = null;
    String line = "";
    String splitBy = ",";
    int sum1=0,sum2=0,sum3=0,count=1;
    try
    {
        br = new BufferedReader(new FileReader("C:\\ronit\\DS&bda\\28-ronit-ass4\\Dataset (1).csv"));
        br.readLine();
        try
        {
            while ((line = br.readLine()) != null)
            {
                String[] city = line.split(splitBy);
                System.out.println("City [Name=" + city[0] + ", Temperature=" + city[1] + ", Dew_Point=" +
                city[2] + ", Wind=" + city[3] );
                String[] country = line.split(",");
                int dew=Integer.parseInt(country[2]);
                int temp=Integer.parseInt(country[1]);
                int wind=Integer.parseInt(country[2]);
                sum1=sum1+temp;
                sum2=sum2+dew;
                sum3=sum3+wind;
                count++;
            }
        }
        catch (NumberFormatException | IOException e)
        {
            System.out.println("NA"); e.printStackTrace();
        }
        br.close();
    }
    catch (Exception e)
    {
        e.printStackTrace();
    }

    System.out.println("mean of Temperature ="+sum1/count);
    System.out.println("mean of Dew point="+sum2/count);
    System.out.println("mean of Wind ="+sum3/count);
    }
    
}