// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: referee.proto

#ifndef PROTOBUF_referee_2eproto__INCLUDED
#define PROTOBUF_referee_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2005001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/generated_message_reflection.h>
// @@protoc_insertion_point(includes)

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_referee_2eproto();
void protobuf_AssignDesc_referee_2eproto();
void protobuf_ShutdownFile_referee_2eproto();

class SSL_Referee;
class SSL_Referee_TeamInfo;

enum SSL_Referee_Stage {
  SSL_Referee_Stage_NORMAL_FIRST_HALF_PRE = 0,
  SSL_Referee_Stage_NORMAL_FIRST_HALF = 1,
  SSL_Referee_Stage_NORMAL_HALF_TIME = 2,
  SSL_Referee_Stage_NORMAL_SECOND_HALF_PRE = 3,
  SSL_Referee_Stage_NORMAL_SECOND_HALF = 4,
  SSL_Referee_Stage_EXTRA_TIME_BREAK = 5,
  SSL_Referee_Stage_EXTRA_FIRST_HALF_PRE = 6,
  SSL_Referee_Stage_EXTRA_FIRST_HALF = 7,
  SSL_Referee_Stage_EXTRA_HALF_TIME = 8,
  SSL_Referee_Stage_EXTRA_SECOND_HALF_PRE = 9,
  SSL_Referee_Stage_EXTRA_SECOND_HALF = 10,
  SSL_Referee_Stage_PENALTY_SHOOTOUT_BREAK = 11,
  SSL_Referee_Stage_PENALTY_SHOOTOUT = 12,
  SSL_Referee_Stage_POST_GAME = 13
};
bool SSL_Referee_Stage_IsValid(int value);
const SSL_Referee_Stage SSL_Referee_Stage_Stage_MIN = SSL_Referee_Stage_NORMAL_FIRST_HALF_PRE;
const SSL_Referee_Stage SSL_Referee_Stage_Stage_MAX = SSL_Referee_Stage_POST_GAME;
const int SSL_Referee_Stage_Stage_ARRAYSIZE = SSL_Referee_Stage_Stage_MAX + 1;

const ::google::protobuf::EnumDescriptor* SSL_Referee_Stage_descriptor();
inline const ::std::string& SSL_Referee_Stage_Name(SSL_Referee_Stage value) {
  return ::google::protobuf::internal::NameOfEnum(
    SSL_Referee_Stage_descriptor(), value);
}
inline bool SSL_Referee_Stage_Parse(
    const ::std::string& name, SSL_Referee_Stage* value) {
  return ::google::protobuf::internal::ParseNamedEnum<SSL_Referee_Stage>(
    SSL_Referee_Stage_descriptor(), name, value);
}
enum SSL_Referee_Command {
  SSL_Referee_Command_HALT = 0,
  SSL_Referee_Command_STOP = 1,
  SSL_Referee_Command_NORMAL_START = 2,
  SSL_Referee_Command_FORCE_START = 3,
  SSL_Referee_Command_PREPARE_KICKOFF_YELLOW = 4,
  SSL_Referee_Command_PREPARE_KICKOFF_BLUE = 5,
  SSL_Referee_Command_PREPARE_PENALTY_YELLOW = 6,
  SSL_Referee_Command_PREPARE_PENALTY_BLUE = 7,
  SSL_Referee_Command_DIRECT_FREE_YELLOW = 8,
  SSL_Referee_Command_DIRECT_FREE_BLUE = 9,
  SSL_Referee_Command_INDIRECT_FREE_YELLOW = 10,
  SSL_Referee_Command_INDIRECT_FREE_BLUE = 11,
  SSL_Referee_Command_TIMEOUT_YELLOW = 12,
  SSL_Referee_Command_TIMEOUT_BLUE = 13,
  SSL_Referee_Command_GOAL_YELLOW = 14,
  SSL_Referee_Command_GOAL_BLUE = 15
};
bool SSL_Referee_Command_IsValid(int value);
const SSL_Referee_Command SSL_Referee_Command_Command_MIN = SSL_Referee_Command_HALT;
const SSL_Referee_Command SSL_Referee_Command_Command_MAX = SSL_Referee_Command_GOAL_BLUE;
const int SSL_Referee_Command_Command_ARRAYSIZE = SSL_Referee_Command_Command_MAX + 1;

