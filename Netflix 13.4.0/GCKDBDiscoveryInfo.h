//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class NSDate;

__attribute__((visibility("hidden")))
@interface GCKDBDiscoveryInfo : NSManagedObject
{
}

- (_Bool)isOnlineAtTime:(id)arg1;

// Remaining properties
@property(nonatomic) int discoveryStatus; // @dynamic discoveryStatus;
@property(nonatomic) double discoveryTTL; // @dynamic discoveryTTL;
@property(copy, nonatomic) NSDate *lastDiscoveredTime; // @dynamic lastDiscoveredTime;

@end
