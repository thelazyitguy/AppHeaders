//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSMutableArray;

@interface GPBServiceOptions : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool deprecated; // @dynamic deprecated;
@property(nonatomic) double failureDetectionDelay; // @dynamic failureDetectionDelay;
@property(nonatomic) _Bool hasDeprecated; // @dynamic hasDeprecated;
@property(nonatomic) _Bool hasFailureDetectionDelay; // @dynamic hasFailureDetectionDelay;
@property(nonatomic) _Bool hasMulticastStub; // @dynamic hasMulticastStub;
@property(nonatomic) _Bool multicastStub; // @dynamic multicastStub;
@property(retain, nonatomic) NSMutableArray *uninterpretedOptionArray; // @dynamic uninterpretedOptionArray;
@property(readonly, nonatomic) unsigned long long uninterpretedOptionArray_Count; // @dynamic uninterpretedOptionArray_Count;

@end

