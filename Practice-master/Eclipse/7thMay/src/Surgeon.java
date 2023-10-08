
public class Surgeon extends Doctor{
	
	private String surgicalEquipments; 
	
	void doSurgery(){
		System.out.println("Surgeon does the surgical operation");
	}
	
	public Surgeon(String name, String degree, String hospital,String surgicalEquipments) {
		super(name,degree,hospital);
		this.surgicalEquipments = surgicalEquipments;
	}
	
}
