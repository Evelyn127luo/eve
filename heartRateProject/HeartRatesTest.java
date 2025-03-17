
/**
 *
 * @author Evelyn Luo
 * heart rate calculator for min and max heart rate based on age
 */
public class HeartRatesTest {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        heartRates eve = new heartRates("Evelyn", "Luo", 2005, 2025);
        
        System.out.printf("First Name: %s%n", eve.getFirstName());
        System.out.printf("Last Name: %s%n", eve.getLastName());
        System.out.printf("Age: %d%n", eve.getAge());
        System.out.printf("Maximum Heart Rate: %d%n", eve.getMaxHeartRate());
        System.out.printf("Target heart Rate Rage: %n");
        System.out.printf(" Minimum: %.0f%n", eve.getMinTargetHeartRate());
        System.out.printf(" Maximum: %.0f%n", eve.getMaxTargetHeartRate());
        
    }

}
