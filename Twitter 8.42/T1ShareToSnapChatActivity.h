//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/T1Activity.h>

@class NSString, T1OrphanedViewSnapshotAssistant, TFNLayoutMetrics, TFNTwitterAccount;

@interface T1ShareToSnapChatActivity : T1Activity
{
    TFNTwitterAccount *_account;
    TFNLayoutMetrics *_layoutMetrics;
    T1OrphanedViewSnapshotAssistant *_statusSnapshotAssistant;
    NSString *_url;
}

- (void).cxx_destruct;
- (id)_t1_pasteboardDictionaryWithStickerData:(id)arg1 imageData:(id)arg2 videoData:(id)arg3 attachmentURL:(id)arg4;
- (void)_t1_updatePasteboardWithStickerData:(id)arg1 imageData:(id)arg2 videoData:(id)arg3 attachmentURL:(id)arg4;
- (void)_t1_shareToSnapURL:(id)arg1 withStickerImage:(id)arg2 imageData:(id)arg3 videoData:(id)arg4 attachmentURL:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (id)_activitySettingsImage;
- (void)performActivity;
- (_Bool)isSupported;
- (id)setupSnapshotAssistant;
- (id)activityTitleForAccount:(id)arg1;
- (void)dealloc;
- (id)initWithActivityModel:(id)arg1 account:(id)arg2 layoutMetrics:(id)arg3;

@end

