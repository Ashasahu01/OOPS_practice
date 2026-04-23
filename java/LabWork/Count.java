public class Count {
    public static void main(String[] args) {
        String s = "Testing check";
        int vowels = 0, consonants = 0;

        s = s.toLowerCase();

        for(char c : s.toCharArray()) {
            if(Character.isLetter(c)) {
                if("aeiou".indexOf(c) != -1)
                    vowels++;
                else
                    consonants++;
            }
        }

        System.out.println("Vowels: " + vowels);
        System.out.println("Consonants: " + consonants);
    }
}
