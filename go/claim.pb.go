// Code generated by protoc-gen-go. DO NOT EDIT.
// source: claim.proto

package pb

import proto "github.com/golang/protobuf/proto"
import fmt "fmt"
import math "math"

// Reference imports to suppress errors if they are not otherwise used.
var _ = proto.Marshal
var _ = fmt.Errorf
var _ = math.Inf

type Claim_Version int32

const (
	Claim_UNKNOWN_VERSION Claim_Version = 0
	Claim__0_0_1          Claim_Version = 1
)

var Claim_Version_name = map[int32]string{
	0: "UNKNOWN_VERSION",
	1: "_0_0_1",
}
var Claim_Version_value = map[string]int32{
	"UNKNOWN_VERSION": 0,
	"_0_0_1":          1,
}

func (x Claim_Version) Enum() *Claim_Version {
	p := new(Claim_Version)
	*p = x
	return p
}
func (x Claim_Version) String() string {
	return proto.EnumName(Claim_Version_name, int32(x))
}
func (x *Claim_Version) UnmarshalJSON(data []byte) error {
	value, err := proto.UnmarshalJSONEnum(Claim_Version_value, data, "Claim_Version")
	if err != nil {
		return err
	}
	*x = Claim_Version(value)
	return nil
}
func (Claim_Version) EnumDescriptor() ([]byte, []int) { return fileDescriptor1, []int{0, 0} }

type Claim_ClaimType int32

const (
	Claim_UNKNOWN_CLAIM_TYPE Claim_ClaimType = 0
	Claim_streamType         Claim_ClaimType = 1
	Claim_certificateType    Claim_ClaimType = 2
)

var Claim_ClaimType_name = map[int32]string{
	0: "UNKNOWN_CLAIM_TYPE",
	1: "streamType",
	2: "certificateType",
}
var Claim_ClaimType_value = map[string]int32{
	"UNKNOWN_CLAIM_TYPE": 0,
	"streamType":         1,
	"certificateType":    2,
}

func (x Claim_ClaimType) Enum() *Claim_ClaimType {
	p := new(Claim_ClaimType)
	*p = x
	return p
}
func (x Claim_ClaimType) String() string {
	return proto.EnumName(Claim_ClaimType_name, int32(x))
}
func (x *Claim_ClaimType) UnmarshalJSON(data []byte) error {
	value, err := proto.UnmarshalJSONEnum(Claim_ClaimType_value, data, "Claim_ClaimType")
	if err != nil {
		return err
	}
	*x = Claim_ClaimType(value)
	return nil
}
func (Claim_ClaimType) EnumDescriptor() ([]byte, []int) { return fileDescriptor1, []int{0, 1} }

type Claim struct {
	Version            *Claim_Version   `protobuf:"varint,1,req,name=version,enum=pb.Claim_Version" json:"version,omitempty"`
	ClaimType          *Claim_ClaimType `protobuf:"varint,2,req,name=claimType,enum=pb.Claim_ClaimType" json:"claimType,omitempty"`
	Stream             *Stream          `protobuf:"bytes,3,opt,name=stream" json:"stream,omitempty"`
	Certificate        *Certificate     `protobuf:"bytes,4,opt,name=certificate" json:"certificate,omitempty"`
	PublisherSignature *Signature       `protobuf:"bytes,5,opt,name=publisherSignature" json:"publisherSignature,omitempty"`
	XXX_unrecognized   []byte           `json:"-"`
}

func (m *Claim) Reset()                    { *m = Claim{} }
func (m *Claim) String() string            { return proto.CompactTextString(m) }
func (*Claim) ProtoMessage()               {}
func (*Claim) Descriptor() ([]byte, []int) { return fileDescriptor1, []int{0} }

func (m *Claim) GetVersion() Claim_Version {
	if m != nil && m.Version != nil {
		return *m.Version
	}
	return Claim_UNKNOWN_VERSION
}

func (m *Claim) GetClaimType() Claim_ClaimType {
	if m != nil && m.ClaimType != nil {
		return *m.ClaimType
	}
	return Claim_UNKNOWN_CLAIM_TYPE
}

func (m *Claim) GetStream() *Stream {
	if m != nil {
		return m.Stream
	}
	return nil
}

func (m *Claim) GetCertificate() *Certificate {
	if m != nil {
		return m.Certificate
	}
	return nil
}

func (m *Claim) GetPublisherSignature() *Signature {
	if m != nil {
		return m.PublisherSignature
	}
	return nil
}

