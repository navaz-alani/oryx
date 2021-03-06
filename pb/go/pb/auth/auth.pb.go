// Code generated by protoc-gen-go. DO NOT EDIT.
// versions:
// 	protoc-gen-go v1.25.0
// 	protoc        v3.13.0
// source: pb/auth/auth.proto

package auth

import (
	proto "github.com/golang/protobuf/proto"
	protoreflect "google.golang.org/protobuf/reflect/protoreflect"
	protoimpl "google.golang.org/protobuf/runtime/protoimpl"
	timestamppb "google.golang.org/protobuf/types/known/timestamppb"
	reflect "reflect"
	sync "sync"
)

const (
	// Verify that this generated code is sufficiently up-to-date.
	_ = protoimpl.EnforceVersion(20 - protoimpl.MinVersion)
	// Verify that runtime/protoimpl is sufficiently up-to-date.
	_ = protoimpl.EnforceVersion(protoimpl.MaxVersion - 20)
)

// This is a compile-time assertion that a sufficiently up-to-date version
// of the legacy proto package is being used.
const _ = proto.ProtoPackageIsVersion4

type CertStatus_Status int32

const (
	CertStatus_VALID   CertStatus_Status = 0
	CertStatus_EXPIRED CertStatus_Status = 1
)

// Enum value maps for CertStatus_Status.
var (
	CertStatus_Status_name = map[int32]string{
		0: "VALID",
		1: "EXPIRED",
	}
	CertStatus_Status_value = map[string]int32{
		"VALID":   0,
		"EXPIRED": 1,
	}
)

func (x CertStatus_Status) Enum() *CertStatus_Status {
	p := new(CertStatus_Status)
	*p = x
	return p
}

func (x CertStatus_Status) String() string {
	return protoimpl.X.EnumStringOf(x.Descriptor(), protoreflect.EnumNumber(x))
}

func (CertStatus_Status) Descriptor() protoreflect.EnumDescriptor {
	return file_pb_auth_auth_proto_enumTypes[0].Descriptor()
}

func (CertStatus_Status) Type() protoreflect.EnumType {
	return &file_pb_auth_auth_proto_enumTypes[0]
}

func (x CertStatus_Status) Number() protoreflect.EnumNumber {
	return protoreflect.EnumNumber(x)
}

// Deprecated: Use CertStatus_Status.Descriptor instead.
func (CertStatus_Status) EnumDescriptor() ([]byte, []int) {
	return file_pb_auth_auth_proto_rawDescGZIP(), []int{2, 0}
}

type Request struct {
	state         protoimpl.MessageState
	sizeCache     protoimpl.SizeCache
	unknownFields protoimpl.UnknownFields

	RequestedUsername string `protobuf:"bytes,1,opt,name=requestedUsername,proto3" json:"requestedUsername,omitempty"`
}

func (x *Request) Reset() {
	*x = Request{}
	if protoimpl.UnsafeEnabled {
		mi := &file_pb_auth_auth_proto_msgTypes[0]
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		ms.StoreMessageInfo(mi)
	}
}

func (x *Request) String() string {
	return protoimpl.X.MessageStringOf(x)
}

func (*Request) ProtoMessage() {}

func (x *Request) ProtoReflect() protoreflect.Message {
	mi := &file_pb_auth_auth_proto_msgTypes[0]
	if protoimpl.UnsafeEnabled && x != nil {
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		if ms.LoadMessageInfo() == nil {
			ms.StoreMessageInfo(mi)
		}
		return ms
	}
	return mi.MessageOf(x)
}

// Deprecated: Use Request.ProtoReflect.Descriptor instead.
func (*Request) Descriptor() ([]byte, []int) {
	return file_pb_auth_auth_proto_rawDescGZIP(), []int{0}
}

func (x *Request) GetRequestedUsername() string {
	if x != nil {
		return x.RequestedUsername
	}
	return ""
}

type Cert struct {
	state         protoimpl.MessageState
	sizeCache     protoimpl.SizeCache
	unknownFields protoimpl.UnknownFields

	Jwt        string                 `protobuf:"bytes,1,opt,name=jwt,proto3" json:"jwt,omitempty"`
	Username   string                 `protobuf:"bytes,2,opt,name=username,proto3" json:"username,omitempty"`
	Expiration *timestamppb.Timestamp `protobuf:"bytes,3,opt,name=expiration,proto3" json:"expiration,omitempty"`
}

func (x *Cert) Reset() {
	*x = Cert{}
	if protoimpl.UnsafeEnabled {
		mi := &file_pb_auth_auth_proto_msgTypes[1]
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		ms.StoreMessageInfo(mi)
	}
}

