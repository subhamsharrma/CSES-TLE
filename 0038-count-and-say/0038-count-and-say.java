class Solution {
    public String countAndSay(int n) {
        String ticket = "1";
        StringBuilder result = new StringBuilder();
        for (int i = 2; i <= n; i++) {
            int count = 1;
            result.setLength(0);

            for (int j = 1; j < ticket.length(); j++) {
                if (ticket.charAt(j) == ticket.charAt(j - 1)) {
                    count++;
                } else {
                    result.append(count);
                    result.append(ticket.charAt(j - 1));
                    count = 1;
                }
            }
            result.append(count);
            result.append(ticket.charAt(ticket.length() - 1));

            ticket = result.toString();

        }
        return ticket;
    }
}