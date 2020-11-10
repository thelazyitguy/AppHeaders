//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSMutableArray, YTIButtonSupportedRenderers, YTIFormattedString, YTIMusicAppNavigationDrawerFooterSupportedRenderers, YTINavigationDrawerPromo, YTIRenderer;

@interface YTIMusicAppMetadataRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasHasPrivatelyOwnedContent; // @dynamic hasHasPrivatelyOwnedContent;
@property(nonatomic) _Bool hasImpressumSettingsPageButton; // @dynamic hasImpressumSettingsPageButton;
@property(nonatomic) _Bool hasIsAudioCastEnabled; // @dynamic hasIsAudioCastEnabled;
@property(nonatomic) _Bool hasIsAudioOnlyButtonVisible; // @dynamic hasIsAudioOnlyButtonVisible;
@property(nonatomic) _Bool hasIsNotificationsPromptEnabled; // @dynamic hasIsNotificationsPromptEnabled;
@property(nonatomic) _Bool hasIsOfflineEntryVisible; // @dynamic hasIsOfflineEntryVisible;
@property(nonatomic) _Bool hasIsOfflineMixtapeV2Enabled; // @dynamic hasIsOfflineMixtapeV2Enabled;
@property(nonatomic) _Bool hasIsRestrictedPlayerLayout; // @dynamic hasIsRestrictedPlayerLayout;
@property(nonatomic) _Bool hasIsSearchButtonHidden; // @dynamic hasIsSearchButtonHidden;
@property(nonatomic) _Bool hasIsStreamOverWifiOnlyAvailable; // @dynamic hasIsStreamOverWifiOnlyAvailable;
@property(nonatomic) _Bool hasNavigationDrawerFooter; // @dynamic hasNavigationDrawerFooter;
@property(nonatomic) _Bool hasNavigationDrawerMoniker; // @dynamic hasNavigationDrawerMoniker;
@property(nonatomic) _Bool hasNavigationDrawerPromo; // @dynamic hasNavigationDrawerPromo;
@property(nonatomic) _Bool hasPrivatelyOwnedContent; // @dynamic hasPrivatelyOwnedContent;
@property(nonatomic) _Bool hasUnlimitedSettingsPageButton; // @dynamic hasUnlimitedSettingsPageButton;
@property(nonatomic) _Bool hasUserChannelPageButton; // @dynamic hasUserChannelPageButton;
@property(retain, nonatomic) NSMutableArray *homeScreenQuickActionsArray; // @dynamic homeScreenQuickActionsArray;
@property(readonly, nonatomic) unsigned long long homeScreenQuickActionsArray_Count; // @dynamic homeScreenQuickActionsArray_Count;
@property(retain, nonatomic) YTIRenderer *impressumSettingsPageButton; // @dynamic impressumSettingsPageButton;
@property(nonatomic) _Bool isAudioCastEnabled; // @dynamic isAudioCastEnabled;
@property(nonatomic) _Bool isAudioOnlyButtonVisible; // @dynamic isAudioOnlyButtonVisible;
@property(nonatomic) _Bool isNotificationsPromptEnabled; // @dynamic isNotificationsPromptEnabled;
@property(nonatomic) _Bool isOfflineEntryVisible; // @dynamic isOfflineEntryVisible;
@property(nonatomic) _Bool isOfflineMixtapeV2Enabled; // @dynamic isOfflineMixtapeV2Enabled;
@property(nonatomic) _Bool isRestrictedPlayerLayout; // @dynamic isRestrictedPlayerLayout;
@property(nonatomic) _Bool isSearchButtonHidden; // @dynamic isSearchButtonHidden;
@property(nonatomic) _Bool isStreamOverWifiOnlyAvailable; // @dynamic isStreamOverWifiOnlyAvailable;
@property(retain, nonatomic) YTIMusicAppNavigationDrawerFooterSupportedRenderers *navigationDrawerFooter; // @dynamic navigationDrawerFooter;
@property(retain, nonatomic) YTIFormattedString *navigationDrawerMoniker; // @dynamic navigationDrawerMoniker;
@property(retain, nonatomic) YTINavigationDrawerPromo *navigationDrawerPromo; // @dynamic navigationDrawerPromo;
@property(retain, nonatomic) NSMutableArray *settingsArray; // @dynamic settingsArray;
@property(readonly, nonatomic) unsigned long long settingsArray_Count; // @dynamic settingsArray_Count;
@property(retain, nonatomic) YTIButtonSupportedRenderers *unlimitedSettingsPageButton; // @dynamic unlimitedSettingsPageButton;
@property(retain, nonatomic) YTIRenderer *userChannelPageButton; // @dynamic userChannelPageButton;

@end

