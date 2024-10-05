function showInput(day) {
    const taskForm = document.getElementById(`${day}-task-form`);
    taskForm.style.display = 'block';  // Show the task input form when the button is clicked
}

function addTask(day) {
    const inputField = document.getElementById(`${day}-input`);
    const taskList = document.getElementById(`${day}-tasks`);
    const taskForm = document.getElementById(`${day}-task-form`);
    const taskValue = inputField.value.trim();  // Get the input value

    if (taskValue) {
        // Create a new task list item
        const listItem = document.createElement('li');
        listItem.textContent = taskValue;
        taskList.appendChild(listItem);

        // Clear the input field after submission
        inputField.value = '';

        // Hide the input field and the submit button again after adding the task
        taskForm.style.display = 'none';
    } else {
        alert("Please enter a task!");
    }
}