const ::google::protobuf::EnumDescriptor* SSL_Referee_Command_descriptor();
inline const ::std::string& SSL_Referee_Command_Name(SSL_Referee_Command value) {
  return ::google::protobuf::internal::NameOfEnum(
    SSL_Referee_Command_descriptor(), value);
}
inline bool SSL_Referee_Command_Parse(
    const ::std::string& name, SSL_Referee_Command* value) {
  return ::google::protobuf::internal::ParseNamedEnum<SSL_Referee_Command>(
    SSL_Referee_Command_descriptor(), name, value);
}
// ===================================================================

class SSL_Referee_TeamInfo : public ::google::protobuf::Message {
 public:
  SSL_Referee_TeamInfo();
  virtual ~SSL_Referee_TeamInfo();
  
  SSL_Referee_TeamInfo(const SSL_Referee_TeamInfo& from);
  
  inline SSL_Referee_TeamInfo& operator=(const SSL_Referee_TeamInfo& from) {
    CopyFrom(from);
    return *this;
  }
  
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }
  
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }
  
  static const ::google::protobuf::Descriptor* descriptor();
  static const SSL_Referee_TeamInfo& default_instance();
  
  void Swap(SSL_Referee_TeamInfo* other);
  
  // implements Message ----------------------------------------------
  
  SSL_Referee_TeamInfo* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const SSL_Referee_TeamInfo& from);
  void MergeFrom(const SSL_Referee_TeamInfo& from);
  void Clear();
  bool IsInitialized() const;
  
  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  
  ::google::protobuf::Metadata GetMetadata() const;
  
  // nested types ----------------------------------------------------
  
  // accessors -------------------------------------------------------
  
  // required string name = 1;
  inline bool has_name() const;
  inline void clear_name();
  static const int kNameFieldNumber = 1;
  inline const ::std::string& name() const;
  inline void set_name(const ::std::string& value);
  inline void set_name(const char* value);
  inline void set_name(const char* value, size_t size);
  inline ::std::string* mutable_name();
  inline ::std::string* release_name();
  
  // required uint32 score = 2;
  inline bool has_score() const;
  inline void clear_score();
  static const int kScoreFieldNumber = 2;
  inline ::google::protobuf::uint32 score() const;
  inline void set_score(::google::protobuf::uint32 value);
  
  // required uint32 red_cards = 3;
  inline bool has_red_cards() const;
  inline void clear_red_cards();
  static const int kRedCardsFieldNumber = 3;
  inline ::google::protobuf::uint32 red_cards() const;
  inline void set_red_cards(::google::protobuf::uint32 value);
  
  // repeated uint32 yellow_card_times = 4 [packed = true];
  inline int yellow_card_times_size() const;
  inline void clear_yellow_card_times();
  static const int kYellowCardTimesFieldNumber = 4;
  inline ::google::protobuf::uint32 yellow_card_times(int index) const;
  inline void set_yellow_card_times(int index, ::google::protobuf::uint32 value);
  inline void add_yellow_card_times(::google::protobuf::uint32 value);
  inline const ::google::protobuf::RepeatedField< ::google::protobuf::uint32 >&
      yellow_card_times() const;
  inline ::google::protobuf::RepeatedField< ::google::protobuf::uint32 >*
      mutable_yellow_card_times();
  
  // required uint32 yellow_cards = 5;
  inline bool has_yellow_cards() const;
  inline void clear_yellow_cards();
  static const int kYellowCardsFieldNumber = 5;
  inline ::google::protobuf::uint32 yellow_cards() const;
  inline void set_yellow_cards(::google::protobuf::uint32 value);
  
  // required uint32 timeouts = 6;
  inline bool has_timeouts() const;
  inline void clear_timeouts();
  static const int kTimeoutsFieldNumber = 6;
  inline ::google::protobuf::uint32 timeouts() const;
  inline void set_timeouts(::google::protobuf::uint32 value);
  
  // required uint32 timeout_time = 7;
  inline bool has_timeout_time() const;
  inline void clear_timeout_time();
  static const int kTimeoutTimeFieldNumber = 7;
  inline ::google::protobuf::uint32 timeout_time() const;
  inline void set_timeout_time(::google::protobuf::uint32 value);
  
  // required uint32 goalie = 8;
  inline bool has_goalie() const;
  inline void clear_goalie();
  static const int kGoalieFieldNumber = 8;
  inline ::google::protobuf::uint32 goalie() const;
  inline void set_goalie(::google::protobuf::uint32 value);
  
  // @@protoc_insertion_point(class_scope:SSL_Referee.TeamInfo)
 private:
  inline void set_has_name();
  inline void clear_has_name();
  inline void set_has_score();
  inline void clear_has_score();
  inline void set_has_red_cards();
  inline void clear_has_red_cards();
  inline void set_has_yellow_cards();
  inline void clear_has_yellow_cards();
  inline void set_has_timeouts();
  inline void clear_has_timeouts();
  inline void set_has_timeout_time();
  inline void clear_has_timeout_time();
  inline void set_has_goalie();
  inline void clear_has_goalie();
  
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  
  ::std::string* name_;
  ::google::protobuf::uint32 score_;
  ::google::protobuf::uint32 red_cards_;
  ::google::protobuf::RepeatedField< ::google::protobuf::uint32 > yellow_card_times_;
  mutable int _yellow_card_times_cached_byte_size_;
  ::google::protobuf::uint32 yellow_cards_;
  ::google::protobuf::uint32 timeouts_;
  ::google::protobuf::uint32 timeout_time_;
  ::google::protobuf::uint32 goalie_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(8 + 31) / 32];
  
  friend void  protobuf_AddDesc_referee_2eproto();
  friend void protobuf_AssignDesc_referee_2eproto();
  friend void protobuf_ShutdownFile_referee_2eproto();
  
  void InitAsDefaultInstance();
  static SSL_Referee_TeamInfo* default_instance_;
};
// -------------------------------------------------------------------

