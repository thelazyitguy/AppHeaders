//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSArray.h>

@interface NSArray (MPMessagePack)
+ (id)devicesArrayFromDevices:(id)arg1 activeRemoteDevice:(id)arg2 localDevice:(id)arg3 localDeviceName:(id)arg4 wirelessRouteActive:(_Bool)arg5 wirelessRouteType:(long long)arg6 wirelessRouteName:(id)arg7;
+ (id)spt_recentlyPlayedItemArrayFromEntityList:(id)arg1;
- (id)mp_messagePack:(long long)arg1 error:(id *)arg2;
- (id)mp_messagePack:(long long)arg1;
- (id)mp_messagePack;
- (id)BMW_etchObject;
- (id)ins_flattenMap:(CDUnknownBlockType)arg1;
- (id)ins_arraysPartitionedWithCapacity:(unsigned long long)arg1;
- (id)ins_reduce:(id)arg1 block:(CDUnknownBlockType)arg2;
- (id)bm_groupBy:(CDUnknownBlockType)arg1;
- (void)bm_each:(CDUnknownBlockType)arg1;
- (id)bm_any:(CDUnknownBlockType)arg1;
- (id)bm_filter:(CDUnknownBlockType)arg1;
- (id)bm_compactMap:(CDUnknownBlockType)arg1;
- (id)bm_map:(CDUnknownBlockType)arg1;
- (id)glue_firstWhere:(CDUnknownBlockType)arg1;
- (id)safeObjectAtIndex:(unsigned long long)arg1;
- (void)spt_queue_diffToArray:(id)arg1 usingComparator:(CDUnknownBlockType)arg2 insertedIndexSet:(id *)arg3 deletedIndexSet:(id *)arg4;
- (void)spt_queue_diffToArray:(id)arg1 insertedIndexSet:(id *)arg2 deletedIndexSet:(id *)arg3;
- (void)sptSearchUI_enumeratePairs:(CDUnknownBlockType)arg1;
- (id)spt_groupBy:(CDUnknownBlockType)arg1;
- (void)spt_each:(CDUnknownBlockType)arg1;
- (id)spt_any:(CDUnknownBlockType)arg1;
- (id)spt_filter:(CDUnknownBlockType)arg1;
- (id)spt_compactMap:(CDUnknownBlockType)arg1;
- (id)spt_map:(CDUnknownBlockType)arg1;
@end

