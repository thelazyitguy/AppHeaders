//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class AttributedLabelRegular, NSString, NSURL;

@protocol AttributedLabelRegularDelegate <NSObject>
- (void)attributedLabelRegular:(AttributedLabelRegular *)arg1 didSelectLinkWithURL:(NSURL *)arg2;

@optional
- (void)didInitializeTap:(AttributedLabelRegular *)arg1;
- (void)attributedLabelRegularDidTapUnlinkedLabel:(AttributedLabelRegular *)arg1;
- (void)attributedLabelRegular:(AttributedLabelRegular *)arg1 didSelectCaptionedLinkWithURL:(NSURL *)arg2 caption:(NSString *)arg3 range:(struct _NSRange)arg4;
@end

