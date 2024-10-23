import java.util.HashMap;

public class Phonebook { 

    private HashMap<String,Contact> phonebook; 

    public Phonebook() {
        phonebook = new HashMap<>();
    }
    public boolean containsKey(String name) {
        return phonebook.containsKey(name);
    }
    public void addContact(Contact contact) {
        phonebook.put(contact.getName(), contact);
    }
    public void removeContact(String name) {
        phonebook.remove(name);
    }
    public Contact searchContact(String name) {
        return phonebook.get(name);
    }
    public void displayAllContacts() {
        System.out.println("        Phonebook\n==========================");
        for(Contact contact : phonebook.values()) {
            System.out.println(contact.getName() +": " + contact.getPhoneNumber());
        }
    }
}