func (x *Cert) String() string {
	return protoimpl.X.MessageStringOf(x)
}

func (*Cert) ProtoMessage() {}

func (x *Cert) ProtoReflect() protoreflect.Message {
	mi := &file_pb_auth_auth_proto_msgTypes[1]
	if protoimpl.UnsafeEnabled && x != nil {
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		if ms.LoadMessageInfo() == nil {
			ms.StoreMessageInfo(mi)
		}
		return ms
	}
	return mi.MessageOf(x)
}

// Deprecated: Use Cert.ProtoReflect.Descriptor instead.
func (*Cert) Descriptor() ([]byte, []int) {
	return file_pb_auth_auth_proto_rawDescGZIP(), []int{1}
}

func (x *Cert) GetJwt() string {
	if x != nil {
		return x.Jwt
	}
	return ""
}

func (x *Cert) GetUsername() string {
	if x != nil {
		return x.Username
	}
	return ""
}

func (x *Cert) GetExpiration() *timestamppb.Timestamp {
	if x != nil {
		return x.Expiration
	}
	return nil
}

type CertStatus struct {
	state         protoimpl.MessageState
	sizeCache     protoimpl.SizeCache
	unknownFields protoimpl.UnknownFields

	Status CertStatus_Status `protobuf:"varint,1,opt,name=status,proto3,enum=auth.CertStatus_Status" json:"status,omitempty"`
}

func (x *CertStatus) Reset() {
	*x = CertStatus{}
	if protoimpl.UnsafeEnabled {
		mi := &file_pb_auth_auth_proto_msgTypes[2]
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		ms.StoreMessageInfo(mi)
	}
}

func (x *CertStatus) String() string {
	return protoimpl.X.MessageStringOf(x)
}

func (*CertStatus) ProtoMessage() {}

func (x *CertStatus) ProtoReflect() protoreflect.Message {
	mi := &file_pb_auth_auth_proto_msgTypes[2]
	if protoimpl.UnsafeEnabled && x != nil {
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		if ms.LoadMessageInfo() == nil {
			ms.StoreMessageInfo(mi)
		}
		return ms
	}
	return mi.MessageOf(x)
}

// Deprecated: Use CertStatus.ProtoReflect.Descriptor instead.
func (*CertStatus) Descriptor() ([]byte, []int) {
	return file_pb_auth_auth_proto_rawDescGZIP(), []int{2}
}

func (x *CertStatus) GetStatus() CertStatus_Status {
	if x != nil {
		return x.Status
	}
	return CertStatus_VALID
}

var File_pb_auth_auth_proto protoreflect.FileDescriptor

