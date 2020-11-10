//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

#import <Module_Framework/YTInnerTubeResponseCacheKeyProtocol-Protocol.h>

@class NSString, YTIInnerTubeContext;

@interface YTIGetSettingCategoriesRequest : GPBMessage <YTInnerTubeResponseCacheKeyProtocol>
{
}

+ (id)descriptor;
- (id)innerTubeResponseCacheKeyWithService:(long long)arg1 coldConfig:(id)arg2;

// Remaining properties
@property(retain, nonatomic) YTIInnerTubeContext *context; // @dynamic context;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) _Bool hasContext; // @dynamic hasContext;
@property(nonatomic) _Bool hasSettingsToken; // @dynamic hasSettingsToken;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSString *settingsToken; // @dynamic settingsToken;
@property(readonly) Class superclass;

@end

