// Code generated by protoc-gen-go. DO NOT EDIT.
// source: fee.proto

package legacy_pb

import (
	fmt "fmt"
	proto "github.com/golang/protobuf/proto"
	math "math"
)

// Reference imports to suppress errors if they are not otherwise used.
var _ = proto.Marshal
var _ = fmt.Errorf
var _ = math.Inf

// This is a compile-time assertion to ensure that this generated file
// is compatible with the proto package it is being compiled against.
// A compilation error at this line likely means your copy of the
// proto package needs to be updated.
const _ = proto.ProtoPackageIsVersion3 // please upgrade the proto package

type Fee_Version int32

const (
	Fee_UNKNOWN_VERSION Fee_Version = 0
	Fee__0_0_1          Fee_Version = 1
)

var Fee_Version_name = map[int32]string{
	0: "UNKNOWN_VERSION",
	1: "_0_0_1",
}

var Fee_Version_value = map[string]int32{
	"UNKNOWN_VERSION": 0,
	"_0_0_1":          1,
}

func (x Fee_Version) Enum() *Fee_Version {
	p := new(Fee_Version)
	*p = x
	return p
}

func (x Fee_Version) String() string {
	return proto.EnumName(Fee_Version_name, int32(x))
}

func (x *Fee_Version) UnmarshalJSON(data []byte) error {
	value, err := proto.UnmarshalJSONEnum(Fee_Version_value, data, "Fee_Version")
	if err != nil {
		return err
	}
	*x = Fee_Version(value)
	return nil
}

func (Fee_Version) EnumDescriptor() ([]byte, []int) {
	return fileDescriptor_fa8e5264b1207167, []int{0, 0}
}

type Fee_Currency int32

const (
	Fee_UNKNOWN_CURRENCY Fee_Currency = 0
	Fee_LBC              Fee_Currency = 1
	Fee_BTC              Fee_Currency = 2
	Fee_USD              Fee_Currency = 3
)

var Fee_Currency_name = map[int32]string{
	0: "UNKNOWN_CURRENCY",
	1: "LBC",
	2: "BTC",
	3: "USD",
}

var Fee_Currency_value = map[string]int32{
	"UNKNOWN_CURRENCY": 0,
	"LBC":              1,
	"BTC":              2,
	"USD":              3,
}

func (x Fee_Currency) Enum() *Fee_Currency {
	p := new(Fee_Currency)
	*p = x
	return p
}

func (x Fee_Currency) String() string {
	return proto.EnumName(Fee_Currency_name, int32(x))
}

func (x *Fee_Currency) UnmarshalJSON(data []byte) error {
	value, err := proto.UnmarshalJSONEnum(Fee_Currency_value, data, "Fee_Currency")
	if err != nil {
		return err
	}
	*x = Fee_Currency(value)
	return nil
}

func (Fee_Currency) EnumDescriptor() ([]byte, []int) {
	return fileDescriptor_fa8e5264b1207167, []int{0, 1}
}

type Fee struct {
	Version              *Fee_Version  `protobuf:"varint,1,req,name=version,enum=legacy_pb.Fee_Version" json:"version,omitempty"`
	Currency             *Fee_Currency `protobuf:"varint,2,req,name=currency,enum=legacy_pb.Fee_Currency" json:"currency,omitempty"`
	Address              []byte        `protobuf:"bytes,3,req,name=address" json:"address,omitempty"`
	Amount               *float32      `protobuf:"fixed32,4,req,name=amount" json:"amount,omitempty"`
	XXX_NoUnkeyedLiteral struct{}      `json:"-"`
	XXX_unrecognized     []byte        `json:"-"`
	XXX_sizecache        int32         `json:"-"`
}

func (m *Fee) Reset()         { *m = Fee{} }
func (m *Fee) String() string { return proto.CompactTextString(m) }
func (*Fee) ProtoMessage()    {}
func (*Fee) Descriptor() ([]byte, []int) {
	return fileDescriptor_fa8e5264b1207167, []int{0}
}

func (m *Fee) XXX_Unmarshal(b []byte) error {
	return xxx_messageInfo_Fee.Unmarshal(m, b)
}
func (m *Fee) XXX_Marshal(b []byte, deterministic bool) ([]byte, error) {
	return xxx_messageInfo_Fee.Marshal(b, m, deterministic)
}
func (m *Fee) XXX_Merge(src proto.Message) {
	xxx_messageInfo_Fee.Merge(m, src)
}
func (m *Fee) XXX_Size() int {
	return xxx_messageInfo_Fee.Size(m)
}
func (m *Fee) XXX_DiscardUnknown() {
	xxx_messageInfo_Fee.DiscardUnknown(m)
}

