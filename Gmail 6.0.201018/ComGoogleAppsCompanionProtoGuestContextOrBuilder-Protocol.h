//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ComGoogleProtobufMessageOrBuilder-Protocol.h"

@class ComGoogleAppsCompanionProtoDocsHubAppDetails, ComGoogleAppsCompanionProtoGuestAppId, ComGoogleAppsCompanionProtoGuestContext_AppDetailsCase, ComGoogleAppsCompanionProtoHeaderInfo, ComGoogleAppsCompanionProtoTasksAppDetails;

@protocol ComGoogleAppsCompanionProtoGuestContextOrBuilder <ComGoogleProtobufMessageOrBuilder>
- (ComGoogleAppsCompanionProtoGuestContext_AppDetailsCase *)getAppDetailsCase;
- (_Bool)getDeferFramebustingToGuest;
- (_Bool)hasDeferFramebustingToGuest;
- (ComGoogleAppsCompanionProtoDocsHubAppDetails *)getDocsHubAppDetails;
- (_Bool)hasDocsHubAppDetails;
- (ComGoogleAppsCompanionProtoTasksAppDetails *)getTasksAppDetails;
- (_Bool)hasTasksAppDetails;
- (ComGoogleAppsCompanionProtoHeaderInfo *)getHeaderInfo;
- (_Bool)hasHeaderInfo;
- (ComGoogleAppsCompanionProtoGuestAppId *)getGuestId;
- (_Bool)hasGuestId;
@end
