const inputBox = document.getElementById("input-box"); // user input later to be set to new li element
const listContainer = document.getElementById("list-container"); // container (ul) that holds user inputs (inputBox->li)

function addtask() {
    // if user tries to add no input, alert them
    if(inputBox.value == '') {
        alert("you must write a valid task")
    } else {
        // set li to new <li> element in index.html
        let li = document.createElement("li"); 
        // <li> element is set to valid user input
        li.innerHTML = inputBox.value;
        // add child node (<li>) to existing parent node (<ul>)
        listContainer.appendChild(li);
        
        // when task is added, an x mark must appear for option to delete

        // set span to new <span> element in index.html
        let span = document.createElement("span");
        // <span> element is set to unicode of multiplication 'x'
        span.innerHTML = "\u00d7"
        // add child node (<span>) to parent node (<li>)
        li.appendChild(span);
    }
    inputBox.value = "";
    saveData(); // saves added <li> and <span> elements
}

listContainer.addEventListener("click", function(e) {
    // if user input (<li>) is clicked
    if(e.target.tagName == "LI") {
        // toggle checked class attribute
        e.target.classList.toggle("checked");
        saveData();
    } 
    // if x mark <span> is clicked
    else if(e.target.tagName == "SPAN") {
        // remove parent element (<li>) of <span>
        e.target.parentElement.remove();
        saveData();
    }
}, false);

function saveData() {
    // saves the <ul> and its contents (<li> and <span> elements) and names it data
    localStorage.setItem("data", listContainer.innerHTML);
}
function showTask() {
    // sets existing <ul> to data (the saved <ul> and its content)
    listContainer.innerHTML = localStorage.getItem("data");
}
showTask()