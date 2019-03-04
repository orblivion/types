/**
 * @fileoverview
 * @enhanceable
 * @suppress {messageConventions} JS Compiler reports an error if a variable or
 *     field starts with 'MSG_' and isn't a translatable message.
 * @public
 */
// GENERATED CODE -- DO NOT EDIT!

var jspb = require('google-protobuf');
var goog = jspb;
var global = Function('return this')();

goog.exportSymbol('proto.legacy_pb.Fee', null, global);
goog.exportSymbol('proto.legacy_pb.Fee.Currency', null, global);
goog.exportSymbol('proto.legacy_pb.Fee.Version', null, global);
/**
 * Generated by JsPbCodeGenerator.
 * @param {Array=} opt_data Optional initial data array, typically from a
 * server response, or constructed directly in Javascript. The array is used
 * in place and becomes part of the constructed object. It is not cloned.
 * If no data is provided, the constructed object will be empty, but still
 * valid.
 * @extends {jspb.Message}
 * @constructor
 */
proto.legacy_pb.Fee = function(opt_data) {
  jspb.Message.initialize(this, opt_data, 0, -1, null, null);
};
goog.inherits(proto.legacy_pb.Fee, jspb.Message);
if (goog.DEBUG && !COMPILED) {
  /**
   * @public
   * @override
   */
  proto.legacy_pb.Fee.displayName = 'proto.legacy_pb.Fee';
}



if (jspb.Message.GENERATE_TO_OBJECT) {
/**
 * Creates an object representation of this proto suitable for use in Soy templates.
 * Field names that are reserved in JavaScript and will be renamed to pb_name.
 * To access a reserved field use, foo.pb_<name>, eg, foo.pb_default.
 * For the list of reserved names please see:
 *     com.google.apps.jspb.JsClassTemplate.JS_RESERVED_WORDS.
 * @param {boolean=} opt_includeInstance Whether to include the JSPB instance
 *     for transitional soy proto support: http://goto/soy-param-migration
 * @return {!Object}
 */
proto.legacy_pb.Fee.prototype.toObject = function(opt_includeInstance) {
  return proto.legacy_pb.Fee.toObject(opt_includeInstance, this);
};


/**
 * Static version of the {@see toObject} method.
 * @param {boolean|undefined} includeInstance Whether to include the JSPB
 *     instance for transitional soy proto support:
 *     http://goto/soy-param-migration
 * @param {!proto.legacy_pb.Fee} msg The msg instance to transform.
 * @return {!Object}
 * @suppress {unusedLocalVariables} f is only used for nested messages
 */
proto.legacy_pb.Fee.toObject = function(includeInstance, msg) {
  var obj = {
    version: jspb.Message.getField(msg, 1),
    currency: jspb.Message.getField(msg, 2),
    address: msg.getAddress_asB64(),
    amount: +jspb.Message.getField(msg, 4)
  };

  if (includeInstance) {
    obj.$jspbMessageInstance = msg;
  }
  return obj;
};
}


/**
 * Deserializes binary data (in protobuf wire format).
 * @param {jspb.ByteSource} bytes The bytes to deserialize.
 * @return {!proto.legacy_pb.Fee}
 */
proto.legacy_pb.Fee.deserializeBinary = function(bytes) {
  var reader = new jspb.BinaryReader(bytes);
  var msg = new proto.legacy_pb.Fee;
  return proto.legacy_pb.Fee.deserializeBinaryFromReader(msg, reader);
};


/**
 * Deserializes binary data (in protobuf wire format) from the
 * given reader into the given message object.
 * @param {!proto.legacy_pb.Fee} msg The message object to deserialize into.
 * @param {!jspb.BinaryReader} reader The BinaryReader to use.
 * @return {!proto.legacy_pb.Fee}
 */
proto.legacy_pb.Fee.deserializeBinaryFromReader = function(msg, reader) {
  while (reader.nextField()) {
    if (reader.isEndGroup()) {
      break;
    }
    var field = reader.getFieldNumber();
    switch (field) {
    case 1:
      var value = /** @type {!proto.legacy_pb.Fee.Version} */ (reader.readEnum());
      msg.setVersion(value);
      break;
    case 2:
      var value = /** @type {!proto.legacy_pb.Fee.Currency} */ (reader.readEnum());
      msg.setCurrency(value);
      break;
    case 3:
      var value = /** @type {!Uint8Array} */ (reader.readBytes());
      msg.setAddress(value);
      break;
    case 4:
      var value = /** @type {number} */ (reader.readFloat());
      msg.setAmount(value);
      break;
    default:
      reader.skipField();
      break;
    }
  }
  return msg;
};


/**
 * Serializes the message to binary data (in protobuf wire format).
 * @return {!Uint8Array}
 */
proto.legacy_pb.Fee.prototype.serializeBinary = function() {
  var writer = new jspb.BinaryWriter();
  proto.legacy_pb.Fee.serializeBinaryToWriter(this, writer);
  return writer.getResultBuffer();
};


/**
 * Serializes the given message to binary data (in protobuf wire
 * format), writing to the given BinaryWriter.
 * @param {!proto.legacy_pb.Fee} message
 * @param {!jspb.BinaryWriter} writer
 * @suppress {unusedLocalVariables} f is only used for nested messages
 */
