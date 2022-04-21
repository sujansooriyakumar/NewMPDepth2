using System.Net;
using System.Text;
using Core;
using JetBrains.Annotations;

namespace Server {
    class UdpServer : UdpBase
    {
        [PublicAPI]
        public UdpServer(int port) : this(new IPEndPoint(IPAddress.Any,port))
        {
        }

        [PublicAPI]
        public UdpServer(IPEndPoint endpoint) {
            Client = new System.Net.Sockets.UdpClient(endpoint);
        }

        public string StreamingIP => Dns.GetHostAddresses(Dns.GetHostName()).ToString();

        public void Reply(string message,IPEndPoint endpoint)
        {
            byte[] datagram = Encoding.ASCII.GetBytes(message);
            Client.Send(datagram, datagram.Length, endpoint);
        }

    }
}