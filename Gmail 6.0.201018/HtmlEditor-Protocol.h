//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GBTWKWebViewComposeController, NSString, NSURL, UIView, WKWebView;
@protocol HtmlEditorDelegate;

@protocol HtmlEditor <NSObject>
@property(readonly, nonatomic) WKWebView *webView;
@property(readonly, nonatomic) struct CGPoint lastTouchPosition;
@property(nonatomic) __weak id <HtmlEditorDelegate> delegate;
- (void)clearSmartComposeSuggestionCache;
- (void)maybeAcceptSmartComposeSuggestion:(void (^)(_Bool))arg1;
- (NSString *)html;
- (void)setBottomMargin:(long long)arg1;
- (void)setTopMargin:(long long)arg1;
- (void)focus;
- (void)clearContent;
- (void)saveSelection;
- (void)removeSignature;
- (void)removeAllInlineAttachments;
- (void)removeAttachment:(NSString *)arg1;
- (void)performAttachFromUrl:(NSURL *)arg1 attachemntId:(NSString *)arg2;
- (void)insertHtml:(NSString *)arg1 append:(_Bool)arg2 readOnly:(_Bool)arg3 block:(_Bool)arg4 showImages:(_Bool)arg5;
- (void)insertHtml:(NSString *)arg1 append:(_Bool)arg2 readOnly:(_Bool)arg3 showImages:(_Bool)arg4;
- (void)setCaretStart;
- (void)evaluateJavaScript:(NSString *)arg1 completionHandler:(void (^)(id, NSError *))arg2;
- (id)runJavaScript:(NSString *)arg1;
- (UIView *)createView:(struct CGRect)arg1 controller:(GBTWKWebViewComposeController *)arg2 includeImageSanitizer:(_Bool)arg3;
@end
