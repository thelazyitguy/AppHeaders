//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NFCW444/GPBMessage.h>

@class GPBInt32Array, NSMutableArray;

__attribute__((visibility("hidden")))
@interface GCKSFSenderConfig : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GPBInt32Array *enabledIdArray; // @dynamic enabledIdArray;
@property(readonly, nonatomic) unsigned long long enabledIdArray_Count; // @dynamic enabledIdArray_Count;
@property(retain, nonatomic) NSMutableArray *flagArray; // @dynamic flagArray;
@property(readonly, nonatomic) unsigned long long flagArray_Count; // @dynamic flagArray_Count;

@end

