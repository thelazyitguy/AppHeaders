//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSDictionary, NSSet, PDLPersonID;
@protocol PDLPerson;

@protocol PDLLookupPersonCache
- (void)setFoundPersonCacheFreshInterval:(double)arg1;
- (void)updateCacheWithFoundResults:(NSDictionary *)arg1 notFoundIDs:(NSSet *)arg2;
- (id <PDLPerson>)personWithPersonID:(PDLPersonID *)arg1;
- (_Bool)isNotFoundPersonID:(PDLPersonID *)arg1;
@end
