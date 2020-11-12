//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ASSFeatureInfo;

@interface ASSSecureStorageConfiguration : NSObject
{
    ASSFeatureInfo *_featureInfo;
    unsigned long long _accessControlOption;
    unsigned long long _authenticationOption;
}

+ (id)makeWithBuilder:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) unsigned long long authenticationOption; // @synthesize authenticationOption=_authenticationOption;
@property(readonly, nonatomic) unsigned long long accessControlOption; // @synthesize accessControlOption=_accessControlOption;
@property(readonly, nonatomic) ASSFeatureInfo *featureInfo; // @synthesize featureInfo=_featureInfo;
- (void).cxx_destruct;
- (id)initWithBuilder:(id)arg1;

@end
