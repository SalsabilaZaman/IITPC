public class EncryptionUtil {
    public String encrypt(String password){
        String firstPortion = password.substring(0,2);
        String lastPortion = password.substring(2);
        String s = lastPortion + firstPortion;
        return s;
    }

    //hello --> llohe
    public String decrypt(String password){
        String firstPortion = password.substring(password.length()-2);
        String lastPortion = password.substring(0,password.length()-2);
        String s = firstPortion + lastPortion;
        return s;
    }

}
