//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GPCPromise, NSArray, PILLookupId;
@protocol PILAvailabilityData;

@protocol PILAvailabilityService <NSObject>
- (GPCPromise *)availabilitiesForLookupIDs:(NSArray *)arg1 clientType:(int)arg2;
- (id <PILAvailabilityData>)cachedAvailabilityForLookupID:(PILLookupId *)arg1 clientType:(int)arg2;
- (GPCPromise *)availabilityForLookupID:(PILLookupId *)arg1 clientType:(int)arg2;
@end