class SSL_Referee : public ::google::protobuf::Message {
 public:
  SSL_Referee();
  virtual ~SSL_Referee();
  
  SSL_Referee(const SSL_Referee& from);
  
  inline SSL_Referee& operator=(const SSL_Referee& from) {
    CopyFrom(from);
    return *this;
  }
  
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }
  
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }
  
  static const ::google::protobuf::Descriptor* descriptor();
  static const SSL_Referee& default_instance();
  
  void Swap(SSL_Referee* other);
  
  // implements Message ----------------------------------------------
  
  SSL_Referee* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const SSL_Referee& from);
  void MergeFrom(const SSL_Referee& from);
  void Clear();
  bool IsInitialized() const;
  
  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  
  ::google::protobuf::Metadata GetMetadata() const;
  
  // nested types ----------------------------------------------------
  
  typedef SSL_Referee_TeamInfo TeamInfo;
  
  typedef SSL_Referee_Stage Stage;
  static const Stage NORMAL_FIRST_HALF_PRE = SSL_Referee_Stage_NORMAL_FIRST_HALF_PRE;
  static const Stage NORMAL_FIRST_HALF = SSL_Referee_Stage_NORMAL_FIRST_HALF;
  static const Stage NORMAL_HALF_TIME = SSL_Referee_Stage_NORMAL_HALF_TIME;
  static const Stage NORMAL_SECOND_HALF_PRE = SSL_Referee_Stage_NORMAL_SECOND_HALF_PRE;
  static const Stage NORMAL_SECOND_HALF = SSL_Referee_Stage_NORMAL_SECOND_HALF;
  static const Stage EXTRA_TIME_BREAK = SSL_Referee_Stage_EXTRA_TIME_BREAK;
  static const Stage EXTRA_FIRST_HALF_PRE = SSL_Referee_Stage_EXTRA_FIRST_HALF_PRE;
  static const Stage EXTRA_FIRST_HALF = SSL_Referee_Stage_EXTRA_FIRST_HALF;
  static const Stage EXTRA_HALF_TIME = SSL_Referee_Stage_EXTRA_HALF_TIME;
  static const Stage EXTRA_SECOND_HALF_PRE = SSL_Referee_Stage_EXTRA_SECOND_HALF_PRE;
  static const Stage EXTRA_SECOND_HALF = SSL_Referee_Stage_EXTRA_SECOND_HALF;
  static const Stage PENALTY_SHOOTOUT_BREAK = SSL_Referee_Stage_PENALTY_SHOOTOUT_BREAK;
  static const Stage PENALTY_SHOOTOUT = SSL_Referee_Stage_PENALTY_SHOOTOUT;
  static const Stage POST_GAME = SSL_Referee_Stage_POST_GAME;
  static inline bool Stage_IsValid(int value) {
    return SSL_Referee_Stage_IsValid(value);
  }
  static const Stage Stage_MIN =
    SSL_Referee_Stage_Stage_MIN;
  static const Stage Stage_MAX =
    SSL_Referee_Stage_Stage_MAX;
  static const int Stage_ARRAYSIZE =
    SSL_Referee_Stage_Stage_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  Stage_descriptor() {
    return SSL_Referee_Stage_descriptor();
  }
  static inline const ::std::string& Stage_Name(Stage value) {
    return SSL_Referee_Stage_Name(value);
  }
  static inline bool Stage_Parse(const ::std::string& name,
      Stage* value) {
    return SSL_Referee_Stage_Parse(name, value);
  }
  
  typedef SSL_Referee_Command Command;
  static const Command HALT = SSL_Referee_Command_HALT;
  static const Command STOP = SSL_Referee_Command_STOP;
  static const Command NORMAL_START = SSL_Referee_Command_NORMAL_START;
  static const Command FORCE_START = SSL_Referee_Command_FORCE_START;
  static const Command PREPARE_KICKOFF_YELLOW = SSL_Referee_Command_PREPARE_KICKOFF_YELLOW;
  static const Command PREPARE_KICKOFF_BLUE = SSL_Referee_Command_PREPARE_KICKOFF_BLUE;
  static const Command PREPARE_PENALTY_YELLOW = SSL_Referee_Command_PREPARE_PENALTY_YELLOW;
  static const Command PREPARE_PENALTY_BLUE = SSL_Referee_Command_PREPARE_PENALTY_BLUE;
  static const Command DIRECT_FREE_YELLOW = SSL_Referee_Command_DIRECT_FREE_YELLOW;
  static const Command DIRECT_FREE_BLUE = SSL_Referee_Command_DIRECT_FREE_BLUE;
  static const Command INDIRECT_FREE_YELLOW = SSL_Referee_Command_INDIRECT_FREE_YELLOW;
  static const Command INDIRECT_FREE_BLUE = SSL_Referee_Command_INDIRECT_FREE_BLUE;
  static const Command TIMEOUT_YELLOW = SSL_Referee_Command_TIMEOUT_YELLOW;
  static const Command TIMEOUT_BLUE = SSL_Referee_Command_TIMEOUT_BLUE;
  static const Command GOAL_YELLOW = SSL_Referee_Command_GOAL_YELLOW;
  static const Command GOAL_BLUE = SSL_Referee_Command_GOAL_BLUE;
  static inline bool Command_IsValid(int value) {
    return SSL_Referee_Command_IsValid(value);
  }
  static const Command Command_MIN =
    SSL_Referee_Command_Command_MIN;
  static const Command Command_MAX =
    SSL_Referee_Command_Command_MAX;
  static const int Command_ARRAYSIZE =
    SSL_Referee_Command_Command_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  Command_descriptor() {
    return SSL_Referee_Command_descriptor();
  }
  static inline const ::std::string& Command_Name(Command value) {
    return SSL_Referee_Command_Name(value);
  }
  static inline bool Command_Parse(const ::std::string& name,
      Command* value) {
    return SSL_Referee_Command_Parse(name, value);
  }
  
  // accessors -------------------------------------------------------
  
  // required uint64 packet_timestamp = 1;
  inline bool has_packet_timestamp() const;
  inline void clear_packet_timestamp();
  static const int kPacketTimestampFieldNumber = 1;
  inline ::google::protobuf::uint64 packet_timestamp() const;
  inline void set_packet_timestamp(::google::protobuf::uint64 value);
  
  // required .SSL_Referee.Stage stage = 2;
  inline bool has_stage() const;
  inline void clear_stage();
  static const int kStageFieldNumber = 2;
  inline ::SSL_Referee_Stage stage() const;
  inline void set_stage(::SSL_Referee_Stage value);
  
  // optional sint32 stage_time_left = 3;
  inline bool has_stage_time_left() const;
  inline void clear_stage_time_left();
  static const int kStageTimeLeftFieldNumber = 3;
  inline ::google::protobuf::int32 stage_time_left() const;
  inline void set_stage_time_left(::google::protobuf::int32 value);
  
  // required .SSL_Referee.Command command = 4;
  inline bool has_command() const;
  inline void clear_command();
  static const int kCommandFieldNumber = 4;
  inline ::SSL_Referee_Command command() const;
  inline void set_command(::SSL_Referee_Command value);
  
  // required uint32 command_counter = 5;
  inline bool has_command_counter() const;
  inline void clear_command_counter();
  static const int kCommandCounterFieldNumber = 5;
  inline ::google::protobuf::uint32 command_counter() const;
  inline void set_command_counter(::google::protobuf::uint32 value);
  
  // required uint64 command_timestamp = 6;
  inline bool has_command_timestamp() const;
  inline void clear_command_timestamp();
  static const int kCommandTimestampFieldNumber = 6;
  inline ::google::protobuf::uint64 command_timestamp() const;
  inline void set_command_timestamp(::google::protobuf::uint64 value);
  
  // required .SSL_Referee.TeamInfo yellow = 7;
  inline bool has_yellow() const;
  inline void clear_yellow();
  static const int kYellowFieldNumber = 7;
  inline const ::SSL_Referee_TeamInfo& yellow() const;
  inline ::SSL_Referee_TeamInfo* mutable_yellow();
  inline ::SSL_Referee_TeamInfo* release_yellow();
  
  // required .SSL_Referee.TeamInfo blue = 8;
  inline bool has_blue() const;
  inline void clear_blue();
  static const int kBlueFieldNumber = 8;
  inline const ::SSL_Referee_TeamInfo& blue() const;
  inline ::SSL_Referee_TeamInfo* mutable_blue();
  inline ::SSL_Referee_TeamInfo* release_blue();
  
  // @@protoc_insertion_point(class_scope:SSL_Referee)
 private:
  inline void set_has_packet_timestamp();
  inline void clear_has_packet_timestamp();
  inline void set_has_stage();
  inline void clear_has_stage();
  inline void set_has_stage_time_left();
  inline void clear_has_stage_time_left();
  inline void set_has_command();
  inline void clear_has_command();
  inline void set_has_command_counter();
  inline void clear_has_command_counter();
  inline void set_has_command_timestamp();
  inline void clear_has_command_timestamp();
  inline void set_has_yellow();
  inline void clear_has_yellow();
  inline void set_has_blue();
  inline void clear_has_blue();
  
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  
  ::google::protobuf::uint64 packet_timestamp_;
  int stage_;
  ::google::protobuf::int32 stage_time_left_;
  int command_;
  ::google::protobuf::uint32 command_counter_;
  ::google::protobuf::uint64 command_timestamp_;
  ::SSL_Referee_TeamInfo* yellow_;
  ::SSL_Referee_TeamInfo* blue_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(8 + 31) / 32];
  
  friend void  protobuf_AddDesc_referee_2eproto();
  friend void protobuf_AssignDesc_referee_2eproto();
  friend void protobuf_ShutdownFile_referee_2eproto();
  
  void InitAsDefaultInstance();
  static SSL_Referee* default_instance_;
};
// ===================================================================


