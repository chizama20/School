public class SubstitutionCipher extends Cipher implements MessageEncoder, MessageDecoder {
    private int shift; // shift variable

    public SubstitutionCipher(int shift){
        this.shift = shift;
    }

    @Override
    public String cipherType(){
        return "SubstitutionCipher";
    }

    public String encode(String message){ // encode function
        StringBuilder encoded = new StringBuilder();

        for (char ch : message.toCharArray()) {
            encoded.append((char) (ch+shift));//shift forward
        }
        return encoded.toString();
    }

    @Override
    public String decode(String message) { //decode function
        StringBuilder decoded = new StringBuilder();
        for (char ch : message.toCharArray()) {
            decoded.append((char) (ch - shift)); // Shift backward
        }
        return decoded.toString();
    }
}
