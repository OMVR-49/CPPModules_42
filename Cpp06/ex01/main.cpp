#include "Serializer.hpp"

int main()
{
    Data* data = new Data;
    data->value = 42;

    std::cout << "Data pointer: " << data << std::endl;
    std::cout << "Data value: " << data->value << std::endl;

    // Serialize
    uintptr_t serialized = Serializer::serialize(data);
    std::cout << "Serialized:" << serialized << std::endl;
    std::cout << "Serialized (hex): 0x" << std::hex << serialized << std::dec << std::endl;

    // Deserialize 
    Data* deserialized = Serializer::deserialize(serialized);
    std::cout << "Deserialized pointer: " << deserialized << std::endl;
    std::cout << "Deserialized value: " << deserialized->value << std::endl;
    
    delete data;
    return 0;
}