//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSData, NSString;

@interface YTIPlayerSeekContinuationData : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSData *clickTrackingParams; // @dynamic clickTrackingParams;
@property(copy, nonatomic) NSString *continuation; // @dynamic continuation;
@property(nonatomic) _Bool hasClickTrackingParams; // @dynamic hasClickTrackingParams;
@property(nonatomic) _Bool hasContinuation; // @dynamic hasContinuation;

@end

