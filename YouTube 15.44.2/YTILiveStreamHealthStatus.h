//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSMutableArray;

@interface YTILiveStreamHealthStatus : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *configurationIssuesArray; // @dynamic configurationIssuesArray;
@property(readonly, nonatomic) unsigned long long configurationIssuesArray_Count; // @dynamic configurationIssuesArray_Count;
@property(nonatomic) _Bool hasLastUpdateTimeSeconds; // @dynamic hasLastUpdateTimeSeconds;
@property(nonatomic) _Bool hasStatus; // @dynamic hasStatus;
@property(nonatomic) unsigned long long lastUpdateTimeSeconds; // @dynamic lastUpdateTimeSeconds;
@property(nonatomic) int status; // @dynamic status;

@end
