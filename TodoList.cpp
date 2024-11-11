#include<bits/stdc++.h>
#define int long long
using namespace std;
map<string, int> m;
int solve(){
	cout << "\nOptions :- \n\n";
	cout << "1. Add a task\n";
	cout << "2. View all tasks\n";
	cout << "3. Mark task as completed\n";
	cout << "4. Remove a task\n\n";
	cout << "Choose one of the given option from 1 to 4 --- ";
	int option;
	cin >> option;
	int index = 1;
	if(option < 1 || option > 4){
		cout << "Invalid Option\n";
	}
	else if(option == 1){
		string task;
		cout << "Enter the task name :- ";
		cin >> task;
		m[task] = 1;
		index++;
	}
	else if(option == 2){
		cout << "There are total " << index << " tasks in the list :- \n\n";
		int ind=1;
		for(auto it:m){
			cout << ind << ". " << it.first << " --- ( ";
			if(it.second == 1){
				cout << "Incomplete )\n";
			} 
			if(it.second == 2){
				cout << "Complete )\n";
			}
			ind++;
		}
	}
	else if(option == 3){
		cout << "Enter the task name you want to mark as complete - ";
		string task;
		cin >> task;
		if(m[task] == 0){
			cout << "This task is not in the list. \n";
		}
		else{
			m[task] = 2;
		}
	}
	else{
		cout << "Enter the task name you want to delete - ";
		string task;
		cin >> task;
		if(m[task] == 0){
			cout << "Task is already deleted.\n";
		}
		else{
			m.erase(task);
			index--;
		}
	}
	return 0;
}
signed main(){
	cout << "Enter number of operation you want to perform : ";
	int t;
	cin >> t;
	while(t--){
		solve();
	}
	cout << "\n-------------------------------- \n";
	cout << "Thank you !";
	cout << "\n-------------------------------- \n";
}