class SeatManager {
public:
    priority_queue<int, vector<int>, greater<int>> seats;
    SeatManager(int n) {
        for(int seatNumber=1; seatNumber<=n; seatNumber++ ){
            seats.push(seatNumber);
        }
    }
    
    int reserve() {
        int seatNumber = seats.top();
        seats.pop();
        return seatNumber;
    }
    
    void unreserve(int seatNumber) {
        seats.push(seatNumber);
    }
};

/**
 * Your SeatManager object will be instantiated and called as such:
 * SeatManager* obj = new SeatManager(n);
 * int param_1 = obj->reserve();
 * obj->unreserve(seatNumber);
 */