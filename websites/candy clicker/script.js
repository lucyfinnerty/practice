/* */
let clicks=0

function candyClicked() {
    clicks++;
    const clickDisplay = document.getElementById("click-display");
    if (clickDisplay) {
        clickDisplay.textContent = `Candy Clicks: ${clicks}`;
    }
    // get the candy image
    const candyImage = document.getElementById("candy-img");

    // add the 'clicked' class to apply the pop-out effect
    candyImage.classList.add("clicked");

    // remove the 'clicked' class after 75ms
    setTimeout(() => {
        candyImage.classList.remove("clicked");
    }, 75);
}
function buy() {
}
function displayStats() {

}