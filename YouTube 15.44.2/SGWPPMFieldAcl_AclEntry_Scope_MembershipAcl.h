//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class SGWPPMFieldAcl_AclEntry_Scope_MembershipAcl_CircleAcl, SGWPPMFieldAcl_AclEntry_Scope_MembershipAcl_ContactGroupAcl;

@interface SGWPPMFieldAcl_AclEntry_Scope_MembershipAcl : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) SGWPPMFieldAcl_AclEntry_Scope_MembershipAcl_CircleAcl *circle; // @dynamic circle;
@property(retain, nonatomic) SGWPPMFieldAcl_AclEntry_Scope_MembershipAcl_ContactGroupAcl *contactGroup; // @dynamic contactGroup;
@property(nonatomic) _Bool hasCircle; // @dynamic hasCircle;
@property(nonatomic) _Bool hasContactGroup; // @dynamic hasContactGroup;

@end

