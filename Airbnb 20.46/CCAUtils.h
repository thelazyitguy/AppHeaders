//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface CCAUtils : NSObject
{
}

+ (id)getSDKBuildVersion;
+ (id)getSDKBuildNumber;
+ (_Bool)hasMaxLengthForField:(id)arg1 ofLength:(int)arg2;
+ (_Bool)hasValidLengthForField:(id)arg1 ofLength:(int)arg2 isRequired:(_Bool)arg3;
+ (void)loadImageFrom:(id)arg1 into:(id)arg2;
+ (id)getUrlUnsafeDataFrom:(id)arg1;
+ (id)getUrlUnsafeStringFrom:(id)arg1;
+ (id)sha256DataFromData:(id)arg1;
+ (id)reverseData:(id)arg1;
+ (id)getUnpaddedBase64URLEncodedFromData:(id)arg1;

@end
