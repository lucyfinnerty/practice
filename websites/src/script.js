function addTask(day) {
    const inputField = document.getElementById(`${day}-input`);
    const taskList = document.getElementById(`${day}-tasks`);
    const taskValue = inputField.ariaValueMax.trim();

    if(taskValue) {
        const listItem = document.createElement('li');
        listItem.textContent = taskValue;
        taskList.appendChild(listItem);
        inputField.value = '';
    } else {
        alert("Enter a task!")
    }
}