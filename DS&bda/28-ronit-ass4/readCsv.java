import java.io.*;

public class readCsv {
 public static void main(String args[]){

        String line="";
        String splitBy=",";
        try{
            BufferedReader br= new BufferedReader(new
            FileReader("C:\\ronit\\DS&bda\\28-ronit-ass4\\Dataset (1).csv"));
            while((line = br.readLine()) !=null){
            String [] country = line.split(splitBy);
            System.out.println("Country [Name= "+country[0] + ", Tempreture=" +country[1] +"Dew_point="+country[2] + ", Wind=" + country[3] );
             }      
        }
        catch (IOException e){
        e.printStackTrace();
        }
       
}