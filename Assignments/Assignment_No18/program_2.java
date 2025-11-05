class Logic
{
    void printEvenNumbers(int n)
    {
        if(n % 2 == 0)
        {
            System.out.println(n+" is even number ");
        }
        else
        {
            System.out.println(n +" is not even number");
        }

    }
}

class program_2{
    public static void main(String[] args) 
    {
        Logic obj = new Logic();
        obj.printEvenNumbers(20);
        
    }
}