//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class OrchTriggerValueReference_ComponentValue;

@interface OrchTriggerValueReference_ValueChangedOrEqualsTrigger : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasNewOrCurrentValue; // @dynamic hasNewOrCurrentValue;
@property(nonatomic) _Bool hasSkipActionOnInitialization; // @dynamic hasSkipActionOnInitialization;
@property(retain, nonatomic) OrchTriggerValueReference_ComponentValue *newOrCurrentValue; // @dynamic newOrCurrentValue;
@property(nonatomic) _Bool skipActionOnInitialization; // @dynamic skipActionOnInitialization;

@end

