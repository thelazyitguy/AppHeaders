//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface GADGCacheContext : NSObject
{
    NSString *_GWSQueryID;
    long long _periodicReportIntervalMs;
}

@property(nonatomic) long long periodicReportIntervalMs; // @synthesize periodicReportIntervalMs=_periodicReportIntervalMs;
@property(retain, nonatomic) NSString *GWSQueryID; // @synthesize GWSQueryID=_GWSQueryID;
- (void).cxx_destruct;

@end
