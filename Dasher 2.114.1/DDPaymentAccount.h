//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DDDataObject.h"

@class DDStripeExternalAccount, NSArray, NSString;

@interface DDPaymentAccount : DDDataObject
{
    NSString *_firstName;
    NSString *_lastName;
    NSString *_stripeAccountIdentifier;
    NSString *_stripeAccountType;
    NSString *_verificationStatus;
    NSString *_verificationDetails;
    NSArray *_fieldsNeeded;
    DDStripeExternalAccount *_externalAccount;
}

+ (id)updatePaymentAccountWithIdentifier:(id)arg1 params:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
+ (id)upgradePaymentAccountToManaged:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
+ (id)createBankAccountForPaymentAccount:(id)arg1 params:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
+ (id)createPaymentAccountForDasher:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
+ (id)getPaymentAccountWithIdentifier:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
+ (id)defaultGETResourceBasedParams;
+ (id)extraFields;
+ (id)defaultAPIVersion;
- (void).cxx_destruct;
@property(retain, nonatomic) DDStripeExternalAccount *externalAccount; // @synthesize externalAccount=_externalAccount;
@property(retain, nonatomic) NSArray *fieldsNeeded; // @synthesize fieldsNeeded=_fieldsNeeded;
@property(retain, nonatomic) NSString *verificationDetails; // @synthesize verificationDetails=_verificationDetails;
@property(retain, nonatomic) NSString *verificationStatus; // @synthesize verificationStatus=_verificationStatus;
@property(retain, nonatomic) NSString *stripeAccountType; // @synthesize stripeAccountType=_stripeAccountType;
@property(nonatomic) NSString *stripeAccountIdentifier; // @synthesize stripeAccountIdentifier=_stripeAccountIdentifier;
@property(nonatomic) NSString *lastName; // @synthesize lastName=_lastName;
@property(nonatomic) NSString *firstName; // @synthesize firstName=_firstName;
- (void)setValue:(id)arg1 forKey:(id)arg2;

@end

