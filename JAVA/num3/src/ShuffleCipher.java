public class ShuffleCipher extends Cipher implements MessageEncoder, MessageDecoder {
    private int n;

    public ShuffleCipher(int n) {
        this.n = n;
    }

    @Override
    public String cipherType() {
        return "ShuffleCipher";
    }

    @Override
    public String encode(String message) {
        for (int i = 0; i < n; i++) {  // Shuffle n times
            message = shuffleOnce(message);
        }
        return message;
    }

    @Override
    public String decode(String message) {
        for (int i = 0; i < n; i++) {  // Unshuffle n times
            message = unshuffleOnce(message);
        }
        return message;
    }

    // Helper method to perform one shuffle
    private String shuffleOnce(String message) {
        int mid = message.length() / 2;
        String firstHalf = message.substring(0, mid);
        String secondHalf = message.substring(mid);

        StringBuilder shuffled = new StringBuilder();
        int i = 0, j = 0;

        while (i < firstHalf.length() || j < secondHalf.length()) {
            if (i < firstHalf.length()) shuffled.append(firstHalf.charAt(i++));
            if (j < secondHalf.length()) shuffled.append(secondHalf.charAt(j++));
        }

        return shuffled.toString();
    }

    // Helper method to perform one unshuffle
    private String unshuffleOnce(String message) {
        int mid = (message.length() + 1) / 2; // Adjust for odd-length messages
        StringBuilder firstHalf = new StringBuilder();
        StringBuilder secondHalf = new StringBuilder();

        for (int i = 0; i < message.length(); i++) {
            if (i % 2 == 0) {
                firstHalf.append(message.charAt(i));
            } else {
                secondHalf.append(message.charAt(i));
            }
        }

        return firstHalf.append(secondHalf).toString();
    }
}
