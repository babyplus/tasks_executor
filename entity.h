#include "component.h"
#include "tools.h"
#include <string>
#include <cstring>

#define FROM_MAIL       "<15017228752@yeah.net>"
#define TO_MAIL     "<495031718@qq.com>"
#define CC_MAIL       "<huangmiaomiao233@gmail.com>"

extern char * payload_text;

class Entity : public Component
{
    private:
        std::string description;
        const char * data;
        int data_len;
        bool data_is_malloc = false;
        void _Entity_raw(const char *, const int);
        void _Entity_file(const char *);

    public:
        enum type
        {
            file,
            raw,
        };
        struct data_s
        {
            long len;
            const char * data;
        } data_t;
        Entity(const std::string&, Entity::type, const char *);
        Entity(const std::string&, Entity::type, char *, const long);
        virtual ~Entity();
        virtual void execute();
};
