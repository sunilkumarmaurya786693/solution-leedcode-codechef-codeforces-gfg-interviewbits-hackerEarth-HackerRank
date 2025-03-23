class Sports{
    String getName(){
        return "Generic sport";
    }

    void  getNumberOfTeamMembers(){
        System.out.println( "Each team has n players in " + getName() );
    }
}

class Soccer extends Sports{
    @Override
    String getName(){
        //print parent sport name
        System.out.println("parent name: "+super.getName());
        return "Soccer sport";
    }

    @Override
    void getNumberOfTeamMembers(){
        System.out.println("Each team has 11 players in"+ getName());

    }
}

public class Java_19_method_overRiding {
    public static void main(String args[]){
        Sports c1 = new Sports();
        Soccer c2 = new Soccer();
        System.out.println(c1.getName());
        c1.getNumberOfTeamMembers();
        System.out.println(c2.getName());
        c2.getNumberOfTeamMembers();
    }
}
