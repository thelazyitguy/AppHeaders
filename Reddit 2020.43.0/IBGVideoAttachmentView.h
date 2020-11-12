//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <Instabug/IBGAttachmentStateHandlerView-Protocol.h>
#import <Instabug/IBGMessageContentHandler-Protocol.h>
#import <Instabug/IBGVideoPlayerDelegate-Protocol.h>

@class IBGAVAsset, IBGAttachmentStateHandler, IBGChatViewLayoutAttributes, IBGVideoPerviewView, IBGVideoPlayer, NSString;

@interface IBGVideoAttachmentView : UIView <IBGVideoPlayerDelegate, IBGAttachmentStateHandlerView, IBGMessageContentHandler>
{
    IBGChatViewLayoutAttributes *_layoutAttributes;
    IBGAttachmentStateHandler *_stateHandler;
    IBGAVAsset *_recording;
    IBGVideoPlayer *_player;
    NSString *_chatTitle;
    IBGVideoPerviewView *_perviewView;
}

@property(retain, nonatomic) IBGVideoPerviewView *perviewView; // @synthesize perviewView=_perviewView;
@property(retain, nonatomic) NSString *chatTitle; // @synthesize chatTitle=_chatTitle;
@property(retain, nonatomic) IBGVideoPlayer *player; // @synthesize player=_player;
@property(retain, nonatomic) IBGAVAsset *recording; // @synthesize recording=_recording;
@property(retain, nonatomic) IBGAttachmentStateHandler *stateHandler; // @synthesize stateHandler=_stateHandler;
@property(retain, nonatomic) IBGChatViewLayoutAttributes *layoutAttributes; // @synthesize layoutAttributes=_layoutAttributes;
- (void).cxx_destruct;
- (void)didDismiss;
- (void)setAttachmentObject:(id)arg1;
- (void)applyLayoutAttributes:(id)arg1;
- (void)didClickContentInChatWithTitle:(id)arg1;
- (void)applyOutboundTheme;
- (void)applyInboundThemeIsSent:(_Bool)arg1;
- (void)setContent:(id)arg1;
- (void)updateConstraints;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
