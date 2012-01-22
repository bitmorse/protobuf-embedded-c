/******************************************************************* 
 * Header file generated by Protoc for Embedded C.                 *
 * Version 0.1 (2011-###-##)                                       *
 *                                                                 *
 * Copyright (c) 2009-2011                                         *
 * Technische Universitaet Muenchen                                *
 * http://www4.in.tum.de/                                          *
 *                                                                 *
 * Source : Test.proto
 * Package: edu.tum.cs.ccts.protobuf.embedded
 *                                                                 *
 * Do not edit.                                                    *
 *******************************************************************/


#define MAX_REPEATED_LEN 100
#define MAX_STRING_LEN 32

/*******************************************************************
 * General functions
 *******************************************************************/

/*
 * returns the size of a length delimited message which also 
 * contains the first bytes for the length encoding.
 */
unsigned long Message_get_delimited_size(void *_buffer, int offset);

/*
 * Tests whether a message can be completely read from the given buffer at
 * the offset. The bytes [offset..offset+length-1] are interpreted.
 *
 * Returns 1 (true) if buffer[offset..offset+length-1] contains a complete
 * message or 0 (false) otherwise.
 */
int Message_can_read_delimited_from(void *_buffer, int offset, int length);


/*******************************************************************
 * Enumeration: Test.proto, line 10
 *******************************************************************/
enum PhoneType {
  _MOBILE = 0,
  _HOME = 1,
  _WORK = 2
};

/*******************************************************************
 * Message: Test.proto, line 16
 *******************************************************************/

/* Maximum size of a serialized PhoneNumber-message, useful for buffer allocation. */
#define MAX_PhoneNumber_SIZE 11

/* Structure that holds a deserialized PhoneNumber-message. */
struct PhoneNumber {
  float _number;
  enum PhoneType _type;
};
/*
 * Serialize a PhoneNumber-message into the given buffer at offset and return
 * new offset for optional next message.
 */
int PhoneNumber_write_delimited_to(struct PhoneNumber *_PhoneNumber, void *_buffer, int offset);

/*
 * Deserialize a PhoneNumber-message from the given buffer at offset and return
 * new offset for optional next message.
 *
 * Note: All fields in _PhoneNumber will be reset to 0 before _buffer is interpreted.
 */
int PhoneNumber_read_delimited_from(void *_buffer, struct PhoneNumber *_PhoneNumber, int offset);


/*******************************************************************
 * Message: Test.proto, line 21
 *******************************************************************/

/* Maximum size of a serialized Person-message, useful for buffer allocation. */
#define MAX_Person_SIZE 9065

/* Structure that holds a deserialized Person-message. */
struct Person {
  int _name1_len;
  char _name1[MAX_STRING_LEN];
  int _name2_len;
  char _name2[MAX_STRING_LEN];
  int _name3_len;
  char _name3[MAX_STRING_LEN];
  int _name4_len;
  char _name4[MAX_STRING_LEN];
  int _name5_len;
  char _name5[MAX_STRING_LEN];
  int _name6_len;
  char _name6[MAX_STRING_LEN];
  signed long _id;
  signed long long _id64;
  signed long _sid;
  float _iq;
  double _iqd;
  char _email;
  enum PhoneType _phone;
  int _strAttr_repeated_len;
  int _strAttr_len[MAX_REPEATED_LEN];
  char _strAttr[MAX_REPEATED_LEN][MAX_STRING_LEN];
  int _intAttr_repeated_len;
  signed long _intAttr[MAX_REPEATED_LEN];
  int _int64Attr_repeated_len;
  signed long long _int64Attr[MAX_REPEATED_LEN];
  int _sintAttr_repeated_len;
  signed long _sintAttr[MAX_REPEATED_LEN];
  int _boolAttr_repeated_len;
  char _boolAttr[MAX_REPEATED_LEN];
  int _floatAttr_repeated_len;
  float _floatAttr[MAX_REPEATED_LEN];
  int _doubleAttr_repeated_len;
  double _doubleAttr[MAX_REPEATED_LEN];
  int _enumAttr_repeated_len;
  enum PhoneType _enumAttr[MAX_REPEATED_LEN];
};
/*
 * Serialize a Person-message into the given buffer at offset and return
 * new offset for optional next message.
 */
int Person_write_delimited_to(struct Person *_Person, void *_buffer, int offset);

/*
 * Deserialize a Person-message from the given buffer at offset and return
 * new offset for optional next message.
 *
 * Note: All fields in _Person will be reset to 0 before _buffer is interpreted.
 */
int Person_read_delimited_from(void *_buffer, struct Person *_Person, int offset);


/*******************************************************************
 * Message: Test.proto, line 45
 *******************************************************************/

/* Maximum size of a serialized AddressBook-message, useful for buffer allocation. */
#define MAX_AddressBook_SIZE 37

/* Structure that holds a deserialized AddressBook-message. */
struct AddressBook {
  int _address_len;
  char _address[MAX_STRING_LEN];
};
/*
 * Serialize a AddressBook-message into the given buffer at offset and return
 * new offset for optional next message.
 */
int AddressBook_write_delimited_to(struct AddressBook *_AddressBook, void *_buffer, int offset);

/*
 * Deserialize a AddressBook-message from the given buffer at offset and return
 * new offset for optional next message.
 *
 * Note: All fields in _AddressBook will be reset to 0 before _buffer is interpreted.
 */
int AddressBook_read_delimited_from(void *_buffer, struct AddressBook *_AddressBook, int offset);


/*******************************************************************
 * Message: Test.proto, line 49
 *******************************************************************/

/* Maximum size of a serialized Foo-message, useful for buffer allocation. */
#define MAX_Foo_SIZE 2

/*
 * Serialize a Foo-message into the given buffer at offset and return
 * new offset for optional next message.
 */
int Foo_write_delimited_to(void *_buffer, int offset);

/*
 * Deserialize a Foo-message from the given buffer at offset and return
 * new offset for optional next message.
 *
 * Note: Foo-messages are empty.
 */
int Foo_read_delimited_from(void *_buffer, int offset);
