//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSString;

@interface YTIPersistentStateControllerColdConfig : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool evictForBrokenWeakRef; // @dynamic evictForBrokenWeakRef;
@property(nonatomic) int evictionPolicy; // @dynamic evictionPolicy;
@property(copy, nonatomic) NSString *experimentStreamzTag; // @dynamic experimentStreamzTag;
@property(nonatomic) _Bool hasEvictForBrokenWeakRef; // @dynamic hasEvictForBrokenWeakRef;
@property(nonatomic) _Bool hasEvictionPolicy; // @dynamic hasEvictionPolicy;
@property(nonatomic) _Bool hasExperimentStreamzTag; // @dynamic hasExperimentStreamzTag;
@property(nonatomic) _Bool hasMaxStoredDataEntries; // @dynamic hasMaxStoredDataEntries;
@property(nonatomic) _Bool hasTrackReusedIdentifiersAfterEviction; // @dynamic hasTrackReusedIdentifiersAfterEviction;
@property(nonatomic) _Bool hasUsePersistentStateControllerInsteadOfNano; // @dynamic hasUsePersistentStateControllerInsteadOfNano;
@property(nonatomic) int maxStoredDataEntries; // @dynamic maxStoredDataEntries;
@property(nonatomic) _Bool trackReusedIdentifiersAfterEviction; // @dynamic trackReusedIdentifiersAfterEviction;
@property(nonatomic) _Bool usePersistentStateControllerInsteadOfNano; // @dynamic usePersistentStateControllerInsteadOfNano;

@end

