//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppAndExtensionsFramework/GPBMessage.h>

@class GHMMeetingSpace_StreamingSessionInfo_SessionEvent, GHMMeetingSpace_StreamingSessionInfo_StreamViewerStats, NSString;

@interface GHMMeetingSpace_StreamingSessionInfo : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int applicationType; // @dynamic applicationType;
@property(nonatomic) _Bool hasLatestSessionEvent; // @dynamic hasLatestSessionEvent;
@property(nonatomic) _Bool hasViewerStats; // @dynamic hasViewerStats;
@property(retain, nonatomic) GHMMeetingSpace_StreamingSessionInfo_SessionEvent *latestSessionEvent; // @dynamic latestSessionEvent;
@property(copy, nonatomic) NSString *ownerDisplayName; // @dynamic ownerDisplayName;
@property(copy, nonatomic) NSString *sessionId; // @dynamic sessionId;
@property(nonatomic) int status; // @dynamic status;
@property(nonatomic) _Bool trainingEnabled; // @dynamic trainingEnabled;
@property(nonatomic) int viewerAccessPolicy; // @dynamic viewerAccessPolicy;
@property(retain, nonatomic) GHMMeetingSpace_StreamingSessionInfo_StreamViewerStats *viewerStats; // @dynamic viewerStats;

@end

