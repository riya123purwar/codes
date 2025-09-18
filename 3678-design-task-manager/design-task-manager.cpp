class TaskManager {
public:

    typedef pair<int, int>P;

    priority_queue<P> maxheap;
    unordered_map<int, int> taskpriority;//task->priority k saath likhega
    unordered_map<int, int> taskownermap;// taskid and user id;


    TaskManager(vector<vector<int>>& tasks) {
       for(auto &task : tasks){
        add(task[0], task[1], task[2]);
       }

    }
    
    void add(int userId, int taskId, int priority) {
        maxheap.push({priority, taskId});
        taskpriority[taskId]= priority;
        taskownermap[taskId]= userId;
    }
    
    void edit(int taskId, int newPriority) {
        maxheap.push({newPriority, taskId});
        taskpriority[taskId]= newPriority;
    }
    
    void rmv(int taskId) {
        taskpriority[taskId]= -1;
    }
    
    int execTop() {
        while(!maxheap.empty()){
            auto [prio, taskId] = maxheap.top();
            maxheap.pop();

            if(prio == taskpriority[taskId])// fresh
            {
                taskpriority[taskId]=-1;
                return taskownermap[taskId];
            }
        }
        return -1;
    }
};

/**
 * Your TaskManager object will be instantiated and called as such:
 * TaskManager* obj = new TaskManager(tasks);
 * obj->add(userId,taskId,priority);
 * obj->edit(taskId,newPriority);
 * obj->rmv(taskId);
 * int param_4 = obj->execTop();
 */