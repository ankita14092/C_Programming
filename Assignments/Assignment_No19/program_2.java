class Logic
{
    void displayGrade(int marks)
    {
        if(marks > 90 && marks < 100)
        {
            System.out.println("A++ Grade");
        }
        else if(marks >= 80 && marks < 90)
        {
            System.out.println("A+  Grade");
        }
        else if(marks >=70 && marks < 80)
        {
            System.out.println("B  Grade");
        }
        else if(marks >=60 && marks< 70)
        {
            System.out.println("C Grade");
        }

    }
}

class program_2{
    public static void main(String[] args) 
    {
        Logic obj = new Logic();
        obj.displayGrade(82);
    }
}