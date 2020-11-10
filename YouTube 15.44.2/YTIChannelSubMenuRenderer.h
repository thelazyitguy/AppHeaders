//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSMutableArray, YTIButtonSupportedRenderers, YTIChannelBackButtonSupportedRenderers, YTIChannelSubMenuPlayAllButtonSupportedRenderers, YTIChannelSubMenuSortSupportedRenderers, YTIContentViewPrivacySupportedRenderers;

@interface YTIChannelSubMenuRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIChannelBackButtonSupportedRenderers *backButtonRenderer; // @dynamic backButtonRenderer;
@property(retain, nonatomic) NSMutableArray *contentTypeSubMenuItemsArray; // @dynamic contentTypeSubMenuItemsArray;
@property(readonly, nonatomic) unsigned long long contentTypeSubMenuItemsArray_Count; // @dynamic contentTypeSubMenuItemsArray_Count;
@property(retain, nonatomic) YTIButtonSupportedRenderers *createPlaylistButton; // @dynamic createPlaylistButton;
@property(retain, nonatomic) NSMutableArray *flowSubMenuItemsArray; // @dynamic flowSubMenuItemsArray;
@property(readonly, nonatomic) unsigned long long flowSubMenuItemsArray_Count; // @dynamic flowSubMenuItemsArray_Count;
@property(nonatomic) _Bool hasBackButtonRenderer; // @dynamic hasBackButtonRenderer;
@property(nonatomic) _Bool hasCreatePlaylistButton; // @dynamic hasCreatePlaylistButton;
@property(nonatomic) _Bool hasManageVideosButton; // @dynamic hasManageVideosButton;
@property(nonatomic) _Bool hasPlayAllButton; // @dynamic hasPlayAllButton;
@property(nonatomic) _Bool hasPrivacySetting; // @dynamic hasPrivacySetting;
@property(nonatomic) _Bool hasSortSetting; // @dynamic hasSortSetting;
@property(retain, nonatomic) YTIButtonSupportedRenderers *manageVideosButton; // @dynamic manageVideosButton;
@property(retain, nonatomic) YTIChannelSubMenuPlayAllButtonSupportedRenderers *playAllButton; // @dynamic playAllButton;
@property(retain, nonatomic) YTIContentViewPrivacySupportedRenderers *privacySetting; // @dynamic privacySetting;
@property(retain, nonatomic) NSMutableArray *rightButtonsArray; // @dynamic rightButtonsArray;
@property(readonly, nonatomic) unsigned long long rightButtonsArray_Count; // @dynamic rightButtonsArray_Count;
@property(retain, nonatomic) NSMutableArray *sortFilterSubMenuItemsArray; // @dynamic sortFilterSubMenuItemsArray;
@property(readonly, nonatomic) unsigned long long sortFilterSubMenuItemsArray_Count; // @dynamic sortFilterSubMenuItemsArray_Count;
@property(retain, nonatomic) YTIChannelSubMenuSortSupportedRenderers *sortSetting; // @dynamic sortSetting;

@end

