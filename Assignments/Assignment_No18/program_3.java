class Logic
{
    void printOddNumber(int n)
    {
        if(n % 2 !=0)
        {
            System.out.println(n+" is the odd number");
        }
        else
        {
            System.out.println(n+" is not a odd number");
        }
    }

}
class program_3
{
    public static void main(String[] args)
    {
        Logic obj = new Logic();
        obj.printOddNumber(20);
        
    }
}