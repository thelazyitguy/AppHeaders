//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class OrchField, OrchSubForm;

@interface OrchSimpleForm_FormField : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) OrchField *field; // @dynamic field;
@property(readonly, nonatomic) int formfieldOneOfCase; // @dynamic formfieldOneOfCase;
@property(retain, nonatomic) OrchSubForm *subForm; // @dynamic subForm;

@end

