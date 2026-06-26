// User defined package import

import PPA.ABC;
import PPA.Info;
import PPA.Pune;

class Client
{
    public static void main(String A[])
    {
        Marvellous mobj = new ABC();
        Infosystems iobj = new Info();
        Pune pobj = new Pune();

        System.out.println("Inside main of Client");

        mobj.fun();
        iobj.gun();
        pobj.sun();
    }
}
