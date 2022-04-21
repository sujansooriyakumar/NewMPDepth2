using System.Text;
using Core;

namespace Client {
    class UdpClient : UdpBase
    {
        UdpClient(){}

        public static UdpClient ConnectTo(string hostname, int port)
        {
            UdpClient connection = new UdpClient();
            connection.Client.Connect(hostname, port);
            return connection;
        }

        public void Send(string message)
        {
            byte[] datagram = Encoding.ASCII.GetBytes(message);
            Client.Send(datagram, datagram.Length);
        }
    


    }
}