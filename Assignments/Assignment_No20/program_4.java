class Logic
{
    void findLargestDigit(int num)
    {
        int max = 0;
        int min = 0;

    while(num !=0)
        {
            min = num % 10;

            if(min > max)
            {
                max = min;
            }
            else
            {

            }
            num /=10;
        }

        System.out.println("Largest number is : " + max);

    }
}

class program_4
{
    public static void main(String[] args) 
    {
        Logic obj = new Logic();
        obj.findLargestDigit(83429);
        
    }

}