// ===================================================================

// SSL_Referee_TeamInfo

// required string name = 1;
inline bool SSL_Referee_TeamInfo::has_name() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void SSL_Referee_TeamInfo::set_has_name() {
  _has_bits_[0] |= 0x00000001u;
}
inline void SSL_Referee_TeamInfo::clear_has_name() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void SSL_Referee_TeamInfo::clear_name() {
  if (name_ != &::google::protobuf::internal::kEmptyString) {
    name_->clear();
  }
  clear_has_name();
}
inline const ::std::string& SSL_Referee_TeamInfo::name() const {
  return *name_;
}
inline void SSL_Referee_TeamInfo::set_name(const ::std::string& value) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  name_->assign(value);
}
inline void SSL_Referee_TeamInfo::set_name(const char* value) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  name_->assign(value);
}
inline void SSL_Referee_TeamInfo::set_name(const char* value, size_t size) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  name_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* SSL_Referee_TeamInfo::mutable_name() {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  return name_;
}
inline ::std::string* SSL_Referee_TeamInfo::release_name() {
  clear_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = name_;
    name_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}

// required uint32 score = 2;
inline bool SSL_Referee_TeamInfo::has_score() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void SSL_Referee_TeamInfo::set_has_score() {
  _has_bits_[0] |= 0x00000002u;
}
inline void SSL_Referee_TeamInfo::clear_has_score() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void SSL_Referee_TeamInfo::clear_score() {
  score_ = 0u;
  clear_has_score();
}
inline ::google::protobuf::uint32 SSL_Referee_TeamInfo::score() const {
  return score_;
}
inline void SSL_Referee_TeamInfo::set_score(::google::protobuf::uint32 value) {
  set_has_score();
  score_ = value;
}

