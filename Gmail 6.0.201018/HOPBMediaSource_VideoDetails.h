//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppAndExtensionsFramework/GPBMessage.h>

@class HOPBVideoResolution, NSMutableArray;

@interface HOPBMediaSource_VideoDetails : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int captureType; // @dynamic captureType;
@property(retain, nonatomic) HOPBVideoResolution *capturedResolution; // @dynamic capturedResolution;
@property(nonatomic) _Bool hasCaptureType; // @dynamic hasCaptureType;
@property(nonatomic) _Bool hasCapturedResolution; // @dynamic hasCapturedResolution;
@property(retain, nonatomic) NSMutableArray *interestRegionArray; // @dynamic interestRegionArray;
@property(readonly, nonatomic) unsigned long long interestRegionArray_Count; // @dynamic interestRegionArray_Count;

@end