func init() {
	proto.RegisterType((*Claim)(nil), "pb.Claim")
	proto.RegisterEnum("pb.Claim_Version", Claim_Version_name, Claim_Version_value)
	proto.RegisterEnum("pb.Claim_ClaimType", Claim_ClaimType_name, Claim_ClaimType_value)
}

func init() { proto.RegisterFile("claim.proto", fileDescriptor1) }

var fileDescriptor1 = []byte{
	// 283 bytes of a gzipped FileDescriptorProto
	0x1f, 0x8b, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0xff, 0x6c, 0x8f, 0xc1, 0x4a, 0xf3, 0x40,
	0x14, 0x85, 0x9b, 0xfc, 0x7f, 0x5b, 0x7a, 0xa3, 0x4d, 0x7a, 0x0b, 0x12, 0xba, 0x2a, 0x59, 0x15,
	0x85, 0xd0, 0x74, 0xef, 0x42, 0x42, 0xc1, 0xa2, 0xa6, 0x32, 0xa9, 0x15, 0x57, 0x21, 0x09, 0xa3,
	0x0e, 0xd4, 0x26, 0x4c, 0xa6, 0x82, 0xcf, 0xed, 0x0b, 0x48, 0x26, 0x33, 0x26, 0x0b, 0xb7, 0xdf,
	0xf9, 0xe6, 0xce, 0x39, 0x60, 0xe5, 0x87, 0x94, 0x7d, 0xf8, 0x25, 0x2f, 0x44, 0x81, 0x66, 0x99,
	0xcd, 0xce, 0x2a, 0xc1, 0x69, 0xaa, 0xc8, 0x6c, 0x92, 0x53, 0x2e, 0xd8, 0x2b, 0xcb, 0x53, 0x41,
	0x15, 0xb2, 0x2b, 0xf6, 0x76, 0x4c, 0xc5, 0x89, 0x2b, 0xe0, 0x7d, 0x9b, 0xd0, 0x0f, 0xeb, 0x2b,
	0x78, 0x05, 0xc3, 0x4f, 0xca, 0x2b, 0x56, 0x1c, 0x5d, 0x63, 0x6e, 0x2e, 0xc6, 0xab, 0x89, 0x5f,
	0x66, 0xbe, 0xcc, 0xfc, 0x7d, 0x13, 0x10, 0x6d, 0x60, 0x00, 0x23, 0xf9, 0xf7, 0xee, 0xab, 0xa4,
	0xae, 0x29, 0xf5, 0x69, 0xab, 0x87, 0x3a, 0x22, 0xad, 0x85, 0x1e, 0x0c, 0x9a, 0x76, 0xee, 0xbf,
	0xb9, 0xb1, 0xb0, 0x56, 0x50, 0xfb, 0xb1, 0x24, 0x44, 0x25, 0x18, 0x80, 0xd5, 0xe9, 0xec, 0xfe,
	0x97, 0xa2, 0x2d, 0x0f, 0xb7, 0x98, 0x74, 0x1d, 0xbc, 0x06, 0x2c, 0x4f, 0xd9, 0x81, 0x55, 0xef,
	0x94, 0xc7, 0x7a, 0x9c, 0xdb, 0x97, 0x2f, 0xcf, 0xe5, 0x17, 0x1a, 0x92, 0x3f, 0x44, 0xef, 0x12,
	0x86, 0x6a, 0x1c, 0x4e, 0xc1, 0x7e, 0x8a, 0xee, 0xa2, 0xed, 0x73, 0x94, 0xec, 0xd7, 0x24, 0xde,
	0x6c, 0x23, 0xa7, 0x87, 0x00, 0x83, 0x64, 0x99, 0x2c, 0x93, 0xc0, 0x31, 0xbc, 0x5b, 0x18, 0xfd,
	0x2e, 0xc3, 0x0b, 0x40, 0x6d, 0x87, 0xf7, 0x37, 0x9b, 0x87, 0x64, 0xf7, 0xf2, 0xb8, 0x76, 0x7a,
	0x38, 0x06, 0x68, 0xc6, 0xd4, 0x96, 0x63, 0xd4, 0x57, 0x3b, 0x75, 0x25, 0x34, 0x7f, 0x02, 0x00,
	0x00, 0xff, 0xff, 0x06, 0xd3, 0xca, 0xd4, 0xb9, 0x01, 0x00, 0x00,
}