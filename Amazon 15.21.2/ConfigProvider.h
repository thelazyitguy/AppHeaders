//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CanaryConfig;

@interface ConfigProvider : NSObject
{
    _Bool _isConfigFetchSuccessful;
    CanaryConfig *_canaryConfig;
}

@property(readonly, nonatomic) CanaryConfig *canaryConfig; // @synthesize canaryConfig=_canaryConfig;
@property(readonly, nonatomic) _Bool isConfigFetchSuccessful; // @synthesize isConfigFetchSuccessful=_isConfigFetchSuccessful;
- (void).cxx_destruct;
- (id)getCanaryConfig;
- (void)registerWeblabs:(id)arg1;
- (void)fetchCanaryConfig;

@end