// required uint32 red_cards = 3;
inline bool SSL_Referee_TeamInfo::has_red_cards() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void SSL_Referee_TeamInfo::set_has_red_cards() {
  _has_bits_[0] |= 0x00000004u;
}
inline void SSL_Referee_TeamInfo::clear_has_red_cards() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void SSL_Referee_TeamInfo::clear_red_cards() {
  red_cards_ = 0u;
  clear_has_red_cards();
}
inline ::google::protobuf::uint32 SSL_Referee_TeamInfo::red_cards() const {
  return red_cards_;
}
inline void SSL_Referee_TeamInfo::set_red_cards(::google::protobuf::uint32 value) {
  set_has_red_cards();
  red_cards_ = value;
}

// repeated uint32 yellow_card_times = 4 [packed = true];
inline int SSL_Referee_TeamInfo::yellow_card_times_size() const {
  return yellow_card_times_.size();
}
inline void SSL_Referee_TeamInfo::clear_yellow_card_times() {
  yellow_card_times_.Clear();
}
inline ::google::protobuf::uint32 SSL_Referee_TeamInfo::yellow_card_times(int index) const {
  return yellow_card_times_.Get(index);
}
inline void SSL_Referee_TeamInfo::set_yellow_card_times(int index, ::google::protobuf::uint32 value) {
  yellow_card_times_.Set(index, value);
}
inline void SSL_Referee_TeamInfo::add_yellow_card_times(::google::protobuf::uint32 value) {
  yellow_card_times_.Add(value);
}
inline const ::google::protobuf::RepeatedField< ::google::protobuf::uint32 >&
SSL_Referee_TeamInfo::yellow_card_times() const {
  return yellow_card_times_;
}
inline ::google::protobuf::RepeatedField< ::google::protobuf::uint32 >*
SSL_Referee_TeamInfo::mutable_yellow_card_times() {
  return &yellow_card_times_;
}

