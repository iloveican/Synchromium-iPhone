// Generated by the protocol buffer compiler.  DO NOT EDIT!

#import "ProtocolBuffers.h"

#import "ExtensionSpecifics.pb.h"

@class AppNotificationSettings;
@class AppNotificationSettings_Builder;
@class AppSpecifics;
@class AppSpecifics_Builder;
@class ExtensionSpecifics;
@class ExtensionSpecifics_Builder;

@interface AppSpecificsRoot : NSObject {
}
+ (PBExtensionRegistry*) extensionRegistry;
+ (void) registerAllExtensions:(PBMutableExtensionRegistry*) registry;
@end

@interface AppNotificationSettings : PBGeneratedMessage {
@private
  BOOL hasInitialSetupDone_:1;
  BOOL hasDisabled_:1;
  BOOL hasOauthClientId_:1;
  BOOL initialSetupDone_:1;
  BOOL disabled_:1;
  NSString* oauthClientId;
}
- (BOOL) hasInitialSetupDone;
- (BOOL) hasDisabled;
- (BOOL) hasOauthClientId;
- (BOOL) initialSetupDone;
- (BOOL) disabled;
@property (readonly, retain) NSString* oauthClientId;

+ (AppNotificationSettings*) defaultInstance;
- (AppNotificationSettings*) defaultInstance;

- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (AppNotificationSettings_Builder*) builder;
+ (AppNotificationSettings_Builder*) builder;
+ (AppNotificationSettings_Builder*) builderWithPrototype:(AppNotificationSettings*) prototype;

+ (AppNotificationSettings*) parseFromData:(NSData*) data;
+ (AppNotificationSettings*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (AppNotificationSettings*) parseFromInputStream:(NSInputStream*) input;
+ (AppNotificationSettings*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (AppNotificationSettings*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (AppNotificationSettings*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

@interface AppNotificationSettings_Builder : PBGeneratedMessage_Builder {
@private
  AppNotificationSettings* result;
}

- (AppNotificationSettings*) defaultInstance;

- (AppNotificationSettings_Builder*) clear;
- (AppNotificationSettings_Builder*) clone;

- (AppNotificationSettings*) build;
- (AppNotificationSettings*) buildPartial;

- (AppNotificationSettings_Builder*) mergeFrom:(AppNotificationSettings*) other;
- (AppNotificationSettings_Builder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (AppNotificationSettings_Builder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;

- (BOOL) hasInitialSetupDone;
- (BOOL) initialSetupDone;
- (AppNotificationSettings_Builder*) setInitialSetupDone:(BOOL) value;
- (AppNotificationSettings_Builder*) clearInitialSetupDone;

- (BOOL) hasDisabled;
- (BOOL) disabled;
- (AppNotificationSettings_Builder*) setDisabled:(BOOL) value;
- (AppNotificationSettings_Builder*) clearDisabled;

- (BOOL) hasOauthClientId;
- (NSString*) oauthClientId;
- (AppNotificationSettings_Builder*) setOauthClientId:(NSString*) value;
- (AppNotificationSettings_Builder*) clearOauthClientId;
@end

@interface AppSpecifics : PBGeneratedMessage {
@private
  BOOL hasAppLaunchOrdinal_:1;
  BOOL hasPageOrdinal_:1;
  BOOL hasExtension_:1;
  BOOL hasNotificationSettings_:1;
  NSString* appLaunchOrdinal;
  NSString* pageOrdinal;
  ExtensionSpecifics* extension;
  AppNotificationSettings* notificationSettings;
}
- (BOOL) hasExtension;
- (BOOL) hasNotificationSettings;
- (BOOL) hasAppLaunchOrdinal;
- (BOOL) hasPageOrdinal;
@property (readonly, retain) ExtensionSpecifics* extension;
@property (readonly, retain) AppNotificationSettings* notificationSettings;
@property (readonly, retain) NSString* appLaunchOrdinal;
@property (readonly, retain) NSString* pageOrdinal;

+ (AppSpecifics*) defaultInstance;
- (AppSpecifics*) defaultInstance;

- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (AppSpecifics_Builder*) builder;
+ (AppSpecifics_Builder*) builder;
+ (AppSpecifics_Builder*) builderWithPrototype:(AppSpecifics*) prototype;

+ (AppSpecifics*) parseFromData:(NSData*) data;
+ (AppSpecifics*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (AppSpecifics*) parseFromInputStream:(NSInputStream*) input;
+ (AppSpecifics*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (AppSpecifics*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (AppSpecifics*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

@interface AppSpecifics_Builder : PBGeneratedMessage_Builder {
@private
  AppSpecifics* result;
}

- (AppSpecifics*) defaultInstance;

- (AppSpecifics_Builder*) clear;
- (AppSpecifics_Builder*) clone;

- (AppSpecifics*) build;
- (AppSpecifics*) buildPartial;

- (AppSpecifics_Builder*) mergeFrom:(AppSpecifics*) other;
- (AppSpecifics_Builder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (AppSpecifics_Builder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;

- (BOOL) hasExtension;
- (ExtensionSpecifics*) extension;
- (AppSpecifics_Builder*) setExtension:(ExtensionSpecifics*) value;
- (AppSpecifics_Builder*) setExtensionBuilder:(ExtensionSpecifics_Builder*) builderForValue;
- (AppSpecifics_Builder*) mergeExtension:(ExtensionSpecifics*) value;
- (AppSpecifics_Builder*) clearExtension;

- (BOOL) hasNotificationSettings;
- (AppNotificationSettings*) notificationSettings;
- (AppSpecifics_Builder*) setNotificationSettings:(AppNotificationSettings*) value;
- (AppSpecifics_Builder*) setNotificationSettingsBuilder:(AppNotificationSettings_Builder*) builderForValue;
- (AppSpecifics_Builder*) mergeNotificationSettings:(AppNotificationSettings*) value;
- (AppSpecifics_Builder*) clearNotificationSettings;

- (BOOL) hasAppLaunchOrdinal;
- (NSString*) appLaunchOrdinal;
- (AppSpecifics_Builder*) setAppLaunchOrdinal:(NSString*) value;
- (AppSpecifics_Builder*) clearAppLaunchOrdinal;

- (BOOL) hasPageOrdinal;
- (NSString*) pageOrdinal;
- (AppSpecifics_Builder*) setPageOrdinal:(NSString*) value;
- (AppSpecifics_Builder*) clearPageOrdinal;
@end

