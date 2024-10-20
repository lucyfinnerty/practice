const startDate = new Date("2023-02-19T00:00:00");
function updateTimer() {
    const now = new Date();
    const timeDifference = now - startDate;

    const days = Math.floor(timeDifference / (1000 * 60 * 60 * 24));
    const hours = Math.floor((timeDifference % (1000 * 60 * 60 * 24)) / (1000 * 60 * 60));
    const minutes = Math.floor((timeDifference % (1000 * 60 * 60)) / (1000 * 60));
    const seconds = Math.floor((timeDifference % (1000 * 60)) / 1000);

    document.getElementById('timer').innerHTML = `${days}d ${hours}h ${minutes}m ${seconds}s`;

    setTimeout(updateTimer, 1000);
}
updateTimer();