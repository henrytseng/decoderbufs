/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: pg_logicaldec.proto */

#ifndef PROTOBUF_C_pg_5flogicaldec_2eproto__INCLUDED
#define PROTOBUF_C_pg_5flogicaldec_2eproto__INCLUDED

#include <protobuf-c/protobuf-c.h>

PROTOBUF_C__BEGIN_DECLS

#if PROTOBUF_C_VERSION_NUMBER < 1000000
# error This file was generated by a newer version of protoc-c which is incompatible with your libprotobuf-c headers. Please update your headers.
#elif 1000002 < PROTOBUF_C_MIN_COMPILER_VERSION
# error This file was generated by an older version of protoc-c which is incompatible with your libprotobuf-c headers. Please regenerate this file with a newer version of protoc-c.
#endif


typedef struct _Decoderbufs__Point Decoderbufs__Point;
typedef struct _Decoderbufs__DatumMessage Decoderbufs__DatumMessage;
typedef struct _Decoderbufs__RowMessage Decoderbufs__RowMessage;


/* --- enums --- */

typedef enum _Decoderbufs__Op {
  DECODERBUFS__OP__INSERT = 0,
  DECODERBUFS__OP__UPDATE = 1,
  DECODERBUFS__OP__DELETE = 2
    PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(DECODERBUFS__OP)
} Decoderbufs__Op;

/* --- messages --- */

struct  _Decoderbufs__Point
{
  ProtobufCMessage base;
  double x;
  double y;
};
#define DECODERBUFS__POINT__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&decoderbufs__point__descriptor) \
    , 0, 0 }


struct  _Decoderbufs__DatumMessage
{
  ProtobufCMessage base;
  char *column_name;
  protobuf_c_boolean has_column_type;
  int64_t column_type;
  protobuf_c_boolean has_datum_int32;
  int32_t datum_int32;
  protobuf_c_boolean has_datum_int64;
  int64_t datum_int64;
  protobuf_c_boolean has_datum_float;
  float datum_float;
  protobuf_c_boolean has_datum_double;
  double datum_double;
  protobuf_c_boolean has_datum_bool;
  protobuf_c_boolean datum_bool;
  char *datum_string;
  protobuf_c_boolean has_datum_bytes;
  ProtobufCBinaryData datum_bytes;
  Decoderbufs__Point *datum_point;
};
#define DECODERBUFS__DATUM_MESSAGE__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&decoderbufs__datum_message__descriptor) \
    , NULL, 0,0, 0,0, 0,0, 0,0, 0,0, 0,0, NULL, 0,{0,NULL}, NULL }


struct  _Decoderbufs__RowMessage
{
  ProtobufCMessage base;
  protobuf_c_boolean has_commit_time;
  int64_t commit_time;
  char *table;
  protobuf_c_boolean has_op;
  Decoderbufs__Op op;
  size_t n_new_tuple;
  Decoderbufs__DatumMessage **new_tuple;
  size_t n_old_tuple;
  Decoderbufs__DatumMessage **old_tuple;
};
#define DECODERBUFS__ROW_MESSAGE__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&decoderbufs__row_message__descriptor) \
    , 0,0, NULL, 0,0, 0,NULL, 0,NULL }


/* Decoderbufs__Point methods */
void   decoderbufs__point__init
                     (Decoderbufs__Point         *message);
size_t decoderbufs__point__get_packed_size
                     (const Decoderbufs__Point   *message);
size_t decoderbufs__point__pack
                     (const Decoderbufs__Point   *message,
                      uint8_t             *out);
size_t decoderbufs__point__pack_to_buffer
                     (const Decoderbufs__Point   *message,
                      ProtobufCBuffer     *buffer);
Decoderbufs__Point *
       decoderbufs__point__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   decoderbufs__point__free_unpacked
                     (Decoderbufs__Point *message,
                      ProtobufCAllocator *allocator);
/* Decoderbufs__DatumMessage methods */
void   decoderbufs__datum_message__init
                     (Decoderbufs__DatumMessage         *message);
size_t decoderbufs__datum_message__get_packed_size
                     (const Decoderbufs__DatumMessage   *message);
size_t decoderbufs__datum_message__pack
                     (const Decoderbufs__DatumMessage   *message,
                      uint8_t             *out);
size_t decoderbufs__datum_message__pack_to_buffer
                     (const Decoderbufs__DatumMessage   *message,
                      ProtobufCBuffer     *buffer);
Decoderbufs__DatumMessage *
       decoderbufs__datum_message__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   decoderbufs__datum_message__free_unpacked
                     (Decoderbufs__DatumMessage *message,
                      ProtobufCAllocator *allocator);
/* Decoderbufs__RowMessage methods */
void   decoderbufs__row_message__init
                     (Decoderbufs__RowMessage         *message);
size_t decoderbufs__row_message__get_packed_size
                     (const Decoderbufs__RowMessage   *message);
size_t decoderbufs__row_message__pack
                     (const Decoderbufs__RowMessage   *message,
                      uint8_t             *out);
size_t decoderbufs__row_message__pack_to_buffer
                     (const Decoderbufs__RowMessage   *message,
                      ProtobufCBuffer     *buffer);
Decoderbufs__RowMessage *
       decoderbufs__row_message__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   decoderbufs__row_message__free_unpacked
                     (Decoderbufs__RowMessage *message,
                      ProtobufCAllocator *allocator);
/* --- per-message closures --- */

typedef void (*Decoderbufs__Point_Closure)
                 (const Decoderbufs__Point *message,
                  void *closure_data);
typedef void (*Decoderbufs__DatumMessage_Closure)
                 (const Decoderbufs__DatumMessage *message,
                  void *closure_data);
typedef void (*Decoderbufs__RowMessage_Closure)
                 (const Decoderbufs__RowMessage *message,
                  void *closure_data);

/* --- services --- */


/* --- descriptors --- */

extern const ProtobufCEnumDescriptor    decoderbufs__op__descriptor;
extern const ProtobufCMessageDescriptor decoderbufs__point__descriptor;
extern const ProtobufCMessageDescriptor decoderbufs__datum_message__descriptor;
extern const ProtobufCMessageDescriptor decoderbufs__row_message__descriptor;

PROTOBUF_C__END_DECLS


#endif  /* PROTOBUF_C_pg_5flogicaldec_2eproto__INCLUDED */
