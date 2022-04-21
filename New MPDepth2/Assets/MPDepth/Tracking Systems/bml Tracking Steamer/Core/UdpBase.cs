using System.Net.Sockets;
using System.Text;
using System.Threading.Tasks;
using JetBrains.Annotations;

namespace Core {
    public abstract class UdpBase
    {
        protected UdpClient Client;

        int timeoutMilliseconds = 1000;
        
        protected UdpBase() {
            
            Client = new UdpClient {
                Client = {
                    SendTimeout = timeoutMilliseconds, 
                    ReceiveTimeout = timeoutMilliseconds
                }
            };
        }

        [PublicAPI]
        public async Task<ReceivedStreamData> Receive()
        {
            UdpReceiveResult result = await Client.ReceiveAsync();
            return new ReceivedStreamData()
            {
                Message = Encoding.ASCII.GetString(result.Buffer, 0, result.Buffer.Length),
                Sender = result.RemoteEndPoint
            };
        }

        public void Close() {
            Client.Close();
            Client.Dispose();
        }
    
    }
}