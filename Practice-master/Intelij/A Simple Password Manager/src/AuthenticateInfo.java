public class AuthenticateInfo {
    private String URL;
    private String username;
    private String password;

    public AuthenticateInfo(String URL, String username, String password) {
        this.setURL(URL);
        this.setUsername(username);
        this.setPassword(password);
    }

    public String getURL() {
        return URL;
    }

    public void setURL(String URL) {
        this.URL = URL;
    }

    public void setUsername(String username) {
        this.username = username;
    }

    public String getPassword() {
        return password;
    }

    public void setPassword(String password) {
        this.password = password;
    }

    public String getUsername() {
        return username;
    }

    @Override
    public String toString() {
        return "AuthenticateInfo{" +
                "URL='" + URL + '\'' +
                ", username='" + username + '\'' +
                ", password='" + password + '\'' +
                '}';
    }
}
