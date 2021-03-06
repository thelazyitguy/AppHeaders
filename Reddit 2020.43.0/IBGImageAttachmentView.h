//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIImageView.h>

#import <Instabug/IBGAttachmentStateHandlerView-Protocol.h>
#import <Instabug/IBGMessageContentHandler-Protocol.h>

@class IBGAttachment, IBGAttachmentErrorView, IBGAttachmentLoadingView, IBGAttachmentStateHandler, IBGChatViewLayoutAttributes;

@interface IBGImageAttachmentView : UIImageView <IBGAttachmentStateHandlerView, IBGMessageContentHandler>
{
    IBGChatViewLayoutAttributes *_layoutAttributes;
    IBGAttachmentStateHandler *_stateHandler;
    IBGAttachmentLoadingView *_loadingView;
    IBGAttachmentErrorView *_errorView;
    CDUnknownBlockType _attachmentFetchHandler;
    IBGAttachment *_imageAttachment;
}

@property(retain, nonatomic) IBGAttachment *imageAttachment; // @synthesize imageAttachment=_imageAttachment;
@property(copy, nonatomic) CDUnknownBlockType attachmentFetchHandler; // @synthesize attachmentFetchHandler=_attachmentFetchHandler;
@property(retain, nonatomic) IBGAttachmentErrorView *errorView; // @synthesize errorView=_errorView;
@property(retain, nonatomic) IBGAttachmentLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) IBGAttachmentStateHandler *stateHandler; // @synthesize stateHandler=_stateHandler;
@property(retain, nonatomic) IBGChatViewLayoutAttributes *layoutAttributes; // @synthesize layoutAttributes=_layoutAttributes;
- (void).cxx_destruct;
- (void)setAttachmentObject:(id)arg1;
- (void)didClickContentInChatWithTitle:(id)arg1;
- (void)didClickContent;
- (void)applyLayoutAttributes:(id)arg1;
- (void)applyOutboundTheme;
- (void)applyInboundThemeIsSent:(_Bool)arg1;
- (void)setContent:(id)arg1;
- (void)updateConstraints;
- (id)initWithFrame:(struct CGRect)arg1;

@end

