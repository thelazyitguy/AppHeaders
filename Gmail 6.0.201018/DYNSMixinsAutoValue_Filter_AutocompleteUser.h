//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DYNSMixinsFilter_AutocompleteUser.h"

@class DYNSMixinsFilter_AutocompleteUser_Type, DYNSModelsCommonPresenceState, JavaUtilOptional, NSString;

@interface DYNSMixinsAutoValue_Filter_AutocompleteUser : DYNSMixinsFilter_AutocompleteUser
{
    DYNSMixinsFilter_AutocompleteUser_Type *type_;
    NSString *id__;
    NSString *name_;
    NSString *email_;
    NSString *photoUrl_;
    DYNSModelsCommonPresenceState *presence_;
    JavaUtilOptional *membershipCount_;
    JavaUtilOptional *botInfo_;
    JavaUtilOptional *organizationInfo_;
}

- (void)dealloc;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)getOrganizationInfo;
- (id)getBotInfo;
- (id)getMembershipCount;
- (id)getPresence;
- (id)getPhotoUrl;
- (id)getEmail;
- (id)getName;
- (id)getId;
- (id)getType;

@end
