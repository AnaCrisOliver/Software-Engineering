#include <iostream>
#include <list>
#include <vector>

/* GOALS:
 * Describe the alternative API types available by the test cases.
 * Descrever as alterativas de API disponíveis através dos casos de testes.
*/

//TEST CASE 1
#define TESTCASE1ALTERNATIVE1

//TEST CASE 2
#define TESTCASE2ALTERNATIVE1

//TEST CASE 3
#define TESTCASE3ALTERNATIVE1

//TEST CASE 4
#define TESTCASE4ALTERNATIVE1

//TEST CASE 5
#define TESTCASE5ALTERNATIVE1

//TEST CASE 6
#define TESTCASE6ALTERNATIVE1

//TEST CASE 7
#define TESTCASE7ALTERNATIVE1
#define TESTCASE7ALTERNATIVE2

//TEST CASE 8
#define TESTCASE8ALTERNATIVE1

//TEST CASE 9
#define TESTCASE79ALTERNATIVE1

using namespace std;


///////////////////////////////////////////////////////////////////////////////////////////////////////////////

#ifdef TESTCASE1ALTERNATIVE1

/* Case of test 1
 * A flow with no sources or terminals.
 * Alternative 1:
 * Create the Model.
 * Create the flow with the base constructor.
 * Associate the flow created to the Model.
 * Create functions to make possible associate sources and terminals in the future.
 * Benefits:
 * 1) Turns possible to create an independent flow.
 * 2) Turns possible to associate sources and terminals in the future.
 * Problems:
 * 1) No one until now.
*/

class Flow{

    private:
        System source;
        System terminal;
    public:
        Flow( void );
        void add_source(System s);
        void add_terminal(System s);
        ~Flow( void );
};

class System{

    public:
        System( void );
        ~System( void );
};

class Model{
        private:
        vector<System> systems;
        vector<Flow> flows;

        public:
            Model( void );
            Model(System& s, Flow& f) { systems = s, flows = f; }
            void insert_flow(Flow f) //Useful to associate the lonely flow created.
            {
                flows.push_back(f);
            }
            ~Model( void );
};

int main()
{
    Model m1;
    Flow f1;
    m1.insert_flow(f1);
    System s1, s2;
    f1.add_source(s1);
    f1.add_terminal(s2);

}
#endif

///////////////////////////////////////////////////////////////////////////////////////////////////////////////

#ifdef TESTCASE2ALTERNATIVE1

/* Case of test 2
 * A system with no flow.
 * Alternative 1:
 * Create the Model.
 * Create the System with the base constructor.
 * Associate the System created to the Model.
 * Create functions to make possible associate flows and terminals (or sources) in the future.
 * Benefits:
 * 1) Turns possible to create an independent system.
 * 2) Turns possible to associate flows and terminals (or sources) in the future.
 * Problems:
 * 1) No one until now.
*/

class Flow{

    public:
        Flow( void );
        ~Flow( void );
};

class System{

    private:
        vector<Flow> flows_in;
        vector<Flow> flows_out;
    public:
        System( void );
        void add_flow_in(Flow f);
        void add_flow_out(Flow f);
        void set_state(); //source, terminal, or booth?
        ~System( void );
};

class Model{
    private:
        vector<System> systems;
        vector<Flow> flows;
    public:
        Model( void );
        Model(System& s, Flow& f) { systems = s, flows = f; }
        void insert_system(System s) //Useful to associate the lonely System created.
        {
            systems.push_back(s);
        }
        ~Model( void );
};

int main()
{
    Model m1;
    System s1;
    m1.insert_system(s);
    Flow f1;
    s1.add_flow_in(f1); //associating a flow to system. That flow makes this system turns into a terminal system.
}

#endif

///////////////////////////////////////////////////////////////////////////////////////////////////////////////

#ifdef TESTCASE7ALTERNATIVE1

/* Case of test 7
 * A system with 2 or more terminals.
 * Alternative 1
 * Create a container with all the terminals associated to this source.
 * Insert all the terminals.
 * Problems:
 * 1) Client has to decide how many terminals will be necessary at the beggining of the modeling.
 * 2) An exactly container will be necessary on the Model object. Redundancy.
*/


class Flow{

    public:
        Flow( void );
        ~Flow( void );
};

class System{
        private:
                char state; //Source or Terminal
                int number_terminals; //Number of Terminals associated to a source System
                int stock; //The acumulative value on the System
                list <System> terminals_list; //List of terminals associated to a Source System
        public:
                System( void );
                System(char st){ //Defining a source or terminal System on constructor
                        this->state = st;
                }
                System(char st, int terminals){
                        this->state = st;
                        this->number_terminals = terminals;
                }
                void inserting_terminals() //inserting all the terminals
                {
                    while(this->terminals > 0)
                    {
                        System s;
                        s.set_system();
                        this->terminals_list.push_back(s);
                    }
                }
                ~System( void );
};


class Model{
        private:
        vector<System> systems;
        vector<Flow> flows;

        public:
            Model( void );
            Model(System& s, Flow& f) { systems = s, flows = f; }
            ~Model( void );
};

int main(){
        Model m1;

        System s1, s2, s3;
        Flow f1, f2, f3, f4, f5, f6;
        Model m1,m2,m3;
        f1(s1, s2);
        f2(null, s2);
        f3(s3, null);
        f4(null, null);
        m1(f1);
        m2(f2, f3);
        m3(f4, f5, f6);
}
#endif

///////////////////////////////////////////////////////////////////////////////////////////////////////////////

#ifdef TESTCASE7ALTERNATIVE2

class Flow{

        public:
                Flow( void );
                ~Flow( void );
};

class System{
        public:
                System( void );
                ~System( void );
};

class Model{
        public:
                Model( void );
                ~Model( void );
};

int main()
{
        Flow f1,f2,f3,f4,f5;
        f1(equation,);

#endif

///////////////////////////////////////////////////////////////////////////////////////////////////////////////