var file_pb_auth_auth_proto_rawDesc = []byte{
	0x0a, 0x12, 0x70, 0x62, 0x2f, 0x61, 0x75, 0x74, 0x68, 0x2f, 0x61, 0x75, 0x74, 0x68, 0x2e, 0x70,
	0x72, 0x6f, 0x74, 0x6f, 0x12, 0x04, 0x61, 0x75, 0x74, 0x68, 0x1a, 0x1f, 0x67, 0x6f, 0x6f, 0x67,
	0x6c, 0x65, 0x2f, 0x70, 0x72, 0x6f, 0x74, 0x6f, 0x62, 0x75, 0x66, 0x2f, 0x74, 0x69, 0x6d, 0x65,
	0x73, 0x74, 0x61, 0x6d, 0x70, 0x2e, 0x70, 0x72, 0x6f, 0x74, 0x6f, 0x22, 0x37, 0x0a, 0x07, 0x52,
	0x65, 0x71, 0x75, 0x65, 0x73, 0x74, 0x12, 0x2c, 0x0a, 0x11, 0x72, 0x65, 0x71, 0x75, 0x65, 0x73,
	0x74, 0x65, 0x64, 0x55, 0x73, 0x65, 0x72, 0x6e, 0x61, 0x6d, 0x65, 0x18, 0x01, 0x20, 0x01, 0x28,
	0x09, 0x52, 0x11, 0x72, 0x65, 0x71, 0x75, 0x65, 0x73, 0x74, 0x65, 0x64, 0x55, 0x73, 0x65, 0x72,
	0x6e, 0x61, 0x6d, 0x65, 0x22, 0x70, 0x0a, 0x04, 0x43, 0x65, 0x72, 0x74, 0x12, 0x10, 0x0a, 0x03,
	0x6a, 0x77, 0x74, 0x18, 0x01, 0x20, 0x01, 0x28, 0x09, 0x52, 0x03, 0x6a, 0x77, 0x74, 0x12, 0x1a,
	0x0a, 0x08, 0x75, 0x73, 0x65, 0x72, 0x6e, 0x61, 0x6d, 0x65, 0x18, 0x02, 0x20, 0x01, 0x28, 0x09,
	0x52, 0x08, 0x75, 0x73, 0x65, 0x72, 0x6e, 0x61, 0x6d, 0x65, 0x12, 0x3a, 0x0a, 0x0a, 0x65, 0x78,
	0x70, 0x69, 0x72, 0x61, 0x74, 0x69, 0x6f, 0x6e, 0x18, 0x03, 0x20, 0x01, 0x28, 0x0b, 0x32, 0x1a,
	0x2e, 0x67, 0x6f, 0x6f, 0x67, 0x6c, 0x65, 0x2e, 0x70, 0x72, 0x6f, 0x74, 0x6f, 0x62, 0x75, 0x66,
	0x2e, 0x54, 0x69, 0x6d, 0x65, 0x73, 0x74, 0x61, 0x6d, 0x70, 0x52, 0x0a, 0x65, 0x78, 0x70, 0x69,
	0x72, 0x61, 0x74, 0x69, 0x6f, 0x6e, 0x22, 0x5f, 0x0a, 0x0a, 0x43, 0x65, 0x72, 0x74, 0x53, 0x74,
	0x61, 0x74, 0x75, 0x73, 0x12, 0x2f, 0x0a, 0x06, 0x73, 0x74, 0x61, 0x74, 0x75, 0x73, 0x18, 0x01,
	0x20, 0x01, 0x28, 0x0e, 0x32, 0x17, 0x2e, 0x61, 0x75, 0x74, 0x68, 0x2e, 0x43, 0x65, 0x72, 0x74,
	0x53, 0x74, 0x61, 0x74, 0x75, 0x73, 0x2e, 0x53, 0x74, 0x61, 0x74, 0x75, 0x73, 0x52, 0x06, 0x73,
	0x74, 0x61, 0x74, 0x75, 0x73, 0x22, 0x20, 0x0a, 0x06, 0x53, 0x74, 0x61, 0x74, 0x75, 0x73, 0x12,
	0x09, 0x0a, 0x05, 0x56, 0x41, 0x4c, 0x49, 0x44, 0x10, 0x00, 0x12, 0x0b, 0x0a, 0x07, 0x45, 0x58,
	0x50, 0x49, 0x52, 0x45, 0x44, 0x10, 0x01, 0x32, 0x82, 0x01, 0x0a, 0x04, 0x41, 0x75, 0x74, 0x68,
	0x12, 0x26, 0x0a, 0x07, 0x47, 0x65, 0x74, 0x43, 0x65, 0x72, 0x74, 0x12, 0x0d, 0x2e, 0x61, 0x75,
	0x74, 0x68, 0x2e, 0x52, 0x65, 0x71, 0x75, 0x65, 0x73, 0x74, 0x1a, 0x0a, 0x2e, 0x61, 0x75, 0x74,
	0x68, 0x2e, 0x43, 0x65, 0x72, 0x74, 0x22, 0x00, 0x12, 0x2b, 0x0a, 0x09, 0x56, 0x65, 0x72, 0x69,
	0x66, 0x43, 0x65, 0x72, 0x74, 0x12, 0x0a, 0x2e, 0x61, 0x75, 0x74, 0x68, 0x2e, 0x43, 0x65, 0x72,
	0x74, 0x1a, 0x10, 0x2e, 0x61, 0x75, 0x74, 0x68, 0x2e, 0x43, 0x65, 0x72, 0x74, 0x53, 0x74, 0x61,
	0x74, 0x75, 0x73, 0x22, 0x00, 0x12, 0x25, 0x0a, 0x09, 0x52, 0x65, 0x6e, 0x65, 0x77, 0x43, 0x65,
	0x72, 0x74, 0x12, 0x0a, 0x2e, 0x61, 0x75, 0x74, 0x68, 0x2e, 0x43, 0x65, 0x72, 0x74, 0x1a, 0x0a,
	0x2e, 0x61, 0x75, 0x74, 0x68, 0x2e, 0x43, 0x65, 0x72, 0x74, 0x22, 0x00, 0x42, 0x25, 0x5a, 0x23,
	0x67, 0x69, 0x74, 0x68, 0x75, 0x62, 0x2e, 0x63, 0x6f, 0x6d, 0x2f, 0x6e, 0x61, 0x76, 0x61, 0x7a,
	0x2d, 0x61, 0x6c, 0x61, 0x6e, 0x69, 0x2f, 0x6f, 0x72, 0x79, 0x78, 0x2f, 0x70, 0x62, 0x2f, 0x61,
	0x75, 0x74, 0x68, 0x62, 0x06, 0x70, 0x72, 0x6f, 0x74, 0x6f, 0x33,
}