// required uint32 yellow_cards = 5;
inline bool SSL_Referee_TeamInfo::has_yellow_cards() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void SSL_Referee_TeamInfo::set_has_yellow_cards() {
  _has_bits_[0] |= 0x00000010u;
}
inline void SSL_Referee_TeamInfo::clear_has_yellow_cards() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void SSL_Referee_TeamInfo::clear_yellow_cards() {
  yellow_cards_ = 0u;
  clear_has_yellow_cards();
}
inline ::google::protobuf::uint32 SSL_Referee_TeamInfo::yellow_cards() const {
  return yellow_cards_;
}
inline void SSL_Referee_TeamInfo::set_yellow_cards(::google::protobuf::uint32 value) {
  set_has_yellow_cards();
  yellow_cards_ = value;
}

// required uint32 timeouts = 6;
inline bool SSL_Referee_TeamInfo::has_timeouts() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void SSL_Referee_TeamInfo::set_has_timeouts() {
  _has_bits_[0] |= 0x00000020u;
}
inline void SSL_Referee_TeamInfo::clear_has_timeouts() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void SSL_Referee_TeamInfo::clear_timeouts() {
  timeouts_ = 0u;
  clear_has_timeouts();
}
inline ::google::protobuf::uint32 SSL_Referee_TeamInfo::timeouts() const {
  return timeouts_;
}
inline void SSL_Referee_TeamInfo::set_timeouts(::google::protobuf::uint32 value) {
  set_has_timeouts();
  timeouts_ = value;
}

