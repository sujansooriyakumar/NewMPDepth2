
namespace Client {
    static class Format 
    {
    
        const string ClientPrefix = "<color=#025639><b>[Stream Receiver Client]</b></color>";
        
        internal static string Client(string message) {
            return $"{ClientPrefix} {message}";
        }
    
    }
}
