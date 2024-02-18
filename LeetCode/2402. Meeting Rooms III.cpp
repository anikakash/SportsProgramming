class Solution {
public:
    int mostBooked(int n, vector<vector<int>>& meetings) {
        int m = meetings.size();

        sort(begin(meetings), end(meetings)); //sort by starting time of meetings

        vector<int> roomsUsedCount(n, 0); //Each room is used 0 times in the beginning
        vector<long long> lastAvailableAt(n, 0); //Each room will be last available at
        

        for(vector<int>& meet : meetings) {
            int start  = meet[0];
            int end    = meet[1];
            bool found = false;

            long long EarlyEndRoomTime = LLONG_MAX;
            int EarlyEndRoom     = 0;

            //Find the first available meeting room
            for(int room = 0; room < n; room++) {
                if(lastAvailableAt[room] <= start) {
                    found = true;
                    lastAvailableAt[room] = end;
                    roomsUsedCount[room]++;
                    break;
                }

                if(lastAvailableAt[room] < EarlyEndRoomTime) {
                    EarlyEndRoom = room;
                    EarlyEndRoomTime = lastAvailableAt[room];
                }
            }

            if(!found) {
                lastAvailableAt[EarlyEndRoom] += (end - start);
                roomsUsedCount[EarlyEndRoom]++;
            }

        }

        int resultRoom = -1;
        int maxUse     = 0;  
        for(int room = 0; room < n; room++) {
            if(roomsUsedCount[room] > maxUse) {
                maxUse = roomsUsedCount[room];
                resultRoom = room;
            }
        }

        return resultRoom;
    }
};