// required uint32 timeout_time = 7;
inline bool SSL_Referee_TeamInfo::has_timeout_time() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void SSL_Referee_TeamInfo::set_has_timeout_time() {
  _has_bits_[0] |= 0x00000040u;
}
inline void SSL_Referee_TeamInfo::clear_has_timeout_time() {
  _has_bits_[0] &= ~0x00000040u;
}
inline void SSL_Referee_TeamInfo::clear_timeout_time() {
  timeout_time_ = 0u;
  clear_has_timeout_time();
}
inline ::google::protobuf::uint32 SSL_Referee_TeamInfo::timeout_time() const {
  return timeout_time_;
}
inline void SSL_Referee_TeamInfo::set_timeout_time(::google::protobuf::uint32 value) {
  set_has_timeout_time();
  timeout_time_ = value;
}

// required uint32 goalie = 8;
inline bool SSL_Referee_TeamInfo::has_goalie() const {
  return (_has_bits_[0] & 0x00000080u) != 0;
}
inline void SSL_Referee_TeamInfo::set_has_goalie() {
  _has_bits_[0] |= 0x00000080u;
}
inline void SSL_Referee_TeamInfo::clear_has_goalie() {
  _has_bits_[0] &= ~0x00000080u;
}
inline void SSL_Referee_TeamInfo::clear_goalie() {
  goalie_ = 0u;
  clear_has_goalie();
}
inline ::google::protobuf::uint32 SSL_Referee_TeamInfo::goalie() const {
  return goalie_;
}
inline void SSL_Referee_TeamInfo::set_goalie(::google::protobuf::uint32 value) {
  set_has_goalie();
  goalie_ = value;
}

// -------------------------------------------------------------------

// SSL_Referee

// required uint64 packet_timestamp = 1;
inline bool SSL_Referee::has_packet_timestamp() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void SSL_Referee::set_has_packet_timestamp() {
  _has_bits_[0] |= 0x00000001u;
}
inline void SSL_Referee::clear_has_packet_timestamp() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void SSL_Referee::clear_packet_timestamp() {
  packet_timestamp_ = GOOGLE_ULONGLONG(0);
  clear_has_packet_timestamp();
}
inline ::google::protobuf::uint64 SSL_Referee::packet_timestamp() const {
  return packet_timestamp_;
}
inline void SSL_Referee::set_packet_timestamp(::google::protobuf::uint64 value) {
  set_has_packet_timestamp();
  packet_timestamp_ = value;
}

// required .SSL_Referee.Stage stage = 2;
inline bool SSL_Referee::has_stage() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void SSL_Referee::set_has_stage() {
  _has_bits_[0] |= 0x00000002u;
}
inline void SSL_Referee::clear_has_stage() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void SSL_Referee::clear_stage() {
  stage_ = 0;
  clear_has_stage();
}
inline ::SSL_Referee_Stage SSL_Referee::stage() const {
  return static_cast< ::SSL_Referee_Stage >(stage_);
}
inline void SSL_Referee::set_stage(::SSL_Referee_Stage value) {
  GOOGLE_DCHECK(::SSL_Referee_Stage_IsValid(value));
  set_has_stage();
  stage_ = value;
}

// optional sint32 stage_time_left = 3;
inline bool SSL_Referee::has_stage_time_left() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void SSL_Referee::set_has_stage_time_left() {
  _has_bits_[0] |= 0x00000004u;
}
inline void SSL_Referee::clear_has_stage_time_left() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void SSL_Referee::clear_stage_time_left() {
  stage_time_left_ = 0;
  clear_has_stage_time_left();
}
inline ::google::protobuf::int32 SSL_Referee::stage_time_left() const {
  return stage_time_left_;
}
inline void SSL_Referee::set_stage_time_left(::google::protobuf::int32 value) {
  set_has_stage_time_left();
  stage_time_left_ = value;
}

// required .SSL_Referee.Command command = 4;
inline bool SSL_Referee::has_command() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void SSL_Referee::set_has_command() {
  _has_bits_[0] |= 0x00000008u;
}
inline void SSL_Referee::clear_has_command() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void SSL_Referee::clear_command() {
  command_ = 0;
  clear_has_command();
}
inline ::SSL_Referee_Command SSL_Referee::command() const {
  return static_cast< ::SSL_Referee_Command >(command_);
}
inline void SSL_Referee::set_command(::SSL_Referee_Command value) {
  GOOGLE_DCHECK(::SSL_Referee_Command_IsValid(value));
  set_has_command();
  command_ = value;
}

