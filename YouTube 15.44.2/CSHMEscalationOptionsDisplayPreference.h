//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class GPBEnumArray, NSString;

@interface CSHMEscalationOptionsDisplayPreference : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasJustificationMessage; // @dynamic hasJustificationMessage;
@property(copy, nonatomic) NSString *justificationMessage; // @dynamic justificationMessage;
@property(retain, nonatomic) GPBEnumArray *orderingArray; // @dynamic orderingArray;
@property(readonly, nonatomic) unsigned long long orderingArray_Count; // @dynamic orderingArray_Count;

@end

