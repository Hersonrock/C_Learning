#include <stdio.h>

unsigned int encrypt(unsigned int data, unsigned int key)
{
    return data^key;
}

unsigned int decrypt(unsigned int encryptedData, unsigned int key)
{
    return encryptedData^key;
}

int main(int argc, char *argv[])
{
    unsigned int data = 123;
    unsigned int key = 987;

    printf("Original data: %u\n",data);
    
    unsigned int encryptedData= encrypt(data,key);
    printf("Encrypted data: %u\n",encryptedData);

    unsigned int decryptedData = decrypt(encryptedData,key);
    printf("Decrypted data: %u\n",decryptedData);
    
    return 0;
}
