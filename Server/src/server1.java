import java.net.ServerSocket;
import java.net.Socket;

public class server1 {
    public static void main(String[] args)throws Exception{

        ServerSocket server = new ServerSocket(2000);
        Socket client = null;
        boolean f = true;
        while(f){
            client = server.accept();
            System.out.println("与客户端连接成功！");
            new Thread(new ServerThread(client)).start();
        }
        server.close();
    }
}