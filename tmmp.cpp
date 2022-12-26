using namespace std;

// 定义电梯类
class Elevator {
private:
    int currentFloor; // 当前楼层
    vector requestFloors; //请求楼层，用vector实现
public:
    Elevator() {
        currentFloor = 0; // 初始化为0楼
    }
    // 请求电梯到达某楼层
    void addRequestFloor(int floor) {
        requestFloors.push_back(floor);
    }
    // 电梯往上走一层
    void goUpFloor() {
        currentFloor++;
        cout  requestFloor) {
                // 当前楼层大于请求楼层，往下走
                goDownFloor();
            } else {
                // 到达请求楼层，开关门
                openDoor();
                closeDoor();
                requestFloors.erase(requestFloors.begin()); // 删除已处理的请求
            }
        }
    }
};

int main() {
    // 创建一个电梯实例
    Elevator elevator;
    // 添加三个请求楼层
    elevator.addRequestFloor(4);
    elevator.addRequestFloor(2);
    elevator.addRequestFloor(6);
    // 开始模拟
    elevator.simulate();
    return 0;
}