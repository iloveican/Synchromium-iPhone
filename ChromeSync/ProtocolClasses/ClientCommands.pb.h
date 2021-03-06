// Generated by the protocol buffer compiler.  DO NOT EDIT!

#import "ProtocolBuffers.h"

@class ClientCommand;
@class ClientCommand_Builder;

@interface ClientCommandsRoot : NSObject {
}
+ (PBExtensionRegistry*) extensionRegistry;
+ (void) registerAllExtensions:(PBMutableExtensionRegistry*) registry;
@end

@interface ClientCommand : PBGeneratedMessage {
@private
  BOOL hasSetSyncPollInterval_:1;
  BOOL hasSetSyncLongPollInterval_:1;
  BOOL hasMaxCommitBatchSize_:1;
  BOOL hasSessionsCommitDelaySeconds_:1;
  BOOL hasThrottleDelaySeconds_:1;
  int32_t setSyncPollInterval;
  int32_t setSyncLongPollInterval;
  int32_t maxCommitBatchSize;
  int32_t sessionsCommitDelaySeconds;
  int32_t throttleDelaySeconds;
}
- (BOOL) hasSetSyncPollInterval;
- (BOOL) hasSetSyncLongPollInterval;
- (BOOL) hasMaxCommitBatchSize;
- (BOOL) hasSessionsCommitDelaySeconds;
- (BOOL) hasThrottleDelaySeconds;
@property (readonly) int32_t setSyncPollInterval;
@property (readonly) int32_t setSyncLongPollInterval;
@property (readonly) int32_t maxCommitBatchSize;
@property (readonly) int32_t sessionsCommitDelaySeconds;
@property (readonly) int32_t throttleDelaySeconds;

+ (ClientCommand*) defaultInstance;
- (ClientCommand*) defaultInstance;

- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (ClientCommand_Builder*) builder;
+ (ClientCommand_Builder*) builder;
+ (ClientCommand_Builder*) builderWithPrototype:(ClientCommand*) prototype;

+ (ClientCommand*) parseFromData:(NSData*) data;
+ (ClientCommand*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (ClientCommand*) parseFromInputStream:(NSInputStream*) input;
+ (ClientCommand*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (ClientCommand*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (ClientCommand*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

@interface ClientCommand_Builder : PBGeneratedMessage_Builder {
@private
  ClientCommand* result;
}

- (ClientCommand*) defaultInstance;

- (ClientCommand_Builder*) clear;
- (ClientCommand_Builder*) clone;

- (ClientCommand*) build;
- (ClientCommand*) buildPartial;

- (ClientCommand_Builder*) mergeFrom:(ClientCommand*) other;
- (ClientCommand_Builder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (ClientCommand_Builder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;

- (BOOL) hasSetSyncPollInterval;
- (int32_t) setSyncPollInterval;
- (ClientCommand_Builder*) setSetSyncPollInterval:(int32_t) value;
- (ClientCommand_Builder*) clearSetSyncPollInterval;

- (BOOL) hasSetSyncLongPollInterval;
- (int32_t) setSyncLongPollInterval;
- (ClientCommand_Builder*) setSetSyncLongPollInterval:(int32_t) value;
- (ClientCommand_Builder*) clearSetSyncLongPollInterval;

- (BOOL) hasMaxCommitBatchSize;
- (int32_t) maxCommitBatchSize;
- (ClientCommand_Builder*) setMaxCommitBatchSize:(int32_t) value;
- (ClientCommand_Builder*) clearMaxCommitBatchSize;

- (BOOL) hasSessionsCommitDelaySeconds;
- (int32_t) sessionsCommitDelaySeconds;
- (ClientCommand_Builder*) setSessionsCommitDelaySeconds:(int32_t) value;
- (ClientCommand_Builder*) clearSessionsCommitDelaySeconds;

- (BOOL) hasThrottleDelaySeconds;
- (int32_t) throttleDelaySeconds;
- (ClientCommand_Builder*) setThrottleDelaySeconds:(int32_t) value;
- (ClientCommand_Builder*) clearThrottleDelaySeconds;
@end

