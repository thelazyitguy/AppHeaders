//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSString;

@interface YTIVideoReportDetails : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasMinutes; // @dynamic hasMinutes;
@property(nonatomic) _Bool hasSeconds; // @dynamic hasSeconds;
@property(nonatomic) _Bool hasVssId; // @dynamic hasVssId;
@property(nonatomic) unsigned int minutes; // @dynamic minutes;
@property(nonatomic) unsigned int seconds; // @dynamic seconds;
@property(copy, nonatomic) NSString *vssId; // @dynamic vssId;

@end
