// user should be able to create task
// stories can have further subtask
// user should be able to create sprint
// add/remove task from sprint
// user should able to print sprint/ delayed task
// assign task to user

#include<bits/stdc++.h>
using namespace std;
typedef long long int intl;

class Task{};
class Sprint{
    private:
    int start_date;
    int end_date;
    int name;
    vector<Task>tasks;

    public:
    addTask();
    printSprint();
    getTasks();
}
enum TaskStatus {
    "PROGRESS",
    "DEV",
    "TESTING",
    "COMPLETE"
};
enum TaskType {
    "STORY",
    "FEATURE",
    "BUG"
}
class User{};
class Task {
    private:
        int id;
        string name;
        string subtask;
        User user;
        TaskType taskType;
        TaskStatus TaskStatus;
    public:
        getUniqueId();

}

class User {
    private: 
    int id;
    vector<Task>taskList;
    vector<Sprint>sprintList;
    public:
    Task createTask(TaskType);
    Task createTask(String);
    Sprint createSprint(int, int , string);
    bool addToSprint(Sprint, Task);
    bool removeFromSprint(Sprint, Task);
    void printAllTasks();
    bool changeStatus(Task, TaskStatus);
}

int main()
{
    User u1,u2;
    Task t1 = u1.createTask(TaskType::FEATURE);
    Task t2 = u1.createTask(TaskType::BUG);
    Task t3 = u2.createTask(TaskType::FEATURE);
    Task t4 = u2.createTask(TaskType::STORY);

    Sprint s1 = u1.createSprint(1,10,"sprint1");
    Sprint s2 = u2.createSprint(8,20, "sprint2");
    u1.changeStatus(t2, TaskStatus::PROGRESS);

    u1.addToSprint(s1,t1);
    u1.addToSprint(s1,t2);
    u1.addToSprint(s2,t1);
    u1.removeFromSprint(s1,t1);

    u1.addToSprint(s1,t2);
    u2.removeFromSprint(s1,t2);

return 0;
}