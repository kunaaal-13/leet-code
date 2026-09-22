class Solution {
public:
    char slowestKey(vector<int>& releaseTimes, string keysPressed) {
        // Setup the initial baseline using the first key
        int maxDuration = releaseTimes[0];
        char slowest = keysPressed[0];
        
        for (int i = 1; i < releaseTimes.size(); i++) {
            // Calculate how long this specific key was held down
            int currentDuration = releaseTimes[i] - releaseTimes[i - 1];
            
            // If it beats the record, update our trackers
            if (currentDuration > maxDuration) {
                maxDuration = currentDuration;
                slowest = keysPressed[i];
            } 
            // If it ties the record, take the strictly larger character
            else if (currentDuration == maxDuration) {
                if (keysPressed[i] > slowest) {
                    slowest = keysPressed[i];
                }
            }
        }
        
        return slowest;
    }
};