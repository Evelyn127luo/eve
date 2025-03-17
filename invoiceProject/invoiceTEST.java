/**
 *
 * @author evelyn
 */
public class invoiceTEST {
    private double pricePerItem;
    private String number;
    private String description;
    private int itemPurchased;
    
    public invoiceTEST(String myNumber, String myDescription, 
            double pricePerItem, int itemPurchased) {
        this.number = myNumber;
        this.description = myDescription;
        this.pricePerItem = pricePerItem;
        this.itemPurchased = itemPurchased;
    }
    
    //setter and getter for myNumbers
    public void setNumber(String myNumber) {
        this.number = myNumber;
    }
    
    public String getNumber() {
     return number;
    }
    
    //setter and getter for description
    public void setDesc(String myDescription) {
        this.description = myDescription;
    }
    
    public String getDesc() {
     return description;
    }
    
    //setter and getter for price per item
    public void setPerItem(double pricePerItem) {
        this.pricePerItem = pricePerItem;
    }
    
    public double getPerItem() {
        if(pricePerItem < 0){
            pricePerItem = 0.0;
        }
     return pricePerItem;
    }
    
    //setter and getter for price after item purchased
    public void setItemPurchased (int itemPurchased) {
        this.itemPurchased = itemPurchased;
    }
    
    public int getItemPurchased() {

        return itemPurchased;
    }
    
    public double getInvoiceEamount() {
        
        if(itemPurchased < 0){
            itemPurchased = 0;            
        return pricePerItem * itemPurchased;
        }
        
        else if(pricePerItem < 0){
            pricePerItem = 0.0;
        return pricePerItem * itemPurchased;
        }
        
        else{
            return pricePerItem * itemPurchased;
        }
        
    }
}


