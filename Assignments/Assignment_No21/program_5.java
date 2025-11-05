class Logic
{
    void printDivisibleBy2and3(int n)
     {
        if(n % 5 == 0 && n % 11 == 0)
        {
            System.out.println(n+" is Divisible by 2 and 3 Both");
        }
        else if(n % 2 == 0)
        {
            System.out.println(n+" is Divisible by 2");
        }
        else if( n % 3 == 0)
        {
            System.out.println(n+" is Divisible by 3");
        }
        else
        {
            System.out.println(n +" is not divisible by 3 and 2");
        }
    }

}
class program_5
{
    public static void main(String[] args) 
    {
        Logic obj = new Logic();
        obj.printDivisibleBy2and3(30);   
    }
}