var xxx_messageInfo_Fee proto.InternalMessageInfo

func (m *Fee) GetVersion() Fee_Version {
	if m != nil && m.Version != nil {
		return *m.Version
	}
	return Fee_UNKNOWN_VERSION
}

func (m *Fee) GetCurrency() Fee_Currency {
	if m != nil && m.Currency != nil {
		return *m.Currency
	}
	return Fee_UNKNOWN_CURRENCY
}

func (m *Fee) GetAddress() []byte {
	if m != nil {
		return m.Address
	}
	return nil
}

func (m *Fee) GetAmount() float32 {
	if m != nil && m.Amount != nil {
		return *m.Amount
	}
	return 0
}

func init() {
	proto.RegisterEnum("legacy_pb.Fee_Version", Fee_Version_name, Fee_Version_value)
	proto.RegisterEnum("legacy_pb.Fee_Currency", Fee_Currency_name, Fee_Currency_value)
	proto.RegisterType((*Fee)(nil), "legacy_pb.Fee")
}

func init() { proto.RegisterFile("fee.proto", fileDescriptor_fa8e5264b1207167) }

var fileDescriptor_fa8e5264b1207167 = []byte{
	// 234 bytes of a gzipped FileDescriptorProto
	0x1f, 0x8b, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0xff, 0x5c, 0x8d, 0xc1, 0x4b, 0xc3, 0x30,
	0x18, 0xc5, 0xd7, 0x54, 0xd6, 0xed, 0x43, 0x34, 0x7c, 0xca, 0xcc, 0xb1, 0xf4, 0x54, 0x3c, 0x84,
	0xaa, 0x47, 0x6f, 0x8b, 0x1b, 0x88, 0x92, 0x41, 0x66, 0x27, 0x9e, 0x42, 0xed, 0x3e, 0x45, 0xd0,
	0x66, 0xa4, 0x9b, 0xb0, 0xbf, 0xc0, 0x7f, 0x5b, 0xa6, 0xcd, 0x0e, 0xbb, 0xbd, 0xc7, 0xfb, 0x3d,
	0x7e, 0x30, 0x7c, 0x23, 0x92, 0x2b, 0xef, 0xd6, 0x0e, 0x87, 0x9f, 0xf4, 0x5e, 0xd5, 0x5b, 0xbb,
	0x7a, 0xcd, 0x7e, 0x18, 0xc4, 0x53, 0x22, 0x2c, 0x20, 0xf9, 0x26, 0xdf, 0x7e, 0xb8, 0x46, 0x44,
	0x29, 0xcb, 0x4f, 0xae, 0x47, 0x72, 0x0f, 0xc9, 0x29, 0x91, 0x5c, 0xfc, 0xaf, 0x26, 0x60, 0x78,
	0x03, 0x83, 0x7a, 0xe3, 0x3d, 0x35, 0xf5, 0x56, 0xb0, 0xbf, 0xcb, 0xc5, 0xc1, 0x45, 0x75, 0xb3,
	0xd9, 0x83, 0x28, 0x20, 0xa9, 0x96, 0x4b, 0x4f, 0x6d, 0x2b, 0xe2, 0x94, 0xe5, 0xc7, 0x26, 0x54,
	0x1c, 0x41, 0xbf, 0xfa, 0x72, 0x9b, 0x66, 0x2d, 0x8e, 0x52, 0x96, 0x33, 0xd3, 0xb5, 0xec, 0x12,
	0x92, 0x4e, 0x8d, 0x67, 0x70, 0x5a, 0xea, 0x07, 0x3d, 0x7b, 0xd6, 0x76, 0x31, 0x31, 0xf3, 0xfb,
	0x99, 0xe6, 0x3d, 0x04, 0xe8, 0xdb, 0xc2, 0x16, 0xf6, 0x8a, 0x47, 0xd9, 0x2d, 0x0c, 0x82, 0x13,
	0xcf, 0x81, 0x07, 0x58, 0x95, 0xc6, 0x4c, 0xb4, 0x7a, 0xe1, 0x3d, 0x4c, 0x20, 0x7e, 0x1c, 0x2b,
	0x1e, 0xed, 0xc2, 0xf8, 0x49, 0x71, 0xb6, 0x0b, 0xe5, 0xfc, 0x8e, 0xc7, 0xbf, 0x01, 0x00, 0x00,
	0xff, 0xff, 0x4c, 0x11, 0x4f, 0xc8, 0x20, 0x01, 0x00, 0x00,
}
