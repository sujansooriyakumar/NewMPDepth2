
namespace Server {
    static class Format 
    {
    
        const string ServerPrefix = "<color=#01607A><b>[Stream Receiver Client]</b></color>";
        
        internal static string Server(string message) {
            return $"{ServerPrefix} {message}";
        }
    
    }
}
