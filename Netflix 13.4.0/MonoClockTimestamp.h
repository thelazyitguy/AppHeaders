//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MonoClockTimestamp : NSObject
{
    unsigned long long _timestamp;
}

+ (unsigned long long)monoTimeInMS;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (unsigned long long)elapsedTimeSince:(id)arg1;
- (unsigned long long)elapsedTimeInMS;
- (id)init;

@end
