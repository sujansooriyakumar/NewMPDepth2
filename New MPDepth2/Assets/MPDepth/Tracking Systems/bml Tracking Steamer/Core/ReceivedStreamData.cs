using System.Net;

namespace Core {
    public struct ReceivedStreamData
    {
        public IPEndPoint Sender;
        public string Message;
    }
}