public class CheckingAccount {

    String name;
	double balance;

	public CheckingAccount(String name, double balance){
		this.name = name;
		this.balance = balance;
	}
	public String getName(){
		return name;
	}
	public void setName(String name){
		this.name = name;
	}
	public double getBalance(){
		return balance;
	}
    public int getRoutingNumber() {
        return 0;
    }
    public int getAccountNumber() {
        return 0;
    }
	public void deposit(double money) {
		this.balance += money;
	}
	public void withdraw(double money){
		this.balance -= money;
	}
	public String printAccountSummary(){
		return null;
	}
}
