//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppAndExtensionsFramework/GPBMessage.h>

@class NSMutableArray, NSString;

@interface PDLStringToken : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasStartIndex; // @dynamic hasStartIndex;
@property(nonatomic) _Bool hasValue; // @dynamic hasValue;
@property(retain, nonatomic) NSMutableArray *specialCharRangeArray; // @dynamic specialCharRangeArray;
@property(readonly, nonatomic) unsigned long long specialCharRangeArray_Count; // @dynamic specialCharRangeArray_Count;
@property(nonatomic) int startIndex; // @dynamic startIndex;
@property(copy, nonatomic) NSString *value; // @dynamic value;

@end

