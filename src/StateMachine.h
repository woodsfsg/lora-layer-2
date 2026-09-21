class StateMachine {
    public:
        class Event {

        };

    public:
        StateMachine() {}
        virtual ~StateMachine() {}
        int getState()  { return state; }
        void setState(int state) { this->state = state; }

        virtual void dispatchEvent(const Event &event) = 0;

    protected:
        int state;
};
