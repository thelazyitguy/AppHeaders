//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@interface YTIOfflineSuspendedState : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) long long backgroundTransitionCount; // @dynamic backgroundTransitionCount;
@property(nonatomic) int downloadErrorCount; // @dynamic downloadErrorCount;
@property(nonatomic) _Bool hasBackgroundTransitionCount; // @dynamic hasBackgroundTransitionCount;
@property(nonatomic) _Bool hasDownloadErrorCount; // @dynamic hasDownloadErrorCount;
@property(nonatomic) _Bool hasTotalDownloadedBytes; // @dynamic hasTotalDownloadedBytes;
@property(nonatomic) _Bool hasTotalDownloadedSizePercent; // @dynamic hasTotalDownloadedSizePercent;
@property(nonatomic) _Bool hasTotalDurationMs; // @dynamic hasTotalDurationMs;
@property(nonatomic) _Bool hasTotalSegmentCount; // @dynamic hasTotalSegmentCount;
@property(nonatomic) long long totalDownloadedBytes; // @dynamic totalDownloadedBytes;
@property(nonatomic) unsigned int totalDownloadedSizePercent; // @dynamic totalDownloadedSizePercent;
@property(nonatomic) long long totalDurationMs; // @dynamic totalDurationMs;
@property(nonatomic) long long totalSegmentCount; // @dynamic totalSegmentCount;

@end

