import java.util.Scanner;

public class PhonebookFrontend extends Phonebook{

    public static Phonebook phonebook = new Phonebook();
    public static Scanner input = new Scanner(System.in);

    public static Phonebook startMenu(Phonebook phonebook) {
        System.out.println("        Phonebook\n==========================");
        System.out.println("1. Add a contact\n"+
                           "2. Remove a contact\n" + 
                           "3. Search for a contact\n" + 
                           "4. Display all contacts\n" +
                           "5. Quit application");
        System.out.println("Please enter ");
        int option = input.nextInt();
        input.nextLine();
        switch(option) {
            case 1: add();
            break;
            case 2: remove();
            break;
            case 3: search();
            break;
            case 4: phonebook.displayAllContacts();
            break;
            case 5: exit();
            break;
        }
        return phonebook;
    }
    public static boolean add() {
        boolean added = false;
        System.out.print("Please enter a full name: ");
        String name = input.nextLine();
        System.out.print("Please enter their phone number (xxx-xxx-xxxx): ");
        String phoneNumber = input.nextLine();
        Contact contact = new Contact(name, phoneNumber);
        phonebook.addContact(contact);
        
        if(phonebook.containsKey(contact.getName())) {
            System.out.println("New contact successfully added!");
            added=true;
        } else {
            System.out.print("Could not add contact, would you like to try again?(y or n): ");
            added=false;
            String answer = input.nextLine();
            if(answer.equalsIgnoreCase("y")){
                add();
            } else {
                exit();
            }
        }
        return added;
    }
    public static Phonebook remove() {
        return phonebook;
    }
    public static Phonebook search() {
        return phonebook;
    }
    public static Phonebook exit() {
        
        return phonebook;
    }
    public static void main(String[] args) {
        while(true) {
            startMenu(phonebook);
        }
    }
}
