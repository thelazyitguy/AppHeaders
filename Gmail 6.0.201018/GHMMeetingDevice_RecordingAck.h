//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppAndExtensionsFramework/GPBMessage.h>

@class NSString;

@interface GHMMeetingDevice_RecordingAck : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int ackStatus; // @dynamic ackStatus;
@property(nonatomic) int applicationType; // @dynamic applicationType;
@property(copy, nonatomic) NSString *recordingId; // @dynamic recordingId;
@property(nonatomic) _Bool trainingEnabled; // @dynamic trainingEnabled;
@property(nonatomic) int viewerAccessPolicy; // @dynamic viewerAccessPolicy;

@end
