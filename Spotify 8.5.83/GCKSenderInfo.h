//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class GCKBSystemInfo, NSString;

@interface GCKSenderInfo : NSObject <NSCopying>
{
    GCKBSystemInfo *_systemInfo;
    NSString *_sdkVersion;
    long long _sdkPlatform;
    NSString *_userAgentString;
}

@property(copy, nonatomic) NSString *userAgentString; // @synthesize userAgentString=_userAgentString;
@property(nonatomic) long long sdkPlatform; // @synthesize sdkPlatform=_sdkPlatform;
@property(copy, nonatomic) NSString *sdkVersion; // @synthesize sdkVersion=_sdkVersion;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSString *countryCode;
@property(readonly, copy, nonatomic) NSString *hardwareModel;
@property(readonly, copy, nonatomic) NSString *deviceModel;
@property(readonly, copy, nonatomic) NSString *systemVersion;
@property(readonly, copy, nonatomic) NSString *systemName;
- (id)init;

@end

