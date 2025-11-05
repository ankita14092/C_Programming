class Logic
{
    void checkPrime(int num)
    {
        if(num > 1 && num % num == 0)
        {
            System.out.println(num+" is prime number");
        }
        else
        {
            System.out.println(num+" is not a prime number");
        }

    }

}

class program_1
{
    public static void main(String[] args) 
    {
        Logic obj = new Logic();
        obj.checkPrime(11);
    }
}