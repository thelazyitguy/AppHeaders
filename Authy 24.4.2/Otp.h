//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface Otp : NSObject
{
}

+ (id)getMovingFactor;
+ (id)generateOtp:(id)arg1 digits:(int)arg2;
+ (id)getConsecutiveOtps:(id)arg1 digits:(int)arg2;
+ (id)hotp:(id)arg1 withKey:(id)arg2 digits:(int)arg3;
+ (id)NSDataToHexString:(id)arg1;

@end
