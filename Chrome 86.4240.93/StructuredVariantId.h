//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ChromeInternal/GPBMessage.h>

@class NSMutableArray, NSString;

@interface StructuredVariantId : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) unsigned long long fp; // @dynamic fp;
@property(nonatomic) _Bool hasFp; // @dynamic hasFp;
@property(nonatomic) _Bool hasIdx; // @dynamic hasIdx;
@property(nonatomic) _Bool hasIsTruncated; // @dynamic hasIsTruncated;
@property(nonatomic) _Bool hasKey; // @dynamic hasKey;
@property(nonatomic) _Bool hasMessageSet; // @dynamic hasMessageSet;
@property(nonatomic) int idx; // @dynamic idx;
@property(nonatomic) _Bool isTruncated; // @dynamic isTruncated;
@property(copy, nonatomic) NSString *key; // @dynamic key;
@property(copy, nonatomic) NSString *messageSet; // @dynamic messageSet;
@property(retain, nonatomic) NSMutableArray *subArray; // @dynamic subArray;
@property(readonly, nonatomic) unsigned long long subArray_Count; // @dynamic subArray_Count;

@end
