//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSMutableArray, NSString, ORCH2DataAccessibilityAttributes, ORCH2DataValue;

@interface ORCH2Data : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) ORCH2DataAccessibilityAttributes *accessibilityAttributes; // @dynamic accessibilityAttributes;
@property(retain, nonatomic) NSMutableArray *conditionArray; // @dynamic conditionArray;
@property(readonly, nonatomic) unsigned long long conditionArray_Count; // @dynamic conditionArray_Count;
@property(retain, nonatomic) ORCH2DataValue *dataValue; // @dynamic dataValue;
@property(nonatomic) int extensionFieldNumber; // @dynamic extensionFieldNumber;
@property(nonatomic) _Bool hasAccessibilityAttributes; // @dynamic hasAccessibilityAttributes;
@property(nonatomic) _Bool hasDataValue; // @dynamic hasDataValue;
@property(nonatomic) _Bool hasExtensionFieldNumber; // @dynamic hasExtensionFieldNumber;
@property(nonatomic) _Bool hasIsOptional; // @dynamic hasIsOptional;
@property(nonatomic) _Bool hasRequiredErrorText; // @dynamic hasRequiredErrorText;
@property(nonatomic) _Bool hasSkipActiveChildren; // @dynamic hasSkipActiveChildren;
@property(nonatomic) _Bool isOptional; // @dynamic isOptional;
@property(retain, nonatomic) NSMutableArray *loggingConfigurationArray; // @dynamic loggingConfigurationArray;
@property(readonly, nonatomic) unsigned long long loggingConfigurationArray_Count; // @dynamic loggingConfigurationArray_Count;
@property(copy, nonatomic) NSString *requiredErrorText; // @dynamic requiredErrorText;
@property(retain, nonatomic) NSMutableArray *resultingActionArray; // @dynamic resultingActionArray;
@property(readonly, nonatomic) unsigned long long resultingActionArray_Count; // @dynamic resultingActionArray_Count;
@property(nonatomic) _Bool skipActiveChildren; // @dynamic skipActiveChildren;
@property(retain, nonatomic) NSMutableArray *triggerArray; // @dynamic triggerArray;
@property(readonly, nonatomic) unsigned long long triggerArray_Count; // @dynamic triggerArray_Count;

@end

