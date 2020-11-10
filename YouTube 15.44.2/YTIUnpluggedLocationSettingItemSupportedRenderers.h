//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class YTISettingActionRenderer, YTISettingReadOnlyItemRenderer, YTIUnpluggedCurrentLocationSettingItemRenderer, YTIUnpluggedDisclaimerSettingRenderer, YTIUnpluggedLocationRenderer, YTIUnpluggedLocationResolutionRenderer;

@interface YTIUnpluggedLocationSettingItemSupportedRenderers : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(readonly, nonatomic) int rendererOneOfCase; // @dynamic rendererOneOfCase;
@property(retain, nonatomic) YTISettingActionRenderer *settingActionRenderer; // @dynamic settingActionRenderer;
@property(retain, nonatomic) YTISettingReadOnlyItemRenderer *settingReadOnlyItemRenderer; // @dynamic settingReadOnlyItemRenderer;
@property(retain, nonatomic) YTIUnpluggedCurrentLocationSettingItemRenderer *unpluggedCurrentLocationSettingItemRenderer; // @dynamic unpluggedCurrentLocationSettingItemRenderer;
@property(retain, nonatomic) YTIUnpluggedDisclaimerSettingRenderer *unpluggedDisclaimerSettingRenderer; // @dynamic unpluggedDisclaimerSettingRenderer;
@property(retain, nonatomic) YTIUnpluggedLocationRenderer *unpluggedLocationRenderer; // @dynamic unpluggedLocationRenderer;
@property(retain, nonatomic) YTIUnpluggedLocationResolutionRenderer *unpluggedLocationResolutionRenderer; // @dynamic unpluggedLocationResolutionRenderer;

@end
