//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol ComGoogleAppsDynamiteV1SharedUtilAccountuserAccountUser;

@interface ComGoogleAppsDynamiteV1SharedUtilRelationshipExternalUserDecider : NSObject
{
    id <ComGoogleAppsDynamiteV1SharedUtilAccountuserAccountUser> accountUser_;
}

+ (void)initialize;
- (void)dealloc;
- (id)isAccountUserGuestInGroupWithDYNSCommonGroupType:(id)arg1 withDYNSCommonGroupGuestAccessSettings:(id)arg2 withJavaUtilOptional:(id)arg3;
- (id)isExternalRelativeToAccountUserWithJavaUtilOptional:(id)arg1 withDYNSCommonUserType:(id)arg2 withBoolean:(_Bool)arg3;

@end

