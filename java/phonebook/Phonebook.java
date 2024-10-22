import java.util.HashMap;

public class Phonebook { 

    private HashMap<String, Contact> phonebook; 

    public Phonebook() {
        phonebook = new HashMap<>();
    }

    public void addContact(String name, String phoneNumber) {
        phonebook.put(name, new Contact(name, phoneNumber));
    }
    public void removeContact(String name) {
        phonebook.remove(name);
    }
    public Contact searchContact(String name) {
        return phonebook.get(name);
    }
    public void displayAllContacts() {
        System.out.println("Phonebook\n==========================");
        for(Contact contact : phonebook.values()) {
            System.out.println(contact.getName() +": " + contact.getPhoneNumber());
        }
    }

    public void start() {
        // TODO Auto-generated method stub
        throw new UnsupportedOperationException("Unimplemented method 'start'");
    }
}