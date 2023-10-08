
public class Doctor {
	protected String name;
	protected String degree;
	protected String hospital;
	
	void doDiagnosis() {
		System.out.println("Disease diagnosed!");
	}
	
	public Doctor(String name, String degree, String hospital){
		this.name = this.degree = this.hospital = null;
	}
	
	public Doctor(String name) {
		this(name,"MBBS","DU");
	}
	
}
