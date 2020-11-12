//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableSet;

@interface GCKMDNSServiceTypeEntry : NSObject
{
    NSMutableArray *_listenerEntries;
    NSMutableSet *_instanceNames;
    NSMutableSet *_subtypesToQuery;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSMutableSet *subtypesToQuery; // @synthesize subtypesToQuery=_subtypesToQuery;
@property(readonly, nonatomic) NSMutableSet *instanceNames; // @synthesize instanceNames=_instanceNames;
@property(readonly, nonatomic) NSMutableArray *listenerEntries; // @synthesize listenerEntries=_listenerEntries;
- (void)recalculateSubtypes;
- (_Bool)removeListener:(id)arg1 options:(id *)arg2;
- (void)addListener:(id)arg1 forSubtypes:(id)arg2 options:(id)arg3;
- (id)init;

@end
