//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWSModel.h"

@class NSString;

@interface ASMIsDeviceSupportedInput : AWSModel
{
    NSString *_appType;
    NSString *_appVersion;
    NSString *_osVersion;
}

@property(readonly, nonatomic) NSString *osVersion; // @synthesize osVersion=_osVersion;
@property(readonly, nonatomic) NSString *appVersion; // @synthesize appVersion=_appVersion;
@property(readonly, nonatomic) NSString *appType; // @synthesize appType=_appType;
- (void).cxx_destruct;
- (id)initWithAppType:(id)arg1 withAppVersion:(id)arg2 withOsVersion:(id)arg3;

@end