// required uint32 command_counter = 5;
inline bool SSL_Referee::has_command_counter() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void SSL_Referee::set_has_command_counter() {
  _has_bits_[0] |= 0x00000010u;
}
inline void SSL_Referee::clear_has_command_counter() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void SSL_Referee::clear_command_counter() {
  command_counter_ = 0u;
  clear_has_command_counter();
}
inline ::google::protobuf::uint32 SSL_Referee::command_counter() const {
  return command_counter_;
}
inline void SSL_Referee::set_command_counter(::google::protobuf::uint32 value) {
  set_has_command_counter();
  command_counter_ = value;
}

// required uint64 command_timestamp = 6;
inline bool SSL_Referee::has_command_timestamp() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void SSL_Referee::set_has_command_timestamp() {
  _has_bits_[0] |= 0x00000020u;
}
inline void SSL_Referee::clear_has_command_timestamp() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void SSL_Referee::clear_command_timestamp() {
  command_timestamp_ = GOOGLE_ULONGLONG(0);
  clear_has_command_timestamp();
}
inline ::google::protobuf::uint64 SSL_Referee::command_timestamp() const {
  return command_timestamp_;
}
inline void SSL_Referee::set_command_timestamp(::google::protobuf::uint64 value) {
  set_has_command_timestamp();
  command_timestamp_ = value;
}

// required .SSL_Referee.TeamInfo yellow = 7;
inline bool SSL_Referee::has_yellow() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void SSL_Referee::set_has_yellow() {
  _has_bits_[0] |= 0x00000040u;
}
inline void SSL_Referee::clear_has_yellow() {
  _has_bits_[0] &= ~0x00000040u;
}
inline void SSL_Referee::clear_yellow() {
  if (yellow_ != NULL) yellow_->::SSL_Referee_TeamInfo::Clear();
  clear_has_yellow();
}
inline const ::SSL_Referee_TeamInfo& SSL_Referee::yellow() const {
  return yellow_ != NULL ? *yellow_ : *default_instance_->yellow_;
}
inline ::SSL_Referee_TeamInfo* SSL_Referee::mutable_yellow() {
  set_has_yellow();
  if (yellow_ == NULL) yellow_ = new ::SSL_Referee_TeamInfo;
  return yellow_;
}
inline ::SSL_Referee_TeamInfo* SSL_Referee::release_yellow() {
  clear_has_yellow();
  ::SSL_Referee_TeamInfo* temp = yellow_;
  yellow_ = NULL;
  return temp;
}

// required .SSL_Referee.TeamInfo blue = 8;
inline bool SSL_Referee::has_blue() const {
  return (_has_bits_[0] & 0x00000080u) != 0;
}
inline void SSL_Referee::set_has_blue() {
  _has_bits_[0] |= 0x00000080u;
}
inline void SSL_Referee::clear_has_blue() {
  _has_bits_[0] &= ~0x00000080u;
}
inline void SSL_Referee::clear_blue() {
  if (blue_ != NULL) blue_->::SSL_Referee_TeamInfo::Clear();
  clear_has_blue();
}
inline const ::SSL_Referee_TeamInfo& SSL_Referee::blue() const {
  return blue_ != NULL ? *blue_ : *default_instance_->blue_;
}
inline ::SSL_Referee_TeamInfo* SSL_Referee::mutable_blue() {
  set_has_blue();
  if (blue_ == NULL) blue_ = new ::SSL_Referee_TeamInfo;
  return blue_;
}
inline ::SSL_Referee_TeamInfo* SSL_Referee::release_blue() {
  clear_has_blue();
  ::SSL_Referee_TeamInfo* temp = blue_;
  blue_ = NULL;
  return temp;
}


// @@protoc_insertion_point(namespace_scope)

#ifndef SWIG
namespace google {
namespace protobuf {

template <>
inline const EnumDescriptor* GetEnumDescriptor< ::SSL_Referee_Stage>() {
  return ::SSL_Referee_Stage_descriptor();
}
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::SSL_Referee_Command>() {
  return ::SSL_Referee_Command_descriptor();
}

}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_referee_2eproto__INCLUDED
