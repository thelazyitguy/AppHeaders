//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface PXChallengeActivity : NSObject
{
}

+ (long long)getIntFromNSData:(id)arg1;
+ (long long)appNameAsInt;
+ (long long)deviceModelAsInt;
+ (long long)eval:(long long)arg1 operand2:(long long)arg2 operator:(long long)arg3 modulus:(long long)arg4;
+ (id)handleChallenge:(long long)arg1 operand2:(long long)arg2 operand3:(long long)arg3 operator1:(long long)arg4 operator2:(long long)arg5 modulus:(long long)arg6;
+ (id)handleChallenge:(id)arg1;
+ (id)reverseString:(id)arg1;
+ (id)filteredAppInitData;
+ (id)prepareActivityData:(id)arg1;

@end
