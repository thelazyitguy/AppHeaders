//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AIRModel.h"

@class AIRAccount, NSArray;

@interface AIRSocialSignupOperation : AIRModel
{
    AIRAccount *_account;
    NSArray *_readonlyFields;
}

+ (id)idAttributeName;
+ (id)socialSignupOpFromResponse:(id)arg1 error:(id *)arg2;
+ (id)_createSocialSignupOpWithMethod:(long long)arg1 params:(id)arg2 session:(id)arg3 completion:(CDUnknownBlockType)arg4;
+ (id)_createAccountWithMethod:(long long)arg1 socialAuthKey:(id)arg2 email:(id)arg3 phone:(id)arg4 verificationCode:(id)arg5 firstName:(id)arg6 lastName:(id)arg7 birthdate:(id)arg8 isOptedInToPromos:(_Bool)arg9 isInChinaRemoveDOBTreatment:(_Bool)arg10 isInGlobalRemoveDOBTreatment:(_Bool)arg11 extraData:(id)arg12 session:(id)arg13 completion:(CDUnknownBlockType)arg14;
+ (id)createAccountWithMethod:(long long)arg1 telecomVerificationInfo:(id)arg2 code:(id)arg3 password:(id)arg4 firstName:(id)arg5 lastName:(id)arg6 birthdate:(id)arg7 isOptedInToPromos:(_Bool)arg8 isInChinaRemoveDOBTreatment:(_Bool)arg9 isInGlobalRemoveDOBTreatment:(_Bool)arg10 session:(id)arg11 completion:(CDUnknownBlockType)arg12;
+ (id)createAccountWithMethod:(long long)arg1 socialAuthKey:(id)arg2 phone:(id)arg3 verificationCode:(id)arg4 firstName:(id)arg5 lastName:(id)arg6 birthdate:(id)arg7 isOptedInToPromos:(_Bool)arg8 isInChinaRemoveDOBTreatment:(_Bool)arg9 isInGlobalRemoveDOBTreatment:(_Bool)arg10 session:(id)arg11 completion:(CDUnknownBlockType)arg12;
+ (id)createAccountWithMethod:(long long)arg1 socialAuthKey:(id)arg2 email:(id)arg3 firstName:(id)arg4 lastName:(id)arg5 birthdate:(id)arg6 isOptedInToPromos:(_Bool)arg7 isInChinaRemoveDOBTreatment:(_Bool)arg8 isInGlobalRemoveDOBTreatment:(_Bool)arg9 session:(id)arg10 completion:(CDUnknownBlockType)arg11;
+ (id)validateAccountWithMethod:(long long)arg1 socialAuthKey:(id)arg2 session:(id)arg3 completion:(CDUnknownBlockType)arg4;
+ (id)customTransformers;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *readonlyFields; // @synthesize readonlyFields=_readonlyFields;
@property(readonly, copy, nonatomic) AIRAccount *account; // @synthesize account=_account;

@end

