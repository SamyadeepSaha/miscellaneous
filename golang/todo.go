package main

import "fmt"

func main() {
	var shortGolang = "Watch Golang crash course"
	var fullGolang = "Watch Golang full course"
	var rewardDessert = "Reward myself with a donut"

	var taskItems = []string{shortGolang, fullGolang, rewardDessert}

    //fmt.Println("###### Welcome to My todo app ######")

	printTasks(taskItems)
	taskItems = addTask(taskItems, "Go learn another language")
	printTasks(taskItems)

}


func printTasks(taskItems []string) {
	fmt.Println("List of task")
	//fmt.Println("Tasks:", taskItems)

	for index, task := range taskItems {
		//fmt.Println(index, task)
		fmt.Printf("%d) %s\n", index + 1, task)
	}
}

func addTask(taskItems []string, newTask string) ([]string) {
	return append(taskItems, newTask)
}
