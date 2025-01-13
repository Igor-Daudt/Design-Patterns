class Player{
    private:
        Player(){};
        static Player *instance;

    public:
        static Player *getInstance();
};