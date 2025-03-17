
/**
 * @author evelyn luo
 * heart rate calculator for min and max heart rate based on age
 */
public class heartRates {
    private String firstName;
    private String lastName;
    private int birthYear;
    private int currentYear;
    
    public heartRates(String firstNames, String lastNames, int birthYears, 
            int currentYears) {
        this.firstName = firstNames;
        this.lastName = lastNames;
        this.birthYear = birthYears;
        this.currentYear = currentYears;
    }
    
    public String getFirstName(){
        return firstName;
    }
    public void setFirstName(String firstNames){
        this.firstName = firstNames;
    }
    
    public String getLastName(){
        return lastName;
    }
    public void setLastName(String lastNames){
        this.lastName = lastNames;
    }
    
    public int getBirthYear(){
        return birthYear;
    }
    public void setBirthYear(int birthYears){
        this.birthYear = birthYears;
    }
    
     public int getCurrentYear(){
        return currentYear;
    }
    public void setCurrentYear(int currentYears){
        this.currentYear = currentYears;
    }
    
    public int getAge() {
        return getCurrentYear() - getBirthYear();
    }
    
    public int getMaxHeartRate(){
        return 220 - getAge();
    }
    
    public double getMinTargetHeartRate(){
        return 0.5 * getMaxHeartRate();
    }
    
    public double getMaxTargetHeartRate(){
        return 0.85 * getMaxHeartRate();
    }
    
}
