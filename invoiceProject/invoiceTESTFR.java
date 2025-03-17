/**
 *
 * @author Evelyn Luo
 */
public class invoiceTESTFR {

    public static void main(String[] args) {
        
        invoiceTEST myInvoice = new invoiceTEST("parts number 453", "cpu", 50.99, 2);
        
        System.out.println("Parts number: " + myInvoice.getNumber());
        System.out.println("Description: " + myInvoice.getDesc());
        System.out.println("Price per item: " + myInvoice.getPerItem());
        System.out.println("Item quantity: " + myInvoice.getItemPurchased());
        
        System.out.printf("%nInvoice total: %.2f", myInvoice.getInvoiceEamount());
       
        
        invoiceTEST yourInvoice = new invoiceTEST("parts number 455", "monitor", -50.43, 2);
        
        System.out.printf("%n%n%n");
        
        System.out.println("Parts number: " + yourInvoice.getNumber());
        System.out.println("Description: " + yourInvoice.getDesc());
        System.out.println("Price per item: " + yourInvoice.getPerItem());
        System.out.println("Item quantity: " + yourInvoice.getItemPurchased());
        
        System.out.printf("Invoice total: %.2f", yourInvoice.getInvoiceEamount());
        
     
        invoiceTEST ourInvoice = new invoiceTEST("parts number 459", "ram stick", 50.43, -10);
        
        System.out.printf("%n%n%n");
        
        System.out.println("Parts number: " + ourInvoice.getNumber());
        System.out.println("Description: " + ourInvoice.getDesc());
        System.out.println("Price per item: " + ourInvoice.getPerItem());
        System.out.println("Item quantity: " + ourInvoice.getItemPurchased());
        
        System.out.printf("%nInvoice total: %.2f", ourInvoice.getInvoiceEamount());
        
        
    }

}
