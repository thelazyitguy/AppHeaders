//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface YTIdentityAccountUtils : NSObject
{
}

+ (id)datasyncIDFromIdentityID:(id)arg1;
+ (id)effectiveAccountGaiaIdWithIdentityID:(id)arg1;
+ (id)identityFromIdentityID:(id)arg1 SSOAuthorization:(id)arg2;
+ (id)identityIDFromDelegationContext:(id)arg1 ownerID:(id)arg2;
+ (id)identityIDFromGaiaDelegationType:(int)arg1 effectiveObfuscatedGaiaId:(id)arg2 ownerObfuscatedGaiaId:(id)arg3 ssoDelegationType:(unsigned long long)arg4;
+ (id)userIDFromIdentityID:(id)arg1;
+ (id)userIDFromGaiaID:(id)arg1 lateDelegatedID:(id)arg2;

@end

