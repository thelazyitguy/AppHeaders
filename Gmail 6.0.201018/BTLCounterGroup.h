//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppAndExtensionsFramework/GPBMessage.h>

@class GPBInt32Array;

@interface BTLCounterGroup : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int count; // @dynamic count;
@property(nonatomic) _Bool hasCount; // @dynamic hasCount;
@property(nonatomic) _Bool hasKey; // @dynamic hasKey;
@property(nonatomic) int key; // @dynamic key;
@property(retain, nonatomic) GPBInt32Array *tagsArray; // @dynamic tagsArray;
@property(readonly, nonatomic) unsigned long long tagsArray_Count; // @dynamic tagsArray_Count;
@property(retain, nonatomic) GPBInt32Array *valuesArray; // @dynamic valuesArray;
@property(readonly, nonatomic) unsigned long long valuesArray_Count; // @dynamic valuesArray_Count;

@end
