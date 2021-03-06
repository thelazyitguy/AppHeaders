//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DYNSDataModelsUser_Builder.h"

@class DYNSCommonUserContextId, DYNSCommonUserType, DYNSDataModelsUserVisibility, DYNSModelsCommonPresenceState, DYNSModelsCommonUserAccountState, JavaLangBoolean, JavaLangLong, JavaUtilOptional, NSString;

@interface DYNSDataModelsAutoValue_User_Builder : DYNSDataModelsUser_Builder
{
    DYNSCommonUserContextId *userContextId_;
    DYNSCommonUserType *type_;
    JavaUtilOptional *name_;
    JavaUtilOptional *firstName_;
    JavaUtilOptional *email_;
    NSString *avatarUrl_;
    DYNSModelsCommonPresenceState *presence_;
    JavaUtilOptional *botInfo_;
    JavaLangLong *lastUpdatedTimeMicros_;
    JavaUtilOptional *organizationInfo_;
    JavaUtilOptional *phoneNumbers_;
    JavaUtilOptional *isExternalRelativeToAccountUser_;
    JavaLangBoolean *isAnonymous_;
    DYNSModelsCommonUserAccountState *userAccountState_;
    DYNSDataModelsUserVisibility *userVisibility_;
}

- (void)dealloc;
- (id)build;
- (id)setUserVisibilityWithDYNSDataModelsUserVisibility:(id)arg1;
- (id)setUserAccountStateWithDYNSModelsCommonUserAccountState:(id)arg1;
- (id)setIsAnonymousWithBoolean:(_Bool)arg1;
- (id)setIsExternalRelativeToAccountUserWithBoolean:(_Bool)arg1;
- (id)setPhoneNumbersWithComGoogleCommonCollectImmutableList:(id)arg1;
- (id)setOrganizationInfoWithJavaUtilOptional:(id)arg1;
- (id)setLastUpdatedTimeMicrosWithLong:(long long)arg1;
- (id)setBotInfoWithDYNSCommonBotInfo:(id)arg1;
- (id)setPresenceWithDYNSModelsCommonPresenceState:(id)arg1;
- (id)setAvatarUrlWithNSString:(id)arg1;
- (id)setEmailWithNSString:(id)arg1;
- (id)setFirstNameWithNSString:(id)arg1;
- (id)setNameWithNSString:(id)arg1;
- (id)setTypeWithDYNSCommonUserType:(id)arg1;
- (id)setUserContextIdWithDYNSCommonUserContextId:(id)arg1;

@end

