//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ComGoogleCommonCollectMapDifference-Protocol.h"

@class NSString;
@protocol JavaUtilMap;

@interface ComGoogleCommonCollectMaps_MapDifferenceImpl : NSObject <ComGoogleCommonCollectMapDifference>
{
    id <JavaUtilMap> onlyOnLeft_;
    id <JavaUtilMap> onlyOnRight_;
    id <JavaUtilMap> onBoth_;
    id <JavaUtilMap> differences_;
}

- (void)dealloc;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)entriesDiffering;
- (id)entriesInCommon;
- (id)entriesOnlyOnRight;
- (id)entriesOnlyOnLeft;
- (_Bool)areEqual;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
