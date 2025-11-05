class Logic
{
    void printDigits(int num)
    {
        int iDigit = 0;
        String str = String.valueOf(num);

        if(num < 0)
    {
        num = -num;
    }

    for(int i = 0; i < str.length();i++)
    {
        System.out.println(str.charAt(i));
    }
    }

}
class program_4
{
    public static void main(String[] args) 
    {
    Logic obj = new Logic();
    obj.printDigits(9876);
    }
}
