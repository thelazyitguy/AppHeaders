//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSMutableArray;

@interface ORCH2NodeProperties : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *conditionalPropertiesArray; // @dynamic conditionalPropertiesArray;
@property(readonly, nonatomic) unsigned long long conditionalPropertiesArray_Count; // @dynamic conditionalPropertiesArray_Count;
@property(nonatomic) _Bool hasPropertyClassId; // @dynamic hasPropertyClassId;
@property(nonatomic) int propertyClassId; // @dynamic propertyClassId;

@end

