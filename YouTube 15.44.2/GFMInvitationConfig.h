//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class GFMContactPickerOptions, GPBEnumArray, NSMutableArray;

@interface GFMInvitationConfig : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GFMContactPickerOptions *contactPickerOptions; // @dynamic contactPickerOptions;
@property(nonatomic) _Bool hasContactPickerOptions; // @dynamic hasContactPickerOptions;
@property(nonatomic) _Bool hasNumInviteeSelectableInContactPicker; // @dynamic hasNumInviteeSelectableInContactPicker;
@property(retain, nonatomic) GPBEnumArray *inviteeRoleArray; // @dynamic inviteeRoleArray;
@property(readonly, nonatomic) unsigned long long inviteeRoleArray_Count; // @dynamic inviteeRoleArray_Count;
@property(nonatomic) int numInviteeSelectableInContactPicker; // @dynamic numInviteeSelectableInContactPicker;
@property(retain, nonatomic) NSMutableArray *pagesArray; // @dynamic pagesArray;
@property(readonly, nonatomic) unsigned long long pagesArray_Count; // @dynamic pagesArray_Count;
@property(retain, nonatomic) GPBEnumArray *supportedInvitationMethodsArray; // @dynamic supportedInvitationMethodsArray;
@property(readonly, nonatomic) unsigned long long supportedInvitationMethodsArray_Count; // @dynamic supportedInvitationMethodsArray_Count;

@end

