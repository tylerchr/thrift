/* This is a generated file, edit the .stub.php file instead.
 * Stub hash: 36b70af333a5cdd497f3e1f0a8c6669d82438a50 */

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_thrift_protocol_write_binary, 0, 6, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, protocol, IS_OBJECT, 0)
	ZEND_ARG_TYPE_INFO(0, method_name, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, msgtype, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, request_struct, IS_OBJECT, 0)
	ZEND_ARG_TYPE_INFO(0, seqID, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, strict_write, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_thrift_protocol_read_binary, 0, 4, IS_OBJECT, 0)
	ZEND_ARG_TYPE_INFO(0, protocol, IS_OBJECT, 0)
	ZEND_ARG_TYPE_INFO(0, obj_typename, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, strict_read, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, buffer_size, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_thrift_protocol_read_binary_after_message_begin arginfo_thrift_protocol_read_binary
