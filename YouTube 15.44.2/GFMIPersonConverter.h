//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GIMMe;

@interface GFMIPersonConverter : NSObject
{
    GIMMe *_gimme;
}

+ (id)roleByBackendRole;
- (void).cxx_destruct;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (id)profileURLStringForProfile:(id)arg1;
- (long long)invitationStateFromBackendInvitationState:(int)arg1;
- (long long)genderFromBackendGender:(int)arg1;
- (long long)familyRoleFromBackendFamilyRole:(int)arg1;
- (id)personFromFamilyMemberProfile:(id)arg1;
- (long long)backendFamilyRoleFromFamilyRole:(long long)arg1;
- (id)personFromInvitation:(id)arg1;
- (id)personFromFamilyMember:(id)arg1;

@end

