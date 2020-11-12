//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "CSTPasteboardContentCopyableView-Protocol.h"

@class GRWLinkOpener, GSCImageView, GSCProfileDataAboutLink, UIGestureRecognizer, UILabel;
@protocol AVELoggingService, CSTPasteboard;

@interface PSTAboutCardLinkView : UIView <CSTPasteboardContentCopyableView>
{
    GSCImageView *_iconView;
    UILabel *_linkLabel;
    GSCProfileDataAboutLink *_link;
    GRWLinkOpener *_linkOpener;
    id <AVELoggingService> _loggingService;
    id <CSTPasteboard> pasteboard;
    UIGestureRecognizer *pasteboardGestureRecognizer;
}

+ (id)linkString:(id)arg1;
+ (struct CGSize)desiredSizeWithLink:(id)arg1 constrainedToWidth:(double)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) UIGestureRecognizer *pasteboardGestureRecognizer; // @synthesize pasteboardGestureRecognizer;
@property(retain, nonatomic) id <CSTPasteboard> pasteboard; // @synthesize pasteboard;
- (id)viewToDisplayMenuControllerFrom:(id)arg1;
- (void)willDismissCopyMenu:(id)arg1;
- (void)willPresentCopyMenu:(id)arg1;
- (void)pst_copyURL:(id)arg1;
- (void)pst_copyText:(id)arg1;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (_Bool)becomeFirstResponder;
- (_Bool)canBecomeFirstResponder;
- (void)didTapLink;
- (id)initWithFrame:(struct CGRect)arg1 link:(id)arg2 loggingService:(id)arg3;

@end
