//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class YTIRenderer;

@interface YTIMusicDisplayConfig : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIRenderer *albumPageTemplateRenderer; // @dynamic albumPageTemplateRenderer;
@property(retain, nonatomic) YTIRenderer *collectionBrowsePageTemplateRenderer; // @dynamic collectionBrowsePageTemplateRenderer;
@property(nonatomic) _Bool hasAlbumPageTemplateRenderer; // @dynamic hasAlbumPageTemplateRenderer;
@property(nonatomic) _Bool hasCollectionBrowsePageTemplateRenderer; // @dynamic hasCollectionBrowsePageTemplateRenderer;
@property(nonatomic) _Bool hasHomePageRenderer; // @dynamic hasHomePageRenderer;
@property(nonatomic) _Bool hasHotkeyDialogRenderer; // @dynamic hasHotkeyDialogRenderer;
@property(nonatomic) _Bool hasPersistentPromo; // @dynamic hasPersistentPromo;
@property(nonatomic) _Bool hasRemixAlbumDetailPageTemplateRenderer; // @dynamic hasRemixAlbumDetailPageTemplateRenderer;
@property(nonatomic) _Bool hasTrackContextMenu; // @dynamic hasTrackContextMenu;
@property(nonatomic) _Bool hasVideoContextMenu; // @dynamic hasVideoContextMenu;
@property(retain, nonatomic) YTIRenderer *homePageRenderer; // @dynamic homePageRenderer;
@property(retain, nonatomic) YTIRenderer *hotkeyDialogRenderer; // @dynamic hotkeyDialogRenderer;
@property(retain, nonatomic) YTIRenderer *persistentPromo; // @dynamic persistentPromo;
@property(retain, nonatomic) YTIRenderer *remixAlbumDetailPageTemplateRenderer; // @dynamic remixAlbumDetailPageTemplateRenderer;
@property(retain, nonatomic) YTIRenderer *trackContextMenu; // @dynamic trackContextMenu;
@property(retain, nonatomic) YTIRenderer *videoContextMenu; // @dynamic videoContextMenu;

@end