var (
	file_pb_auth_auth_proto_rawDescOnce sync.Once
	file_pb_auth_auth_proto_rawDescData = file_pb_auth_auth_proto_rawDesc
)

func file_pb_auth_auth_proto_rawDescGZIP() []byte {
	file_pb_auth_auth_proto_rawDescOnce.Do(func() {
		file_pb_auth_auth_proto_rawDescData = protoimpl.X.CompressGZIP(file_pb_auth_auth_proto_rawDescData)
	})
	return file_pb_auth_auth_proto_rawDescData
}

var file_pb_auth_auth_proto_enumTypes = make([]protoimpl.EnumInfo, 1)
var file_pb_auth_auth_proto_msgTypes = make([]protoimpl.MessageInfo, 3)
var file_pb_auth_auth_proto_goTypes = []interface{}{
	(CertStatus_Status)(0),        // 0: auth.CertStatus.Status
	(*Request)(nil),               // 1: auth.Request
	(*Cert)(nil),                  // 2: auth.Cert
	(*CertStatus)(nil),            // 3: auth.CertStatus
	(*timestamppb.Timestamp)(nil), // 4: google.protobuf.Timestamp
}
var file_pb_auth_auth_proto_depIdxs = []int32{
	4, // 0: auth.Cert.expiration:type_name -> google.protobuf.Timestamp
	0, // 1: auth.CertStatus.status:type_name -> auth.CertStatus.Status
	1, // 2: auth.Auth.GetCert:input_type -> auth.Request
	2, // 3: auth.Auth.VerifCert:input_type -> auth.Cert
	2, // 4: auth.Auth.RenewCert:input_type -> auth.Cert
	2, // 5: auth.Auth.GetCert:output_type -> auth.Cert
	3, // 6: auth.Auth.VerifCert:output_type -> auth.CertStatus
	2, // 7: auth.Auth.RenewCert:output_type -> auth.Cert
	5, // [5:8] is the sub-list for method output_type
	2, // [2:5] is the sub-list for method input_type
	2, // [2:2] is the sub-list for extension type_name
	2, // [2:2] is the sub-list for extension extendee
	0, // [0:2] is the sub-list for field type_name
}

func init() { file_pb_auth_auth_proto_init() }
func file_pb_auth_auth_proto_init() {
	if File_pb_auth_auth_proto != nil {
		return
	}
	if !protoimpl.UnsafeEnabled {
		file_pb_auth_auth_proto_msgTypes[0].Exporter = func(v interface{}, i int) interface{} {
			switch v := v.(*Request); i {
			case 0:
				return &v.state
			case 1:
				return &v.sizeCache
			case 2:
				return &v.unknownFields
			default:
				return nil
			}
		}
		file_pb_auth_auth_proto_msgTypes[1].Exporter = func(v interface{}, i int) interface{} {
			switch v := v.(*Cert); i {
			case 0:
				return &v.state
			case 1:
				return &v.sizeCache
			case 2:
				return &v.unknownFields
			default:
				return nil
			}
		}
		file_pb_auth_auth_proto_msgTypes[2].Exporter = func(v interface{}, i int) interface{} {
			switch v := v.(*CertStatus); i {
			case 0:
				return &v.state
			case 1:
				return &v.sizeCache
			case 2:
				return &v.unknownFields
			default:
				return nil
			}
		}
	}
	type x struct{}
	out := protoimpl.TypeBuilder{
		File: protoimpl.DescBuilder{
			GoPackagePath: reflect.TypeOf(x{}).PkgPath(),
			RawDescriptor: file_pb_auth_auth_proto_rawDesc,
			NumEnums:      1,
			NumMessages:   3,
			NumExtensions: 0,
			NumServices:   1,
		},
		GoTypes:           file_pb_auth_auth_proto_goTypes,
		DependencyIndexes: file_pb_auth_auth_proto_depIdxs,
		EnumInfos:         file_pb_auth_auth_proto_enumTypes,
		MessageInfos:      file_pb_auth_auth_proto_msgTypes,
	}.Build()
	File_pb_auth_auth_proto = out.File
	file_pb_auth_auth_proto_rawDesc = nil
	file_pb_auth_auth_proto_goTypes = nil
	file_pb_auth_auth_proto_depIdxs = nil
}
