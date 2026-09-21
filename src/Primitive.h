#include "Event.h"

class Primitive : public Event {
    public:
        Primitive() {}
        ~Primitive() {}
};

class DL_ESTABLISH_REQUEST : public Primitive {
    public:
        DL_ESTABLISH_REQUEST() {}
        ~DL_ESTABLISH_REQUEST() {}
};

class DL_ESTABLISH_CONFIRM : public Primitive {
    public:
        DL_ESTABLISH_CONFIRM() {}
        ~DL_ESTABLISH_CONFIRM() {}
};

// Info message from the upper layer to the data link layer
class DL_UNIT_DATA_REQUEST : public Primitive {
    public:
        DL_UNIT_DATA_REQUEST() {}
        ~DL_UNIT_DATA_REQUEST() {}
};

class DL_UNIT_DATA_INDICATION : public Primitive {
    public:
        DL_UNIT_DATA_INDICATION() {}
        ~DL_UNIT_DATA_INDICATION() {}
};

class DL_UNIT_DATA_CONFIRM : public Primitive {
    public:
        DL_UNIT_DATA_CONFIRM() {}
        ~DL_UNIT_DATA_CONFIRM() {}
};

class DL_UNIT_DATA_RESPONSE : public Primitive {
    public:
        DL_UNIT_DATA_RESPONSE() {}
        ~DL_UNIT_DATA_RESPONSE() {}
};

// Info message from the lower layer to the data link layer
class I_REQ : public Primitive {
    public:
        I_REQ() {}
        ~I_REQ() {}
};

class I_RES : public Primitive {
    public:
        I_RES() {}
        ~I_RES() {}
};

class I_IND : public Primitive {
    public:
        I_IND() {}
        ~I_IND() {}
};

class I_CNF : public Primitive {
    public:
        I_CNF() {}
        ~I_CNF() {}
};

