//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HuluAPI/MetricsStoredData.h>

@class NSData;

@interface MetricsStoredHit : MetricsStoredData
{
}

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

// Remaining properties
@property(nonatomic, copy) NSData *headers; // @dynamic headers;
@property(nonatomic) int lifetimeSeqId; // @dynamic lifetimeSeqId;
@property(nonatomic, copy) NSData *properties; // @dynamic properties;

@end
