//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ComGoogleProtobufMessageOrBuilder-Protocol.h"

@class JAPPS_ADDONSHostApp, JAPPS_ADDONSHostAppClientInfo_ClientCapabilities, JAPPS_ADDONSHostAppClientInfo_Platform, JAPPS_ADDONSHostAppClientInfo_UserTimeZoneCase, NSString;

@protocol JAPPS_ADDONSHostAppClientInfoOrBuilder <ComGoogleProtobufMessageOrBuilder>
- (JAPPS_ADDONSHostAppClientInfo_UserTimeZoneCase *)getUserTimeZoneCase;
- (int)getUserSessionIndex;
- (_Bool)hasUserSessionIndex;
- (NSString *)getTimeZoneDetectorId;
- (_Bool)hasTimeZoneDetectorId;
- (NSString *)getTimeZoneId;
- (_Bool)hasTimeZoneId;
- (JAPPS_ADDONSHostAppClientInfo_ClientCapabilities *)getClientCapabilities;
- (_Bool)hasClientCapabilities;
- (int)getMajorVersion;
- (_Bool)hasMajorVersion;
- (int)getClientVersion;
- (_Bool)hasClientVersion;
- (NSString *)getBuildLabel;
- (_Bool)hasBuildLabel;
- (int)getBuildChangelist;
- (_Bool)hasBuildChangelist;
- (JAPPS_ADDONSHostAppClientInfo_Platform *)getPlatform;
- (_Bool)hasPlatform;
- (JAPPS_ADDONSHostApp *)getHostApp;
- (_Bool)hasHostApp;
@end

