//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSMutableArray, NSString;

@interface YTIOfflineVideoStreamsEntity : GPBMessage
{
}

+ (id)descriptor;
+ (Class)entityClass;
- (id)entityWithStore:(id)arg1;

// Remaining properties
@property(nonatomic) _Bool hasKey; // @dynamic hasKey;
@property(copy, nonatomic) NSString *key; // @dynamic key;
@property(retain, nonatomic) NSMutableArray *streamsProgressArray; // @dynamic streamsProgressArray;
@property(readonly, nonatomic) unsigned long long streamsProgressArray_Count; // @dynamic streamsProgressArray_Count;

@end

