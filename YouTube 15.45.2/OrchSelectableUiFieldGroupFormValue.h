//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSMutableArray, NSString, OrchUiFieldValue;

@interface OrchSelectableUiFieldGroupFormValue : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *fieldValueArray; // @dynamic fieldValueArray;
@property(readonly, nonatomic) unsigned long long fieldValueArray_Count; // @dynamic fieldValueArray_Count;
@property(nonatomic) _Bool hasId_p; // @dynamic hasId_p;
@property(nonatomic) _Bool hasSelectedOptionIndex; // @dynamic hasSelectedOptionIndex;
@property(nonatomic) _Bool hasUiFieldValue; // @dynamic hasUiFieldValue;
@property(copy, nonatomic) NSString *id_p; // @dynamic id_p;
@property(nonatomic) int selectedOptionIndex; // @dynamic selectedOptionIndex;
@property(retain, nonatomic) OrchUiFieldValue *uiFieldValue; // @dynamic uiFieldValue;

@end