proto.legacy_pb.Fee.serializeBinaryToWriter = function(message, writer) {
  var f = undefined;
  f = /** @type {!proto.legacy_pb.Fee.Version} */ (jspb.Message.getField(message, 1));
  if (f != null) {
    writer.writeEnum(
      1,
      f
    );
  }
  f = /** @type {!proto.legacy_pb.Fee.Currency} */ (jspb.Message.getField(message, 2));
  if (f != null) {
    writer.writeEnum(
      2,
      f
    );
  }
  f = /** @type {!(string|Uint8Array)} */ (jspb.Message.getField(message, 3));
  if (f != null) {
    writer.writeBytes(
      3,
      f
    );
  }
  f = /** @type {number} */ (jspb.Message.getField(message, 4));
  if (f != null) {
    writer.writeFloat(
      4,
      f
    );
  }
};


/**
 * @enum {number}
 */
proto.legacy_pb.Fee.Version = {
  UNKNOWN_VERSION: 0,
  _0_0_1: 1
};

/**
 * @enum {number}
 */
proto.legacy_pb.Fee.Currency = {
  UNKNOWN_CURRENCY: 0,
  LBC: 1,
  BTC: 2,
  USD: 3
};

/**
 * required Version version = 1;
 * @return {!proto.legacy_pb.Fee.Version}
 */
proto.legacy_pb.Fee.prototype.getVersion = function() {
  return /** @type {!proto.legacy_pb.Fee.Version} */ (jspb.Message.getFieldWithDefault(this, 1, 0));
};


/** @param {!proto.legacy_pb.Fee.Version} value */
proto.legacy_pb.Fee.prototype.setVersion = function(value) {
  jspb.Message.setField(this, 1, value);
};


/**
 * Clears the field making it undefined.
 */
proto.legacy_pb.Fee.prototype.clearVersion = function() {
  jspb.Message.setField(this, 1, undefined);
};


/**
 * Returns whether this field is set.
 * @return {boolean}
 */
proto.legacy_pb.Fee.prototype.hasVersion = function() {
  return jspb.Message.getField(this, 1) != null;
};


/**
 * required Currency currency = 2;
 * @return {!proto.legacy_pb.Fee.Currency}
 */
proto.legacy_pb.Fee.prototype.getCurrency = function() {
  return /** @type {!proto.legacy_pb.Fee.Currency} */ (jspb.Message.getFieldWithDefault(this, 2, 0));
};


/** @param {!proto.legacy_pb.Fee.Currency} value */
proto.legacy_pb.Fee.prototype.setCurrency = function(value) {
  jspb.Message.setField(this, 2, value);
};


/**
 * Clears the field making it undefined.
 */
proto.legacy_pb.Fee.prototype.clearCurrency = function() {
  jspb.Message.setField(this, 2, undefined);
};


/**
 * Returns whether this field is set.
 * @return {boolean}
 */
proto.legacy_pb.Fee.prototype.hasCurrency = function() {
  return jspb.Message.getField(this, 2) != null;
};


/**
 * required bytes address = 3;
 * @return {!(string|Uint8Array)}
 */
proto.legacy_pb.Fee.prototype.getAddress = function() {
  return /** @type {!(string|Uint8Array)} */ (jspb.Message.getFieldWithDefault(this, 3, ""));
};


/**
 * required bytes address = 3;
 * This is a type-conversion wrapper around `getAddress()`
 * @return {string}
 */
proto.legacy_pb.Fee.prototype.getAddress_asB64 = function() {
  return /** @type {string} */ (jspb.Message.bytesAsB64(
      this.getAddress()));
};


/**
 * required bytes address = 3;
 * Note that Uint8Array is not supported on all browsers.
 * @see http://caniuse.com/Uint8Array
 * This is a type-conversion wrapper around `getAddress()`
 * @return {!Uint8Array}
 */
proto.legacy_pb.Fee.prototype.getAddress_asU8 = function() {
  return /** @type {!Uint8Array} */ (jspb.Message.bytesAsU8(
      this.getAddress()));
};


/** @param {!(string|Uint8Array)} value */
proto.legacy_pb.Fee.prototype.setAddress = function(value) {
  jspb.Message.setField(this, 3, value);
};


/**
 * Clears the field making it undefined.
 */
proto.legacy_pb.Fee.prototype.clearAddress = function() {
  jspb.Message.setField(this, 3, undefined);
};


/**
 * Returns whether this field is set.
 * @return {boolean}
 */
proto.legacy_pb.Fee.prototype.hasAddress = function() {
  return jspb.Message.getField(this, 3) != null;
};


/**
 * required float amount = 4;
 * @return {number}
 */
proto.legacy_pb.Fee.prototype.getAmount = function() {
  return /** @type {number} */ (+jspb.Message.getFieldWithDefault(this, 4, 0.0));
};


/** @param {number} value */
proto.legacy_pb.Fee.prototype.setAmount = function(value) {
  jspb.Message.setField(this, 4, value);
};


/**
 * Clears the field making it undefined.
 */
proto.legacy_pb.Fee.prototype.clearAmount = function() {
  jspb.Message.setField(this, 4, undefined);
};


/**
 * Returns whether this field is set.
 * @return {boolean}
 */
proto.legacy_pb.Fee.prototype.hasAmount = function() {
  return jspb.Message.getField(this, 4) != null;
};


goog.object.extend(exports, proto.legacy_pb);
